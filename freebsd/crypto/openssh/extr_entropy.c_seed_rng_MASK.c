
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*,int,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (unsigned char*,char,int) ;
 int FUNC_6 (unsigned char*,int) ;
 int FUNC_7 (scalar_t__,int ) ;

void
FUNC_8(void)
{

 unsigned char VAR_2[VAR_1];

 if (!FUNC_7(VAR_0, FUNC_2()))
  FUNC_4("OpenSSL version mismatch. Built against %lx, you "
      "have %lx", (u_long)VAR_0, FUNC_2());


 if (FUNC_1() == 1) {
  FUNC_3("RNG is ready, skipping seeding");
  return;
 }

 if (FUNC_6(VAR_2, sizeof(VAR_2)) == -1)
  FUNC_4("Could not obtain seed from PRNGd");
 FUNC_0(VAR_2, sizeof(VAR_2), sizeof(VAR_2));
 FUNC_5(VAR_2, '\0', sizeof(VAR_2));


 if (FUNC_1() != 1)
  FUNC_4("PRNG is not seeded");
}

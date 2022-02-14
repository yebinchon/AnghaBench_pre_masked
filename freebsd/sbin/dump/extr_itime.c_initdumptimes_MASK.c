
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int * FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,int ,...) ;
 int FUNC_5 (char*,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__) ;

void
FUNC_8(void)
{
 FILE *VAR_4;

 if ((VAR_4 = FUNC_3(VAR_2, "r")) == ((void*)0)) {
  if (VAR_3 != VAR_0) {
   FUNC_4("WARNING: cannot read %s: %s\n", VAR_2,
       FUNC_7(VAR_3));
   return;
  }



  FUNC_4("WARNING: no file `%s', making an empty one\n", VAR_2);
  if ((VAR_4 = FUNC_3(VAR_2, "w")) == ((void*)0)) {
   FUNC_4("WARNING: cannot create %s: %s\n", VAR_2,
       FUNC_7(VAR_3));
   return;
  }
  (void) FUNC_0(VAR_4);
  if ((VAR_4 = FUNC_3(VAR_2, "r")) == ((void*)0)) {
   FUNC_5("cannot read %s even after creating it: %s\n",
       VAR_2, FUNC_7(VAR_3));

  }
 }
 (void) FUNC_2(FUNC_1(VAR_4), VAR_1);
 FUNC_6(VAR_4);
 (void) FUNC_0(VAR_4);
}

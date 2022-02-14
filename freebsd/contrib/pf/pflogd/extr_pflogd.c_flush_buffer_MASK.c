
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ off_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int,int,int,int *) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;

int
FUNC_7(FILE *VAR_7)
{
 off_t VAR_8;
 int VAR_9 = VAR_5 - VAR_1;

 if (VAR_9 <= 0)
  return (0);

 VAR_8 = FUNC_1(VAR_7);
 if (VAR_8 == (off_t)-1) {
  FUNC_5(1);
  FUNC_4(VAR_0, "Logging suspended: ftello: %s",
      FUNC_6(VAR_6));
  return (1);
 }

 if (FUNC_3(VAR_1, VAR_9, 1, VAR_7) != 1) {
  FUNC_5(1);
  FUNC_4(VAR_0, "Logging suspended: fwrite: %s",
      FUNC_6(VAR_6));
  FUNC_2(FUNC_0(VAR_7), VAR_8);
  return (1);
 }

 FUNC_5(0);
 VAR_5 = VAR_1;
 VAR_2 = VAR_3;
 VAR_4 = 0;

 return (0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
typedef int tmp ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,unsigned long,char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int,char*) ;
 scalar_t__ FUNC_4 (int *,char*,unsigned long) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,int,char*,char*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static void
FUNC_11(char *VAR_2, u_int32_t VAR_3)
{
 FILE *VAR_4;
 char VAR_5[VAR_0];
 int VAR_6;

 VAR_6 = FUNC_8(VAR_5, sizeof(VAR_5), "%s.XXXXXXXXXX", VAR_2);
 if (VAR_6 == -1 || VAR_6 >= VAR_0) {
  FUNC_5("write_checkpoint: temp pathname too long");
  return;
 }
 if ((VAR_6 = FUNC_6(VAR_5)) == -1) {
  FUNC_5("mkstemp(%s): %s", VAR_5, FUNC_9(VAR_1));
  return;
 }
 if ((VAR_4 = FUNC_3(VAR_6, "w")) == ((void*)0)) {
  FUNC_5("write_checkpoint: fdopen: %s", FUNC_9(VAR_1));
  FUNC_10(VAR_5);
  FUNC_0(VAR_6);
  return;
 }
 if (FUNC_4(VAR_4, "%lu\n", (unsigned long)VAR_3) > 0 && FUNC_2(VAR_4) == 0
     && FUNC_7(VAR_5, VAR_2) == 0)
  FUNC_1("wrote checkpoint line %lu to '%s'",
      (unsigned long)VAR_3, VAR_2);
 else
  FUNC_5("failed to write to checkpoint file '%s': %s", VAR_2,
      FUNC_9(VAR_1));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ off_t ;
typedef int FILE ;


 int FUNC_0 (int,char*,int ,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int *,char*,scalar_t__*,scalar_t__*,int*) ;
 int FUNC_7 (scalar_t__,scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static off_t
FUNC_8(off_t VAR_2)
{
 off_t VAR_3, VAR_4, VAR_5;
 int VAR_6, VAR_7;
 FILE *VAR_8;

 (void)FUNC_5(VAR_1, "Reading worklist ...");
 FUNC_3(VAR_1);
 VAR_8 = FUNC_4(VAR_0, "r");
 if (VAR_8 == ((void*)0))
  FUNC_0(1, "Error opening file %s", VAR_0);

 VAR_7 = 0;
 VAR_5 = VAR_2;
 for (;;) {
  ++VAR_7;
  if (3 != FUNC_6(VAR_8, "%jd %jd %d\n", &VAR_3, &VAR_4, &VAR_6)) {
   if (!FUNC_2(VAR_8))
    FUNC_0(1, "Error parsing file %s at line %d",
        VAR_0, VAR_7);
   else
    break;
  }
  FUNC_7(VAR_3, VAR_4, VAR_6);
  VAR_5 -= VAR_4;
 }
 FUNC_1(VAR_8);
 (void)FUNC_5(VAR_1, " done.\n");




 return (VAR_5);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hostname; int type; scalar_t__ timestamp; } ;
typedef int FILE ;


 char VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int *,char*,unsigned long long,int ,int ) ;
 TYPE_1__** VAR_14 ;
 int VAR_15 ;
 char* VAR_16 ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int ,char*,char*) ;
 char* FUNC_6 (char*,char) ;
 scalar_t__ FUNC_7 (char*) ;

int
FUNC_8(void)
{
 FILE *VAR_17;
 char *VAR_18;
 int VAR_19;
 register int VAR_20;

 VAR_17 = FUNC_2(VAR_16, "w");





 if (((void*)0) == VAR_17 && FUNC_7(VAR_16)) {
  VAR_19 = VAR_7 | VAR_8 | VAR_11
   | VAR_5 | VAR_9
   | VAR_6 | VAR_10;
  VAR_18 = FUNC_6(VAR_16 + 1, VAR_0);
  while (((void*)0) != VAR_18) {
   *VAR_18 = '\0';
   if (-1 == FUNC_4(VAR_16, VAR_19)
       && VAR_13 != VAR_1) {
    FUNC_5(VAR_3, "mkdir(%s) failed: %m",
     VAR_16);
    return VAR_2;
   }
   *VAR_18 = VAR_0;
   VAR_18 = FUNC_6(VAR_18 + 1, VAR_0);
  }
  VAR_17 = FUNC_2(VAR_16, "w");
 }

 if (((void*)0) == VAR_17) {
  FUNC_5(VAR_4, "Can't open KOD db file %s for writing: %m",
   VAR_16);

  return VAR_2;
 }

 for (VAR_20 = 0; VAR_20 < VAR_15; VAR_20++) {
  FUNC_3(VAR_17, "%16.16llx %s %s\n", (unsigned long long)
   VAR_14[VAR_20]->timestamp, VAR_14[VAR_20]->type,
   VAR_14[VAR_20]->hostname);
 }

 FUNC_1(VAR_17);
 FUNC_0(VAR_17);

 return VAR_12;
}

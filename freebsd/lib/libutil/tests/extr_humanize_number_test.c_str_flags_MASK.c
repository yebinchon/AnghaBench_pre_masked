
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; char* name; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 char* FUNC_0 (int ) ;
 char* VAR_2 ;
 int FUNC_1 (char*,char*,int ) ;
 scalar_t__ FUNC_2 (char*) ;

__attribute__((used)) static char *
FUNC_3(int VAR_3, char *VAR_4) {
 size_t VAR_5;
 char * VAR_6;

 VAR_6 = FUNC_0(VAR_0);
 VAR_6[0] = '\0';

 for (VAR_5 = 0; VAR_5 < sizeof VAR_1 / sizeof *VAR_1; VAR_5++) {
  if (VAR_3 & VAR_1[VAR_5].value) {
   if (*VAR_6 != 0)
    FUNC_1(VAR_6, VAR_2,
        VAR_0);
   FUNC_1(VAR_6, VAR_1[VAR_5].name, VAR_0);
  }
 }

 if (FUNC_2(VAR_6) == 0)
  FUNC_1(VAR_6, VAR_4, VAR_0);
 return VAR_6;
}

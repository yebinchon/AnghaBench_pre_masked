
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symfile {int symbolcnt; TYPE_1__* symbollist; } ;
struct TYPE_2__ {char* name; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (char**) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char**) ;
 char** FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct symfile* VAR_5 ;

__attribute__((used)) static void FUNC_7(char * VAR_6, char * VAR_7)
{
 int VAR_8,VAR_9;
 int VAR_10 = 0;
 int VAR_11 = 0;
 char **VAR_12;

 for (VAR_8=0; VAR_8 <= VAR_4; VAR_8++)
  VAR_10 += VAR_5[VAR_8].symbolcnt;
 VAR_12 = FUNC_4((2 + 2 * VAR_10 + 3) * sizeof(char *));
 if (VAR_12 == ((void*)0)) {
  FUNC_5("docproc: ");
  FUNC_1(1);
 }
 VAR_12[VAR_11++] = VAR_1;
 VAR_12[VAR_11++] = VAR_0;
 VAR_12[VAR_11++] = VAR_2;
 for (VAR_8=0; VAR_8 < VAR_4; VAR_8++) {
  struct symfile * VAR_13 = &VAR_5[VAR_8];
  for (VAR_9=0; VAR_9 < VAR_13->symbolcnt; VAR_9++) {
   VAR_12[VAR_11++] = VAR_7;
   VAR_12[VAR_11++] = VAR_13->symbollist[VAR_9].name;
  }
 }
 VAR_12[VAR_11++] = VAR_6;
 VAR_12[VAR_11] = ((void*)0);
 FUNC_6("<!-- %s -->\n", VAR_6);
 FUNC_0(VAR_12);
 FUNC_2(VAR_3);
 FUNC_3(VAR_12);
}

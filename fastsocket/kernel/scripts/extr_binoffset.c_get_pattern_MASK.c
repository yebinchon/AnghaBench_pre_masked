
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,int,...) ;
 int VAR_0 ;
 int* VAR_1 ;
 int FUNC_1 (char*,char*,int*) ;
 int VAR_2 ;
 int FUNC_2 () ;

void FUNC_3 (int VAR_3, char *VAR_4 [])
{
 int VAR_5, VAR_6, VAR_7;







 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  VAR_7 = 0;
  VAR_6 = FUNC_1 (VAR_4[VAR_5], "%5i", &VAR_7);
  if (VAR_6 != 1 || VAR_7 > 0xff) {
   FUNC_0 (VAR_2, "pattern or value error in pattern # %d [%s]\n",
     VAR_5, VAR_4[VAR_5]);
   FUNC_2 ();
  }
  VAR_1 [VAR_5] = VAR_7;
 }
 VAR_0 = VAR_3;
}

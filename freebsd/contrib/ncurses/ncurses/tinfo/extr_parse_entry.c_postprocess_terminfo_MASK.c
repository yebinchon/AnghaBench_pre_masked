
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int string_desc ;
typedef int buf2 ;
typedef int TERMTYPE ;


 int * VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (char*) ;
 int VAR_2 ;
 int FUNC_5 (int *,char,int ) ;
 int * VAR_3 ;

__attribute__((used)) static void
FUNC_6(TERMTYPE *VAR_4)
{
    if (FUNC_0(VAR_3)) {
 char VAR_5[VAR_1];
 string_desc VAR_6;

 FUNC_3(&VAR_6, VAR_5, sizeof(VAR_5));
 FUNC_1(&VAR_6, VAR_2);

 FUNC_5(&VAR_6, 'l', VAR_3[0]);
 FUNC_5(&VAR_6, 'q', VAR_3[1]);
 FUNC_5(&VAR_6, 'k', VAR_3[2]);
 FUNC_5(&VAR_6, 'x', VAR_3[3]);
 FUNC_5(&VAR_6, 'j', VAR_3[4]);
 FUNC_5(&VAR_6, 'm', VAR_3[5]);
 FUNC_5(&VAR_6, 'w', VAR_3[6]);
 FUNC_5(&VAR_6, 'u', VAR_3[7]);
 FUNC_5(&VAR_6, 'v', VAR_3[8]);
 FUNC_5(&VAR_6, 't', VAR_3[9]);
 FUNC_5(&VAR_6, 'n', VAR_3[10]);

 if (VAR_5[0]) {
     VAR_2 = FUNC_2(VAR_5);
     FUNC_4("acsc string synthesized from AIX capabilities");
     VAR_3 = VAR_0;
 }
    }



}

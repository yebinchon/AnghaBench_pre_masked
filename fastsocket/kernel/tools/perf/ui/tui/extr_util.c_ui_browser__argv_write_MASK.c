
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_browser {int width; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct ui_browser*,int) ;
 int FUNC_2 (struct ui_browser*,int ) ;

__attribute__((used)) static void FUNC_3(struct ui_browser *VAR_2,
       void *VAR_3, int VAR_4)
{
 char **VAR_5 = VAR_3;
 bool VAR_6 = FUNC_1(VAR_2, VAR_4);

 FUNC_2(VAR_2, VAR_6 ? VAR_1 :
             VAR_0);
 FUNC_0(*VAR_5, VAR_2->width);
}

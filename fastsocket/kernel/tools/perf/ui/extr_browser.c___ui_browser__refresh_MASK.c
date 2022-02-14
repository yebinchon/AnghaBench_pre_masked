
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_browser {int width; int (* refresh ) (struct ui_browser*) ;scalar_t__ height; int x; scalar_t__ y; scalar_t__ navkeypressed; int use_navkeypressed; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ,scalar_t__,int,char) ;
 int FUNC_1 (struct ui_browser*) ;
 int FUNC_2 (struct ui_browser*) ;
 int FUNC_3 (struct ui_browser*,int ) ;

__attribute__((used)) static int FUNC_4(struct ui_browser *VAR_1)
{
 int VAR_2;
 int VAR_3 = VAR_1->width;

 VAR_2 = VAR_1->refresh(VAR_1);
 FUNC_3(VAR_1, VAR_0);

 if (!VAR_1->use_navkeypressed || VAR_1->navkeypressed)
  FUNC_2(VAR_1);
 else
  VAR_3 += 1;

 FUNC_0(VAR_1->y + VAR_2, VAR_1->x,
     VAR_1->height - VAR_2, VAR_3, ' ');

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_browser {int (* seek ) (struct ui_browser*,int ,int ) ;scalar_t__ top_idx; scalar_t__ index; } ;


 int VAR_0 ;
 int FUNC_0 (struct ui_browser*,int ,int ) ;

void FUNC_1(struct ui_browser *VAR_1)
{
 VAR_1->index = VAR_1->top_idx = 0;
 VAR_1->seek(VAR_1, 0, VAR_0);
}

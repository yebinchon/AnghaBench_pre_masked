
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct filegen_entry {TYPE_1__* filegen; struct filegen_entry* next; } ;
struct TYPE_2__ {int flag; int type; int fname; } ;


 int FUNC_0 (TYPE_1__*,int ,int ,int ,int ) ;
 struct filegen_entry* VAR_0 ;
 int VAR_1 ;

void
FUNC_1(void)
{
 struct filegen_entry *VAR_2;

 for (VAR_2 = VAR_0; VAR_2 != ((void*)0); VAR_2 = VAR_2->next)
  FUNC_0(VAR_2->filegen, VAR_1, VAR_2->filegen->fname,
          VAR_2->filegen->type, VAR_2->filegen->flag);
}

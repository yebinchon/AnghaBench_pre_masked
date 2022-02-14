
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lang_nocrossrefs {int * list; struct lang_nocrossrefs* next; } ;
typedef int lang_nocrossref_type ;
struct TYPE_2__ {int notice_all; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 struct lang_nocrossrefs* VAR_2 ;
 struct lang_nocrossrefs* FUNC_0 (int) ;

void
FUNC_1 (lang_nocrossref_type *VAR_3)
{
  struct lang_nocrossrefs *VAR_4;

  VAR_4 = FUNC_0 (sizeof *VAR_4);
  VAR_4->next = VAR_2;
  VAR_4->list = VAR_3;
  VAR_2 = VAR_4;


  VAR_1.notice_all = VAR_0;
}

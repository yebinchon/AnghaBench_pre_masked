
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct symbuf {size_t ngs; TYPE_4__* g64; TYPE_3__* g32; } ;
struct TYPE_10__ {scalar_t__ sz; } ;
struct strbuf {TYPE_5__ l; } ;
struct elfcopy {scalar_t__ oec; TYPE_2__* strtab; TYPE_1__* symtab; } ;
struct TYPE_9__ {scalar_t__ st_name; } ;
struct TYPE_8__ {scalar_t__ st_name; } ;
struct TYPE_7__ {struct strbuf* buf; } ;
struct TYPE_6__ {struct symbuf* buf; } ;
typedef scalar_t__ Elf64_Word ;
typedef scalar_t__ Elf32_Word ;


 scalar_t__ VAR_0 ;

void
FUNC_0(struct elfcopy *VAR_1)
{
 struct symbuf *VAR_2;
 struct strbuf *VAR_3;
 int VAR_4;





 VAR_2 = VAR_1->symtab->buf;
 VAR_3 = VAR_1->strtab->buf;
 for (VAR_4 = 0; (size_t) VAR_4 < VAR_2->ngs; VAR_4++) {
  if (VAR_1->oec == VAR_0) {
   if (VAR_2->g32[VAR_4].st_name == (Elf32_Word)-1)
    VAR_2->g32[VAR_4].st_name = 0;
   else
    VAR_2->g32[VAR_4].st_name += VAR_3->l.sz;
  } else {
   if (VAR_2->g64[VAR_4].st_name == (Elf64_Word)-1)
    VAR_2->g64[VAR_4].st_name = 0;
   else
    VAR_2->g64[VAR_4].st_name += VAR_3->l.sz;
  }
 }
}

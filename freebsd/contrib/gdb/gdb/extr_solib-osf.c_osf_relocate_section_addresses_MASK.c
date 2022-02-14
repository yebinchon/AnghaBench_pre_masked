
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct so_list {struct lm_info* lm_info; } ;
struct section_table {int endaddr; int addr; TYPE_1__* the_bfd_section; } ;
struct lm_sec {scalar_t__ offset; int name; } ;
struct lm_info {scalar_t__ nsecs; TYPE_2__* secs; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {int name; } ;


 struct lm_sec* FUNC_0 (struct lm_sec*,TYPE_2__*,scalar_t__,int,int ) ;
 int FUNC_1 (struct lm_info*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2 (struct so_list *VAR_1,
    struct section_table *VAR_2)
{
  struct lm_info *VAR_3;
  struct lm_sec VAR_4, *VAR_5;


  VAR_3 = VAR_1->lm_info;
  if (VAR_3->nsecs && !VAR_3->secs[0].name)
    FUNC_1 (VAR_3);


  VAR_4.name = VAR_2->the_bfd_section->name;
  VAR_5 = FUNC_0 (&VAR_4, VAR_3->secs, VAR_3->nsecs, sizeof *VAR_5, VAR_0);
  if (VAR_5)
    {
      VAR_2->addr += VAR_5->offset;
      VAR_2->endaddr += VAR_5->offset;
    }
}

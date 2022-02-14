
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_8__ {scalar_t__ cr3; } ;
struct TYPE_5__ {scalar_t__ cr3; } ;
struct TYPE_6__ {TYPE_1__ paging; } ;
struct TYPE_7__ {TYPE_2__ variant; } ;
struct pt_insn_decoder {TYPE_4__ asid; int scache; TYPE_3__ event; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct pt_insn_decoder *VAR_1)
{
 uint64_t VAR_2;
 int VAR_3;

 if (!VAR_1)
  return -VAR_0;

 VAR_2 = VAR_1->event.variant.paging.cr3;
 if (VAR_1->asid.cr3 != VAR_2) {
  VAR_3 = FUNC_0(&VAR_1->scache);
  if (VAR_3 < 0)
   return VAR_3;

  VAR_1->asid.cr3 = VAR_2;
 }

 return 0;
}

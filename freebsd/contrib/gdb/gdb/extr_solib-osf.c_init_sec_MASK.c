
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct so_list {TYPE_1__* lm_info; } ;
struct lm_sec {char const* name; void* offset; void* nameaddr; } ;
struct TYPE_2__ {struct lm_sec* secs; } ;
typedef void* CORE_ADDR ;



__attribute__((used)) static void
FUNC_0 (struct so_list *VAR_0, int VAR_1, CORE_ADDR VAR_2,
   const char *VAR_3, CORE_ADDR VAR_4, CORE_ADDR VAR_5)
{
  struct lm_sec *VAR_6;

  VAR_6 = VAR_0->lm_info->secs + VAR_1;
  VAR_6->nameaddr = VAR_2;
  VAR_6->name = VAR_3;
  VAR_6->offset = VAR_5 - VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
struct xlocale_collate {TYPE_2__* large_pri_table; TYPE_1__* info; } ;
struct TYPE_5__ {int const val; } ;
typedef TYPE_2__ collate_large_t ;
struct TYPE_4__ {int large_count; } ;



__attribute__((used)) static collate_large_t *
FUNC_0(struct xlocale_collate *VAR_0, const wchar_t VAR_1)
{
 int VAR_2 = 0;
 int VAR_3 = VAR_0->info->large_count - 1;
 int VAR_4, VAR_5;
 collate_large_t *VAR_6;
 collate_large_t *VAR_7 = VAR_0->large_pri_table;

 if (VAR_3 < 0)
  return (((void*)0));

 while (VAR_2 <= VAR_3) {
  VAR_4 = (VAR_2 + VAR_3) / 2;
  VAR_6 = VAR_7 + VAR_4;
  VAR_5 = VAR_1 - VAR_6->val;
  if (VAR_5 == 0)
   return (VAR_6);
  if (VAR_5 > 0)
   VAR_2 = VAR_4 + 1;
  else
   VAR_3 = VAR_4 - 1;
 }
 return (((void*)0));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
struct xlocale_collate {TYPE_2__* chain_pri_table; TYPE_1__* info; } ;
struct TYPE_5__ {int const* str; } ;
typedef TYPE_2__ collate_chain_t ;
struct TYPE_4__ {int chain_count; } ;


 int VAR_0 ;
 int FUNC_0 (int const*,int const*,int) ;
 int FUNC_1 (int const*,int ) ;

__attribute__((used)) static collate_chain_t *
FUNC_2(struct xlocale_collate *VAR_1, const wchar_t *VAR_2, int *VAR_3)
{
 int VAR_4 = 0;
 int VAR_5 = VAR_1->info->chain_count - 1;
 int VAR_6, VAR_7, VAR_8;
 collate_chain_t *VAR_9;
 collate_chain_t *VAR_10 = VAR_1->chain_pri_table;

 if (VAR_5 < 0)
  return (((void*)0));

 while (VAR_4 <= VAR_5) {
  VAR_6 = (VAR_4 + VAR_5) / 2;
  VAR_9 = VAR_10 + VAR_6;
  VAR_7 = *VAR_2 - *VAR_9->str;
  if (VAR_7 == 0) {
   VAR_8 = FUNC_1(VAR_9->str, VAR_0);
   VAR_7 = FUNC_0(VAR_2, VAR_9->str, VAR_8);
   if (VAR_7 == 0) {
    *VAR_3 = VAR_8;
    return (VAR_9);
   }
  }
  if (VAR_7 > 0)
   VAR_4 = VAR_6 + 1;
  else
   VAR_5 = VAR_6 - 1;
 }
 return (((void*)0));
}

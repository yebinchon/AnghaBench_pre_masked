
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int wchar_t ;
struct xlocale_collate {TYPE_3__* info; TYPE_1__* char_pri_table; scalar_t__ __collate_load_error; } ;
typedef TYPE_4__* locale_t ;
typedef int int32_t ;
struct TYPE_12__ {int* pri; } ;
struct TYPE_15__ {TYPE_2__ pri; } ;
typedef TYPE_5__ collate_large_t ;
struct TYPE_16__ {int* pri; } ;
typedef TYPE_6__ collate_chain_t ;
struct TYPE_14__ {scalar_t__* components; } ;
struct TYPE_13__ {scalar_t__ large_count; scalar_t__ chain_count; } ;
struct TYPE_11__ {int* pri; } ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 int const VAR_1 ;
 size_t VAR_2 ;
 TYPE_6__* FUNC_1 (struct xlocale_collate*,int*,int*) ;
 TYPE_5__* FUNC_2 (struct xlocale_collate*,int const) ;
 int FUNC_3 (int*,int const*,size_t) ;

int
FUNC_4(locale_t VAR_3, const wchar_t *VAR_4, size_t VAR_5)
{
 int32_t VAR_6;

 if (VAR_5 < 1 || VAR_5 >= VAR_0)
  return (-1);

 FUNC_0(VAR_3);
 struct xlocale_collate *VAR_7 =
  (struct xlocale_collate*)VAR_3->components[VAR_2];

 if (VAR_7->__collate_load_error)
  return ((VAR_5 == 1 && *VAR_4 <= VAR_1) ? *VAR_4 : -1);

 if (VAR_5 == 1) {
  VAR_6 = -1;
  if (*VAR_4 <= VAR_1)
   VAR_6 = VAR_7->char_pri_table[*VAR_4].pri[0];
  else if (VAR_7->info->large_count > 0) {
   collate_large_t *VAR_8;
   VAR_8 = FUNC_2(VAR_7, *VAR_4);
   if (VAR_8)
    VAR_6 = VAR_8->pri.pri[0];
  }
  if (VAR_6 == 0)
   return (1);
  return (VAR_6 > 0 ? VAR_6 : 0);
 }
 if (VAR_7->info->chain_count > 0) {
  wchar_t VAR_9[VAR_0];
  collate_chain_t *VAR_10;
  int VAR_11;

  FUNC_3 (VAR_9, VAR_4, VAR_5);
  VAR_9[VAR_5] = 0;
  VAR_10 = FUNC_1(VAR_7, VAR_9, &VAR_11);
  if (VAR_10) {
   VAR_6 = VAR_10->pri[0];
   if (VAR_6 == 0)
    return (1);
   return (VAR_6 < 0 ? -VAR_6 : VAR_6);
  }
 }
 return (0);
}

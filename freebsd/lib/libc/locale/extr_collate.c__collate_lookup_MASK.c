
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t wchar_t ;
struct xlocale_collate {TYPE_3__* info; TYPE_1__* char_pri_table; } ;
struct TYPE_9__ {int* pri; } ;
struct TYPE_11__ {TYPE_2__ pri; } ;
typedef TYPE_4__ collate_large_t ;
struct TYPE_12__ {int* pri; } ;
typedef TYPE_5__ collate_chain_t ;
struct TYPE_10__ {int directive_count; scalar_t__ large_count; int* directive; int* undef_pri; } ;
struct TYPE_8__ {int* pri; } ;


 size_t const VAR_0 ;
 int VAR_1 ;
 size_t const VAR_2 ;
 TYPE_5__* FUNC_0 (struct xlocale_collate*,size_t const*,int*) ;
 TYPE_4__* FUNC_1 (struct xlocale_collate*,size_t const) ;
 int* FUNC_2 (struct xlocale_collate*,int,int) ;

void
FUNC_3(struct xlocale_collate *VAR_3, const wchar_t *VAR_4, int *VAR_5,
    int *VAR_6, int VAR_7, const int **VAR_8)
{
 collate_chain_t *VAR_9;
 collate_large_t *VAR_10;
 int VAR_11, VAR_12;
 const int *VAR_13;





 if (VAR_7 >= VAR_3->info->directive_count) {
  *VAR_6 = *VAR_4;
  *VAR_5 = 1;
  *VAR_8 = ((void*)0);
  return;
 }





 if ((VAR_13 = *VAR_8) != ((void*)0)) {
  *VAR_6 = *VAR_13;
  VAR_13++;
  if ((VAR_13 == *VAR_8) || (VAR_13 == ((void*)0)))
   *VAR_8 = ((void*)0);
  else
   *VAR_8 = VAR_13;
  *VAR_5 = 0;
  return;
 }


 *VAR_5 = 1;





 if (((VAR_9 = FUNC_0(VAR_3, VAR_4, &VAR_12)) != ((void*)0)) &&
     ((VAR_11 = VAR_9->pri[VAR_7]) >= 0)) {

  *VAR_5 = VAR_12;
  *VAR_6 = VAR_11;

 } else if (*VAR_4 <= VAR_2) {





  *VAR_6 = VAR_3->char_pri_table[*VAR_4].pri[VAR_7];

 } else if ((VAR_3->info->large_count > 0) &&
     ((VAR_10 = FUNC_1(VAR_3, *VAR_4)) != ((void*)0))) {




  *VAR_6 = VAR_10->pri.pri[VAR_7];

 } else {



  if (VAR_3->info->directive[VAR_7] & VAR_1) {

   *VAR_6 = (*VAR_4 & VAR_0);
  } else {
   *VAR_6 = VAR_3->info->undef_pri[VAR_7];
  }

  return;
 }
 if ((VAR_13 = FUNC_2(VAR_3, *VAR_6, VAR_7)) != ((void*)0)) {
  if ((*VAR_6 = *VAR_13) > 0) {
   VAR_13++;
   *VAR_8 = *VAR_13 ? VAR_13 : ((void*)0);
  }
 }

}

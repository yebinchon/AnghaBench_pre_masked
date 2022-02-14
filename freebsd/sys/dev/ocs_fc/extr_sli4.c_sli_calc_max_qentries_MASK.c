
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int* max_qentries; int * count_mask; int * count_method; } ;
struct TYPE_6__ {TYPE_1__ config; int os; } ;
typedef TYPE_2__ sli4_t ;
typedef size_t sli4_qtype_e ;


 int VAR_0 ;
 int * VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int ,char*,int ,int,int,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_2__*,size_t) ;

void
FUNC_4(sli4_t *VAR_4)
{
 sli4_qtype_e VAR_5;
 uint32_t VAR_6, VAR_7, VAR_8;

 for (VAR_5 = VAR_2; VAR_5 < VAR_3; VAR_5++) {
  VAR_4->config.max_qentries[VAR_5] = FUNC_2(VAR_4->config.count_method[VAR_5],
          VAR_4->config.count_mask[VAR_5]);
 }





 for (VAR_5 = VAR_2; VAR_5 < VAR_3; VAR_5++) {
  VAR_7 = VAR_4->config.max_qentries[VAR_5];
  VAR_8 = FUNC_3(VAR_4, VAR_5);
  VAR_6 = VAR_7 * VAR_8;
  if (VAR_6 > FUNC_1(VAR_4->os, VAR_0)) {
   while (VAR_6 > FUNC_1(VAR_4->os, VAR_0)) {

    VAR_7 >>= 1;
    VAR_6 = VAR_7 * VAR_8;
   }
   FUNC_0(VAR_4->os, "[%s]: max_qentries from %d to %d (max dma %d)\n",
    VAR_1[VAR_5], VAR_4->config.max_qentries[VAR_5],
    VAR_7, FUNC_1(VAR_4->os, VAR_0));
   VAR_4->config.max_qentries[VAR_5] = VAR_7;
  }
 }
}

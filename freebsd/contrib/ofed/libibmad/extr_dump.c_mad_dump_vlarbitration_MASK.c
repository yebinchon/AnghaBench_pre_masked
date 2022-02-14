
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {TYPE_1__* vl_entry; } ;
typedef TYPE_2__ ib_vl_arb_table_t ;
struct TYPE_3__ {int weight; int res_vl; } ;


 int FUNC_0 (int ,int*) ;
 int FUNC_1 (char*,int,char*,...) ;

void FUNC_2(char *VAR_0, int VAR_1, void *VAR_2, int VAR_3)
{
 ib_vl_arb_table_t *VAR_4 = VAR_2;
 int VAR_5, VAR_6;
 uint8_t VAR_7;

 VAR_3 /= sizeof(VAR_4->vl_entry[0]);

 VAR_6 = FUNC_1(VAR_0, VAR_1, "\nVL    : |");
 if (VAR_6 >= VAR_1)
  return;
 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  FUNC_0(VAR_4->vl_entry[VAR_5].res_vl, &VAR_7);
  VAR_6 += FUNC_1(VAR_0 + VAR_6, VAR_1 - VAR_6, "0x%-2X|", VAR_7);
  if (VAR_6 >= VAR_1)
   return;
 }

 VAR_6 += FUNC_1(VAR_0 + VAR_6, VAR_1 - VAR_6, "\nWEIGHT: |");
 if (VAR_6 >= VAR_1)
  return;
 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  VAR_6 += FUNC_1(VAR_0 + VAR_6, VAR_1 - VAR_6, "0x%-2X|",
         VAR_4->vl_entry[VAR_5].weight);
  if (VAR_6 >= VAR_1)
   return;
 }

 FUNC_1(VAR_0 + VAR_6, VAR_1 - VAR_6, "\n");
}

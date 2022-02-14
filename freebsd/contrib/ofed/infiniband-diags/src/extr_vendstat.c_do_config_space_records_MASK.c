
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* record; } ;
typedef TYPE_2__ is3_config_space_t ;
typedef int ib_portid_t ;
struct TYPE_5__ {int address; int data; int mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int ,int ,int ,int ,int,TYPE_2__*) ;
 int FUNC_1 (int ,char*,char*) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int,int) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_5(ib_portid_t *VAR_6, unsigned VAR_7,
        is3_config_space_t *VAR_8, unsigned VAR_9)
{
 unsigned VAR_10;

 if (VAR_9 > 18)
  VAR_9 = 18;
 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
  VAR_8->record[VAR_10].address = FUNC_2(VAR_8->record[VAR_10].address);
  VAR_8->record[VAR_10].data = FUNC_2(VAR_8->record[VAR_10].data);
  VAR_8->record[VAR_10].mask = FUNC_2(VAR_8->record[VAR_10].mask);
 }

 if (FUNC_0(VAR_6, VAR_4, VAR_3,
        VAR_7 ? VAR_1 : VAR_0,
        VAR_2, 2 << 22 | VAR_9 << 16,
        VAR_8)) {
  FUNC_1(VAR_5,"cannot %s config space records\n", VAR_7 ? "set" : "get");
  return -1;
 }
 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
  FUNC_4("Config space record at 0x%x: 0x%x\n",
         FUNC_3(VAR_8->record[VAR_10].address),
         FUNC_3(VAR_8->record[VAR_10].data & VAR_8->record[VAR_10].mask));
 }
 return 0;
}

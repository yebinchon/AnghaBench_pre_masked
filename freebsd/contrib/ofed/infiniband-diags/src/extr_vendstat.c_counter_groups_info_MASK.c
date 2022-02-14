
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_of_counter_groups; int * group_masks; } ;
typedef TYPE_1__ is4_counter_group_info_t ;
typedef int ib_portid_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ,int ,int ,int ,int,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char**,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,...) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(ib_portid_t * VAR_5, int VAR_6)
{
 char VAR_7[1024];
 is4_counter_group_info_t *VAR_8;
 int VAR_9, VAR_10;


 FUNC_2(&VAR_7, 0, sizeof(VAR_7));
 if (FUNC_0(VAR_5, VAR_3, VAR_2, VAR_0,
        VAR_1, VAR_6, VAR_7)) {
  FUNC_1(VAR_4,"counter group info query failure\n");
  return -1;
 }
 VAR_8 = (is4_counter_group_info_t *) & VAR_7;
 VAR_10 = VAR_8->num_of_counter_groups;
 FUNC_4("counter_group_info:\n");
 FUNC_4("%d counter groups\n", VAR_10);
 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++)
  FUNC_4("group%d mask %#x\n", VAR_9, FUNC_3(VAR_8->group_masks[VAR_9]));
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint8_t ;
struct TYPE_4__ {TYPE_1__* group_selects; } ;
typedef TYPE_2__ is4_config_counter_groups_t ;
typedef int ib_portid_t ;
typedef int buf ;
struct TYPE_3__ {void* group_select; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *,int ,int ,int ,int ,int,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char**,int ,int) ;
 int FUNC_3 (char*,int,int) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_4(ib_portid_t * VAR_8, int VAR_9)
{
 char VAR_10[1024];
 is4_config_counter_groups_t *VAR_11;


 FUNC_2(&VAR_10, 0, sizeof(VAR_10));
 VAR_11 = (is4_config_counter_groups_t *) & VAR_10;

 FUNC_3("counter_groups_config: configuring group0 %d group1 %d\n", VAR_4,
        VAR_5);
 VAR_11->group_selects[0].group_select = (uint8_t) VAR_4;
 VAR_11->group_selects[1].group_select = (uint8_t) VAR_5;

 if (FUNC_0(VAR_8, VAR_6, VAR_3, VAR_1,
        VAR_2, VAR_9, VAR_10)) {
  FUNC_1(VAR_7, "config counter group set failure\n");
  return -1;
 }

 FUNC_2(&VAR_10, 0, sizeof(VAR_10));

 if (FUNC_0(VAR_8, VAR_6, VAR_3, VAR_0,
        VAR_2, VAR_9, VAR_10)) {
  FUNC_1(VAR_7, "config counter group query failure\n");
  return -1;
 }
 return 0;
}

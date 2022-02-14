
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sa_handle {int dummy; } ;
struct query_params {int dummy; } ;
struct query_cmd {int dummy; } ;
typedef int slvl ;
struct TYPE_4__ {int out_port_num; int in_port_num; int lid; } ;
typedef TYPE_1__ ib_slvl_table_record_t ;
typedef int ib_net64_t ;


 int FUNC_0 (int,int,int,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct sa_handle*,int ,int ,int ,TYPE_1__*,int,int ,struct query_params*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (struct sa_handle*,char*,int*,int*,int*) ;

__attribute__((used)) static int FUNC_4(const struct query_cmd *VAR_6, struct sa_handle * VAR_7,
          struct query_params *VAR_8, int VAR_9, char *VAR_10[])
{
 ib_slvl_table_record_t VAR_11;
 ib_net64_t VAR_12 = 0;
 int VAR_13 = 0, VAR_14 = -1, VAR_15 = -1;

 if (VAR_9 > 0)
  FUNC_3(VAR_7, VAR_10[0], &VAR_13, &VAR_14, &VAR_15);

 FUNC_2(&VAR_11, 0, sizeof(VAR_11));
 FUNC_0(VAR_13, 16, 0, VAR_11.lid, VAR_4, VAR_2);
 FUNC_0(VAR_14, 8, -1, VAR_11.in_port_num, VAR_4, VAR_1);
 FUNC_0(VAR_15, 8, -1, VAR_11.out_port_num, VAR_4, VAR_3);

 return FUNC_1(VAR_7, VAR_0, 0,
     VAR_12, &VAR_11, sizeof(VAR_11),
     VAR_5, VAR_8);
}

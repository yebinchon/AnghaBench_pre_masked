
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sa_handle {int dummy; } ;
struct query_params {int dummy; } ;
struct query_cmd {int dummy; } ;
typedef int ib_net64_t ;
struct TYPE_4__ {int block_num; int lid; } ;
typedef TYPE_1__ ib_guidinfo_record_t ;
typedef int gir ;


 int VAR_0 ;
 int FUNC_0 (int,int,int,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct sa_handle*,int ,int ,int ,TYPE_1__*,int,int ,struct query_params*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (struct sa_handle*,char*,int*,int*,int *) ;

__attribute__((used)) static int FUNC_4(const struct query_cmd *VAR_5, struct sa_handle * VAR_6,
      struct query_params *VAR_7, int VAR_8, char *VAR_9[])
{
 ib_guidinfo_record_t VAR_10;
 ib_net64_t VAR_11 = 0;
 int VAR_12 = 0, VAR_13 = -1;

 if (VAR_8 > 0)
  FUNC_3(VAR_6, VAR_9[0], &VAR_12, &VAR_13, ((void*)0));

 FUNC_2(&VAR_10, 0, sizeof(VAR_10));
 FUNC_0(VAR_12, 16, 0, VAR_10.lid, VAR_1, VAR_3);
 FUNC_0(VAR_13, 8, -1, VAR_10.block_num, VAR_1, VAR_0);

 return FUNC_1(VAR_6, VAR_2, 0,
     VAR_11, &VAR_10, sizeof(VAR_10),
     VAR_4, VAR_7);
}

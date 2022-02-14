
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int swir ;
struct sa_handle {int dummy; } ;
struct query_params {int dummy; } ;
struct query_cmd {int dummy; } ;
struct TYPE_4__ {int lid; } ;
typedef TYPE_1__ ib_switch_info_record_t ;
typedef int ib_net64_t ;


 int FUNC_0 (int,int,int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct sa_handle*,int ,int ,int ,TYPE_1__*,int,int ,struct query_params*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (struct sa_handle*,char*,int*,int *,int *) ;

__attribute__((used)) static int FUNC_4(const struct query_cmd *VAR_4,
    struct sa_handle * VAR_5, struct query_params *VAR_6,
    int VAR_7, char *VAR_8[])
{
 ib_switch_info_record_t VAR_9;
 ib_net64_t VAR_10 = 0;
 int VAR_11 = 0;

 if (VAR_7 > 0)
  FUNC_3(VAR_5, VAR_8[0], &VAR_11, ((void*)0), ((void*)0));

 FUNC_2(&VAR_9, 0, sizeof(VAR_9));
 FUNC_0(VAR_11, 16, 0, VAR_9.lid, VAR_2, VAR_1);

 return FUNC_1(VAR_5, VAR_0, 0,
     VAR_10, &VAR_9, sizeof(VAR_9),
     VAR_3, VAR_6);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sa_query_result {int dummy; } ;
struct sa_handle {int dummy; } ;
struct TYPE_5__ {int capability_mask; } ;
struct TYPE_6__ {TYPE_1__ port_info; } ;
typedef TYPE_2__ ib_portinfo_record_t ;
typedef int ib_net32_t ;
typedef int attr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sa_handle*,int ,int,int ,TYPE_2__*,int,struct sa_query_result*) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct sa_handle * VAR_2, ib_net32_t VAR_3,
       struct sa_query_result *VAR_4)
{
 ib_portinfo_record_t VAR_5;

 FUNC_1(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.port_info.capability_mask = VAR_3;

 return FUNC_0(VAR_2, VAR_1, 1 << 31,
          VAR_0, &VAR_5, sizeof(VAR_5), VAR_4);
}

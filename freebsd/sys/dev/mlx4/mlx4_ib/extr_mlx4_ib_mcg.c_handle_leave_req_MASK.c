
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct mcast_req {size_t func; int func_list; int group_list; int sa_mad; scalar_t__ clean; } ;
struct mcast_group {TYPE_1__* func; } ;
struct TYPE_2__ {int num_pend_reqs; int join_state; } ;


 int FUNC_0 (struct mcast_group*,size_t,int ) ;
 int FUNC_1 (struct mcast_req*) ;
 int FUNC_2 (struct mcast_group*,size_t,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (size_t,struct mcast_group*,int *,int ) ;

__attribute__((used)) static int FUNC_5(struct mcast_group *VAR_0, u8 VAR_1,
       struct mcast_req *VAR_2)
{
 u16 VAR_3;

 if (VAR_2->clean)
  VAR_1 = VAR_0->func[VAR_2->func].join_state;

 VAR_3 = FUNC_0(VAR_0, VAR_2->func, VAR_1);
 if (!VAR_3)
  FUNC_2(VAR_0, VAR_2->func, VAR_1);

 if (!VAR_2->clean)
  FUNC_4(VAR_2->func, VAR_0, &VAR_2->sa_mad, VAR_3);
 --VAR_0->func[VAR_2->func].num_pend_reqs;
 FUNC_3(&VAR_2->group_list);
 FUNC_3(&VAR_2->func_list);
 FUNC_1(VAR_2);
 return 1;
}

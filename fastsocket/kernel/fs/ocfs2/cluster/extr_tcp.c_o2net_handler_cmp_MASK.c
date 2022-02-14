
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct o2net_msg_handler {int nh_msg_type; int nh_key; } ;
typedef int msg_type ;
typedef int key ;


 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static int FUNC_1(struct o2net_msg_handler *VAR_0, u32 VAR_1,
        u32 VAR_2)
{
 int VAR_3 = FUNC_0(&VAR_0->nh_key, &VAR_2, sizeof(VAR_2));

 if (VAR_3 == 0)
  VAR_3 = FUNC_0(&VAR_0->nh_msg_type, &VAR_1, sizeof(VAR_1));

 return VAR_3;
}

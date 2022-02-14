
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct p2p_message {int dummy; } ;
struct p2p_device {int last_seen; } ;
struct p2p_data {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct p2p_data*,int const*,struct p2p_device*,struct p2p_message*) ;
 struct p2p_device* FUNC_2 (struct p2p_data*,int const*) ;
 struct p2p_device* FUNC_3 (struct p2p_data*,int const*) ;

struct p2p_device * FUNC_4(struct p2p_data *VAR_0,
      const u8 *VAR_1,
      struct p2p_message *VAR_2)
{
 struct p2p_device *VAR_3;

 VAR_3 = FUNC_3(VAR_0, VAR_1);
 if (VAR_3) {
  FUNC_0(&VAR_3->last_seen);
  return VAR_3;
 }

 VAR_3 = FUNC_2(VAR_0, VAR_1);
 if (VAR_3 == ((void*)0))
  return ((void*)0);

 FUNC_1(VAR_0, VAR_1, VAR_3, VAR_2);

 return VAR_3;
}

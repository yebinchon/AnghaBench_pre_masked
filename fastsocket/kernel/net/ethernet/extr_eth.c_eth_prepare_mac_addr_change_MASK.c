
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr {int sa_data; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int ext_priv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;

int FUNC_3(struct net_device *VAR_3, void *VAR_4)
{
 struct sockaddr *VAR_5 = VAR_4;

 if (!(FUNC_1(VAR_3)->ext_priv_flags & VAR_2)
     && FUNC_2(VAR_3))
  return -VAR_1;
 if (!FUNC_0(VAR_5->sa_data))
  return -VAR_0;
 return 0;
}

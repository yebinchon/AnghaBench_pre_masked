
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {TYPE_2__* ops; } ;
struct TYPE_3__ {scalar_t__ s_addr; } ;
struct sockaddr_in {scalar_t__ sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct net_device {int dummy; } ;
typedef int sin ;
typedef scalar_t__ __be32 ;
struct TYPE_4__ {int (* bind ) (struct socket*,struct sockaddr*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,char*,scalar_t__*) ;
 int VAR_2 ;
 struct net_device* FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (struct net_device*,int ,int ) ;
 int VAR_3 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct socket*,struct sockaddr*,int) ;

__attribute__((used)) static int FUNC_5(struct socket *VAR_4, char *VAR_5)
{
 struct net_device *VAR_6;
 __be32 VAR_7;
 struct sockaddr_in VAR_8;

 if ((VAR_6 = FUNC_1(&VAR_3, VAR_5)) == ((void*)0))
  return -VAR_1;

 VAR_7 = FUNC_2(VAR_6, 0, VAR_2);
 if (!VAR_7)
  FUNC_3("You probably need to specify IP address on "
         "multicast interface.\n");

 FUNC_0(7, "binding socket with (%s) %pI4\n",
    VAR_5, &VAR_7);


 VAR_8.sin_family = VAR_0;
 VAR_8.sin_addr.s_addr = VAR_7;
 VAR_8.sin_port = 0;

 return VAR_4->ops->bind(VAR_4, (struct sockaddr*)&VAR_8, sizeof(VAR_8));
}

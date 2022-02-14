
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct svc_xprt_class {TYPE_1__* xcl_ops; } ;
struct svc_xprt {int dummy; } ;
struct svc_serv {int dummy; } ;
struct sockaddr_in6 {int sin6_port; int sin6_addr; int sin6_family; } ;
struct TYPE_4__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_2__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct net {int dummy; } ;
typedef int sin6 ;
typedef int sin ;
struct TYPE_3__ {struct svc_xprt* (* xpo_create ) (struct svc_serv*,struct net*,struct sockaddr*,size_t,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct svc_xprt* FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;


 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned short const) ;
 struct svc_xprt* FUNC_3 (struct svc_serv*,struct net*,struct sockaddr*,size_t,int) ;

__attribute__((used)) static struct svc_xprt *FUNC_4(struct svc_xprt_class *VAR_5,
      struct svc_serv *VAR_6,
      struct net *VAR_7,
      const int VAR_8,
      const unsigned short VAR_9,
      int VAR_10)
{
 struct sockaddr_in VAR_11 = {
  .sin_family = VAR_0,
  .sin_addr.s_addr = FUNC_1(VAR_4),
  .sin_port = FUNC_2(VAR_9),
 };







 struct sockaddr *VAR_12;
 size_t VAR_13;

 switch (VAR_8) {
 case 129:
  VAR_12 = (struct sockaddr *)&VAR_11;
  VAR_13 = sizeof(VAR_11);
  break;






 default:
  return FUNC_0(-VAR_2);
 }

 return VAR_5->xcl_ops->xpo_create(VAR_6, VAR_7, VAR_12, VAR_13, VAR_10);
}

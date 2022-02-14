
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct ip_vs_service_user_kern {int port; int addr; int protocol; int af; scalar_t__ fwmark; } ;
struct ip_vs_service {int dummy; } ;


 struct ip_vs_service* FUNC_0 (int) ;
 struct ip_vs_service* FUNC_1 (int ,int ,int *,int ) ;
 struct ip_vs_service* FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (struct ip_vs_service_user_kern*,struct nlattr*,int ) ;

__attribute__((used)) static struct ip_vs_service *FUNC_4(struct nlattr *VAR_0)
{
 struct ip_vs_service_user_kern VAR_1;
 int VAR_2;

 VAR_2 = FUNC_3(&VAR_1, VAR_0, 0);
 if (VAR_2)
  return FUNC_0(VAR_2);

 if (VAR_1.fwmark)
  return FUNC_2(VAR_1.af, VAR_1.fwmark);
 else
  return FUNC_1(VAR_1.af, VAR_1.protocol,
        &VAR_1.addr, VAR_1.port);
}

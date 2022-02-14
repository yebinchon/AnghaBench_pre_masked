
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct net_device {int dummy; } ;
typedef int can_err_mask_t ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,int ,int,int ,struct sock*,char*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_2, struct sock *VAR_3,
    can_err_mask_t VAR_4)
{
 int VAR_5 = 0;

 if (VAR_4)
  VAR_5 = FUNC_0(VAR_2, 0, VAR_4 | VAR_0,
          VAR_1, VAR_3, "raw");

 return VAR_5;
}

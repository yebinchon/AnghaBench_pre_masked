
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ipx_interface_definition {scalar_t__ ipx_special; int ipx_device; int ipx_dlink_type; } ;
struct ipx_interface {int dummy; } ;
typedef scalar_t__ __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct net_device* FUNC_0 (int *,int ) ;
 struct ipx_interface* FUNC_1 (struct net_device*,scalar_t__) ;
 int FUNC_2 (struct ipx_interface*) ;
 int VAR_5 ;
 int VAR_6 ;
 struct ipx_interface* VAR_7 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct ipx_interface_definition *VAR_8)
{
 struct net_device *VAR_9 = ((void*)0);
 __be16 VAR_10 = 0;
 struct ipx_interface *VAR_11;
 int VAR_12 = 0;

 FUNC_4(&VAR_6);
 if (VAR_8->ipx_special == VAR_4) {
  if (VAR_7) {
   FUNC_2(VAR_7);
   goto out;
  }
  VAR_12 = -VAR_2;
  goto out;
 }

 VAR_10 = FUNC_3(VAR_8->ipx_dlink_type);
 VAR_12 = -VAR_3;
 if (!VAR_10)
  goto out;

 VAR_9 = FUNC_0(&VAR_5, VAR_8->ipx_device);
 VAR_12 = -VAR_1;
 if (!VAR_9)
  goto out;

 VAR_11 = FUNC_1(VAR_9, VAR_10);
 VAR_12 = -VAR_0;
 if (!VAR_11)
  goto out;
 FUNC_2(VAR_11);

 VAR_12 = 0;
out:
 FUNC_5(&VAR_6);
 return VAR_12;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ipx_interface {int dummy; } ;
typedef int __be16 ;


 struct ipx_interface* FUNC_0 (struct net_device*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct ipx_interface*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct ipx_interface *FUNC_4(struct net_device *VAR_1,
          __be16 VAR_2)
{
 struct ipx_interface *VAR_3;

 FUNC_2(&VAR_0);
 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (VAR_3)
  FUNC_1(VAR_3);
 FUNC_3(&VAR_0);
 return VAR_3;
}

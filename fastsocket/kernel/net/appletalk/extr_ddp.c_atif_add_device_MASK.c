
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {struct atalk_iface* atalk_ptr; } ;
struct atalk_addr {int dummy; } ;
struct atalk_iface {struct atalk_iface* next; scalar_t__ status; struct atalk_addr address; struct net_device* dev; } ;


 int VAR_0 ;
 struct atalk_iface* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*) ;
 struct atalk_iface* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct atalk_iface *FUNC_4(struct net_device *VAR_3,
        struct atalk_addr *VAR_4)
{
 struct atalk_iface *VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_0);

 if (!VAR_5)
  goto out;

 FUNC_0(VAR_3);
 VAR_5->dev = VAR_3;
 VAR_3->atalk_ptr = VAR_5;
 VAR_5->address = *VAR_4;
 VAR_5->status = 0;

 FUNC_2(&VAR_2);
 VAR_5->next = VAR_1;
 VAR_1 = VAR_5;
 FUNC_3(&VAR_2);
out:
 return VAR_5;
}

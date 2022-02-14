
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {scalar_t__ type; struct dn_dev* dn_ptr; } ;
struct dn_dev_parms {scalar_t__ type; } ;
struct TYPE_3__ {scalar_t__ (* up ) (struct net_device*) ;} ;
struct dn_dev {TYPE_1__ parms; int neigh_parms; int uptime; int timer; struct net_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct dn_dev_parms* VAR_4 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,TYPE_1__*) ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int VAR_6 ;
 int FUNC_3 (struct dn_dev*) ;
 struct dn_dev* FUNC_4 (int,int ) ;
 int FUNC_5 (TYPE_1__*,struct dn_dev_parms*,int) ;
 int FUNC_6 (struct net_device*,int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (struct net_device*) ;

__attribute__((used)) static struct dn_dev *FUNC_10(struct net_device *VAR_7, int *VAR_8)
{
 int VAR_9;
 struct dn_dev_parms *VAR_10 = VAR_4;
 struct dn_dev *VAR_11;

 for(VAR_9 = 0; VAR_9 < VAR_0; VAR_9++, VAR_10++) {
  if (VAR_10->type == VAR_7->type)
   break;
 }

 *VAR_8 = -VAR_2;
 if (VAR_9 == VAR_0)
  return ((void*)0);

 *VAR_8 = -VAR_1;
 if ((VAR_11 = FUNC_4(sizeof(struct dn_dev), VAR_3)) == ((void*)0))
  return ((void*)0);

 FUNC_5(&VAR_11->parms, VAR_10, sizeof(struct dn_dev_parms));
 FUNC_8();
 VAR_7->dn_ptr = VAR_11;
 VAR_11->dev = VAR_7;
 FUNC_2(&VAR_11->timer);

 VAR_11->uptime = VAR_6;

 VAR_11->neigh_parms = FUNC_6(VAR_7, &VAR_5);
 if (!VAR_11->neigh_parms) {
  VAR_7->dn_ptr = ((void*)0);
  FUNC_3(VAR_11);
  return ((void*)0);
 }

 if (VAR_11->parms.up) {
  if (VAR_11->parms.up(VAR_7) < 0) {
   FUNC_7(&VAR_5, VAR_11->neigh_parms);
   VAR_7->dn_ptr = ((void*)0);
   FUNC_3(VAR_11);
   return ((void*)0);
  }
 }

 FUNC_1(VAR_7, &VAR_11->parms);

 FUNC_0(VAR_7);

 *VAR_8 = 0;
 return VAR_11;
}

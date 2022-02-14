
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct module_env {TYPE_1__* auth_zones; } ;
struct auth_zone {int zone_expired; int lock; } ;
struct auth_xfer {int zone_expired; int dclass; int namelen; int name; int lock; } ;
struct TYPE_2__ {int lock; } ;


 struct auth_zone* FUNC_0 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct auth_xfer* VAR_0, struct module_env* VAR_1,
 int VAR_2)
{
 struct auth_zone* VAR_3;


 FUNC_1(&VAR_0->lock);
 VAR_0->zone_expired = VAR_2;
 FUNC_2(&VAR_0->lock);


 FUNC_3(&VAR_1->auth_zones->lock);
 VAR_3 = FUNC_0(VAR_1->auth_zones, VAR_0->name, VAR_0->namelen,
  VAR_0->dclass);
 if(!VAR_3) {
  FUNC_4(&VAR_1->auth_zones->lock);
  return;
 }
 FUNC_5(&VAR_3->lock);
 FUNC_4(&VAR_1->auth_zones->lock);


 VAR_3->zone_expired = VAR_2;
 FUNC_4(&VAR_3->lock);
}

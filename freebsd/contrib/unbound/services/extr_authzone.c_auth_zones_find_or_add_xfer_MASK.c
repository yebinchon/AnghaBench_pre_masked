
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct auth_zones {int dummy; } ;
struct auth_zone {int dclass; int namelen; int name; } ;
struct auth_xfer {int lock; } ;


 struct auth_xfer* FUNC_0 (struct auth_zones*,struct auth_zone*) ;
 struct auth_xfer* FUNC_1 (struct auth_zones*,int ,int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct auth_xfer*
FUNC_3(struct auth_zones* VAR_0, struct auth_zone* VAR_1)
{
 struct auth_xfer* VAR_2;
 VAR_2 = FUNC_1(VAR_0, VAR_1->name, VAR_1->namelen, VAR_1->dclass);
 if(!VAR_2) {

  VAR_2 = FUNC_0(VAR_0, VAR_1);
 } else {
  FUNC_2(&VAR_2->lock);
 }
 return VAR_2;
}

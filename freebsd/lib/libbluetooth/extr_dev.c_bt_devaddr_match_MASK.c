
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bt_devinfo {int devname; int bdaddr; } ;
struct bt_devaddr_match_arg {int devname; int bdaddr; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_2(int VAR_0, struct bt_devinfo const *VAR_1, void *VAR_2)
{
 struct bt_devaddr_match_arg *VAR_3 = (struct bt_devaddr_match_arg *)VAR_2;

 if (!FUNC_0(&VAR_1->bdaddr, VAR_3->bdaddr))
  return (0);

 FUNC_1(VAR_3->devname, VAR_1->devname, sizeof(VAR_3->devname));

 return (1);
}

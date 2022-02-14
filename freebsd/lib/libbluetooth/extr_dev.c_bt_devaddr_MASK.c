
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bt_devinfo {int bdaddr; int devname; } ;
typedef int bdaddr_t ;


 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (struct bt_devinfo*) ;
 int FUNC_2 (int ,char const*,int) ;

int
FUNC_3(char const *VAR_0, bdaddr_t *VAR_1)
{
 struct bt_devinfo VAR_2;

 FUNC_2(VAR_2.devname, VAR_0, sizeof(VAR_2.devname));

 if (FUNC_1(&VAR_2) < 0)
  return (0);

 if (VAR_1 != ((void*)0))
  FUNC_0(VAR_1, &VAR_2.bdaddr);

 return (1);
}

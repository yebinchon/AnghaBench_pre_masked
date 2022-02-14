
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devfs_rule {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,struct devfs_rule*) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct devfs_rule*,int,char**,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int FUNC_5 () ;

__attribute__((used)) static int
FUNC_6(int VAR_4, char **VAR_5)
{
 struct devfs_rule VAR_6;
 int VAR_7;

 if (VAR_4 < 2)
  FUNC_5();
 if (FUNC_4(VAR_5[1], "-") == 0)
  FUNC_2(VAR_3, VAR_0, VAR_1);
 else {
  FUNC_3(&VAR_6, VAR_4 - 1, VAR_5 + 1, VAR_1);
  VAR_7 = FUNC_1(VAR_2, VAR_0, &VAR_6);
  if (VAR_7 == -1)
   FUNC_0(1, "ioctl DEVFSIO_RADD");
 }
 return (0);
}

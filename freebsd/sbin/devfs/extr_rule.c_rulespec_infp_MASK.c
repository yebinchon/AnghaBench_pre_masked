
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devfs_rule {int dummy; } ;
typedef int devfs_rsnum ;
typedef int FILE ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,char**) ;
 int FUNC_2 (int,char*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,unsigned long,struct devfs_rule*) ;
 int VAR_0 ;
 int FUNC_6 (struct devfs_rule*,char*,int ) ;
 int * VAR_1 ;

__attribute__((used)) static void
FUNC_7(FILE *VAR_2, unsigned long VAR_3, devfs_rsnum VAR_4)
{
 struct devfs_rule VAR_5;
 char *VAR_6;
 int VAR_7;

 FUNC_0(VAR_2 == VAR_1);
 while (FUNC_1(VAR_2, &VAR_6)) {
  FUNC_6(&VAR_5, VAR_6, VAR_4);
  VAR_7 = FUNC_5(VAR_0, VAR_3, &VAR_5);
  if (VAR_7 == -1)
   FUNC_2(1, "ioctl");
  FUNC_4(VAR_6);
 }
 if (FUNC_3(VAR_1))
  FUNC_2(1, "stdin");
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filedescent {struct file* fde_file; int fde_caps; } ;
struct filedesc {int dummy; } ;
struct filecaps {int dummy; } ;
struct file {int dummy; } ;
typedef int cap_rights_t ;


 int VAR_0 ;
 int FUNC_0 (struct filedesc*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct filedescent*) ;
 struct filedescent* FUNC_3 (struct filedesc*,int) ;
 int FUNC_4 (int *,struct filecaps*,int) ;

int
FUNC_5(struct filedesc *VAR_1, int VAR_2, cap_rights_t *VAR_3,
    struct file **VAR_4, struct filecaps *VAR_5)
{
 struct filedescent *VAR_6;
 int VAR_7;

 FUNC_0(VAR_1);

 VAR_6 = FUNC_3(VAR_1, VAR_2);
 if (VAR_6 == ((void*)0)) {
  VAR_7 = VAR_0;
  goto out;
 }







 if (VAR_5 != ((void*)0))
  FUNC_4(&VAR_6->fde_caps, VAR_5, 1);

 *VAR_4 = VAR_6->fde_file;

 VAR_7 = 0;
out:
 return (VAR_7);
}

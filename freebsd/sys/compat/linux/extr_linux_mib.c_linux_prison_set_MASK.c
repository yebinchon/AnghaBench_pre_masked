
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsoptlist {int dummy; } ;
struct prison {int pr_mtx; } ;
struct linux_prison {int pr_oss_version; int pr_osname; int pr_osrelease; int pr_osrel; } ;
typedef int oss_version ;
typedef int jsys ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (struct prison*,struct linux_prison**) ;
 int FUNC_1 (char*,int *) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct prison*,int ) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (struct vfsoptlist*,char*,int*,int) ;
 int FUNC_7 (struct vfsoptlist*,char*,void**,int*) ;

__attribute__((used)) static int
FUNC_8(void *VAR_3, void *VAR_4)
{
 struct linux_prison *VAR_5;
 struct prison *VAR_6 = VAR_3;
 struct vfsoptlist *VAR_7 = VAR_4;
 char *VAR_8, *VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;


 VAR_10 = FUNC_6(VAR_7, "linux", &VAR_12, sizeof(VAR_12));
 if (VAR_10 == VAR_0)
  VAR_12 = -1;
 VAR_10 = FUNC_7(VAR_7, "linux.osname", (void **)&VAR_8, &VAR_13);
 if (VAR_10 == VAR_0)
  VAR_8 = ((void*)0);
 else
  VAR_12 = 128;
 VAR_10 = FUNC_7(VAR_7, "linux.osrelease", (void **)&VAR_9, &VAR_13);
 if (VAR_10 == VAR_0)
  VAR_9 = ((void*)0);
 else
  VAR_12 = 128;
 VAR_10 = FUNC_6(VAR_7, "linux.oss_version", &VAR_14,
     sizeof(VAR_14));
 if (VAR_10 == VAR_0)
  VAR_11 = 0;
 else {
  VAR_11 = 1;
  VAR_12 = 128;
 }
 switch (VAR_12) {
 case 129:

  FUNC_2(&VAR_6->pr_mtx);
  FUNC_4(VAR_6, VAR_2);
  FUNC_3(&VAR_6->pr_mtx);
  break;
 case 128:




  FUNC_0(VAR_6, &VAR_5);
  if (VAR_9) {
   (void)FUNC_1(VAR_9, &VAR_5->pr_osrel);
   FUNC_5(VAR_5->pr_osrelease, VAR_9,
       VAR_1);
  }
  if (VAR_8)
   FUNC_5(VAR_5->pr_osname, VAR_8, VAR_1);
  if (VAR_11)
   VAR_5->pr_oss_version = VAR_14;
  FUNC_3(&VAR_6->pr_mtx);
 }

 return (0);
}

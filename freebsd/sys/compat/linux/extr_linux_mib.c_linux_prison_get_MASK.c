
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsoptlist {int dummy; } ;
struct prison {int pr_mtx; } ;
struct linux_prison {char* pr_osname; char* pr_osrelease; int pr_oss_version; } ;
typedef int i ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct linux_prison* FUNC_0 (struct prison*,struct prison**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct vfsoptlist*,char*,int*,int) ;
 int FUNC_3 (struct vfsoptlist*,char*,char*) ;

__attribute__((used)) static int
FUNC_4(void *VAR_3, void *VAR_4)
{
 struct linux_prison *VAR_5;
 struct prison *VAR_6;
 struct prison *VAR_7 = VAR_3;
 struct vfsoptlist *VAR_8 = VAR_4;
 int VAR_9, VAR_10;

 static int VAR_11;


 VAR_5 = FUNC_0(VAR_7, &VAR_6);
 VAR_10 = (VAR_6 == VAR_7) ? VAR_2 : VAR_1;
 VAR_9 = FUNC_2(VAR_8, "linux", &VAR_10, sizeof(VAR_10));
 if (VAR_9 != 0 && VAR_9 != VAR_0)
  goto done;
 if (VAR_10) {
  VAR_9 = FUNC_3(VAR_8, "linux.osname", VAR_5->pr_osname);
  if (VAR_9 != 0 && VAR_9 != VAR_0)
   goto done;
  VAR_9 = FUNC_3(VAR_8, "linux.osrelease", VAR_5->pr_osrelease);
  if (VAR_9 != 0 && VAR_9 != VAR_0)
   goto done;
  VAR_9 = FUNC_2(VAR_8, "linux.oss_version",
      &VAR_5->pr_oss_version, sizeof(VAR_5->pr_oss_version));
  if (VAR_9 != 0 && VAR_9 != VAR_0)
   goto done;
 } else {




  VAR_9 = FUNC_3(VAR_8, "linux.osname", "");
  if (VAR_9 != 0 && VAR_9 != VAR_0)
   goto done;
  VAR_9 = FUNC_3(VAR_8, "linux.osrelease", "");
  if (VAR_9 != 0 && VAR_9 != VAR_0)
   goto done;
  VAR_9 = FUNC_2(VAR_8, "linux.oss_version", &VAR_11,
      sizeof(VAR_5->pr_oss_version));
  if (VAR_9 != 0 && VAR_9 != VAR_0)
   goto done;
 }
 VAR_9 = 0;

 done:
 FUNC_1(&VAR_6->pr_mtx);

 return (VAR_9);
}

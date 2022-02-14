
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statfs {int f_flags; char* f_mntfromname; char* f_mntonname; } ;
struct iovec {int dummy; } ;
typedef int errmsg ;


 int VAR_0 ;
 int FUNC_0 (struct iovec**,int*,char*,char*,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct iovec*,int,int) ;
 int FUNC_2 (char*,char*,int ,char*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct statfs *VAR_2)
{
 struct iovec *VAR_3;
 int VAR_4;
 char VAR_5[255];

 if (VAR_2 == ((void*)0))
  return (0);

 VAR_3 = ((void*)0);
 VAR_4 = 0;
 VAR_5[0] = '\0';





 if (VAR_2->f_flags & VAR_0) {
  FUNC_0(&VAR_3, &VAR_4, "fstype", "ffs", 4);
  FUNC_0(&VAR_3, &VAR_4, "from", VAR_2->f_mntfromname,
      (size_t)-1);
  FUNC_0(&VAR_3, &VAR_4, "fspath", VAR_2->f_mntonname,
      (size_t)-1);
  FUNC_0(&VAR_3, &VAR_4, "errmsg", VAR_5,
      sizeof(VAR_5));
  FUNC_0(&VAR_3, &VAR_4, "update", ((void*)0), 0);
  FUNC_0(&VAR_3, &VAR_4, "reload", ((void*)0), 0);




  FUNC_0(&VAR_3, &VAR_4, "ro", ((void*)0), 0);
  if (FUNC_1(VAR_3, VAR_4, VAR_2->f_flags) == 0) {
   return (0);
  }
  FUNC_2("mount reload of '%s' failed: %s %s\n\n",
      VAR_2->f_mntonname, FUNC_3(VAR_1), VAR_5);
  return (1);
 }
 return (0);
}

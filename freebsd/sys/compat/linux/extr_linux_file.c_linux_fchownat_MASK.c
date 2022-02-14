
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct linux_fchownat_args {int flag; int dfd; int gid; int uid; int filename; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct thread*,int ,char**,int) ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct thread*,int,char*,int ,int ,int ,int) ;

int
FUNC_3(struct thread *VAR_6, struct linux_fchownat_args *VAR_7)
{
 char *VAR_8;
 int VAR_9, VAR_10, VAR_11;

 if (VAR_7->flag & ~VAR_4)
  return (VAR_2);

 VAR_10 = (VAR_7->dfd == VAR_3) ? VAR_0 : VAR_7->dfd;
 FUNC_0(VAR_6, VAR_7->filename, &VAR_8, VAR_10);

 VAR_11 = (VAR_7->flag & VAR_4) == 0 ? 0 :
     VAR_1;
 VAR_9 = FUNC_2(VAR_6, VAR_10, VAR_8, VAR_5, VAR_7->uid, VAR_7->gid,
     VAR_11);
 FUNC_1(VAR_8);
 return (VAR_9);
}

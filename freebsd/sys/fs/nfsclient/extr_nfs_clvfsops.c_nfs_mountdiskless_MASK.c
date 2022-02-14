
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct thread {int td_ucred; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
struct nfs_args {int dummy; } ;
struct mount {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nfs_args*,struct mount*,struct sockaddr*,char*,int *,int ,char*,int,int *,int ,struct vnode**,int ,struct thread*,int ,int ,int ) ;
 int FUNC_1 (char*,char*,int) ;
 struct sockaddr* FUNC_2 (struct sockaddr*,int ) ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5(char *VAR_3,
    struct sockaddr_in *VAR_4, struct nfs_args *VAR_5, struct thread *VAR_6,
    struct vnode **VAR_7, struct mount *VAR_8)
{
 struct sockaddr *VAR_9;
 int VAR_10, VAR_11;
 char *VAR_12;





 VAR_12 = FUNC_3(VAR_3, ':');
 if (VAR_12 != ((void*)0))
  VAR_10 = FUNC_4(++VAR_12);
 else
  VAR_10 = 0;
 VAR_9 = FUNC_2((struct sockaddr *)VAR_4, VAR_0);
 if ((VAR_11 = FUNC_0(VAR_5, VAR_8, VAR_9, VAR_3, ((void*)0), 0, VAR_12, VAR_10,
     ((void*)0), 0, VAR_7, VAR_6->td_ucred, VAR_6, VAR_1,
     VAR_2, 0)) != 0) {
  FUNC_1("nfs_mountroot: mount %s on /: %d\n", VAR_3, VAR_11);
  return (VAR_11);
 }
 return (0);
}

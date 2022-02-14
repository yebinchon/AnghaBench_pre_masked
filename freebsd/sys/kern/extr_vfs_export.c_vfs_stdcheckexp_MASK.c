
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int dummy; } ;
struct sockaddr {int dummy; } ;
struct netcred {int netc_exflags; int netc_numsecflavors; int* netc_secflavors; struct ucred* netc_anon; } ;
struct mount {int mnt_explock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ucred*) ;
 int FUNC_1 (int *,int ,int *) ;
 struct netcred* FUNC_2 (struct mount*,struct sockaddr*) ;

int
FUNC_3(struct mount *VAR_3, struct sockaddr *VAR_4, int *VAR_5,
    struct ucred **VAR_6, int *VAR_7, int **VAR_8)
{
 struct netcred *VAR_9;

 FUNC_1(&VAR_3->mnt_explock, VAR_2, ((void*)0));
 VAR_9 = FUNC_2(VAR_3, VAR_4);
 if (VAR_9 == ((void*)0)) {
  FUNC_1(&VAR_3->mnt_explock, VAR_1, ((void*)0));
  *VAR_6 = ((void*)0);
  return (VAR_0);
 }
 *VAR_5 = VAR_9->netc_exflags;
 if ((*VAR_6 = VAR_9->netc_anon) != ((void*)0))
  FUNC_0(*VAR_6);
 if (VAR_7)
  *VAR_7 = VAR_9->netc_numsecflavors;
 if (VAR_8)
  *VAR_8 = VAR_9->netc_secflavors;
 FUNC_1(&VAR_3->mnt_explock, VAR_1, ((void*)0));
 return (0);
}

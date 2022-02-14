
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct puffs_usermount {int dummy; } ;
struct TYPE_2__ {int tv_sec; } ;
struct itimerval {TYPE_1__ it_value; } ;
struct dtfs_poll {int dp_pcc; } ;
struct dtfs_mount {int dtm_pollent; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct dtfs_poll*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct itimerval*,int ,int) ;
 int FUNC_2 (struct puffs_usermount*) ;
 int FUNC_3 (int ) ;
 struct dtfs_mount* FUNC_4 (struct puffs_usermount*) ;
 int FUNC_5 (int ,struct itimerval*,int *) ;

int
FUNC_6(struct puffs_usermount *VAR_7, void *VAR_8, int *VAR_9)
{
 struct dtfs_mount *VAR_10 = FUNC_4(VAR_7);
 struct dtfs_poll VAR_11;
 struct itimerval VAR_12;

 FUNC_1(&VAR_12, 0, sizeof(struct itimerval));
 VAR_12.it_value.tv_sec = 4;
 if (FUNC_5(VAR_0, &VAR_12, ((void*)0)) == -1)
  return VAR_6;

 VAR_11.dp_pcc = FUNC_2(VAR_7);
 FUNC_0(&VAR_10->dtm_pollent, &VAR_11, VAR_5);
 FUNC_3(VAR_11.dp_pcc);

 *VAR_9 = *VAR_9 & (VAR_1 | VAR_2 | VAR_3 | VAR_4);
 return 0;
}

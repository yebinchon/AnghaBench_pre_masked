
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vacm_user {struct vacm_user* group; int group_users; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,struct vacm_user*,int ,int ) ;
 int FUNC_2 (struct vacm_user*) ;
 struct vacm_user VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

int
FUNC_3(struct vacm_user *VAR_8)
{
 if (VAR_8->group != ((void*)0) && VAR_8->group != &VAR_0) {
  FUNC_1(&VAR_8->group->group_users, VAR_8, VAR_3, VAR_6);
  if (FUNC_0(&VAR_8->group->group_users)) {
   FUNC_1(&VAR_2, VAR_8->group,
       VAR_1, VAR_5);
   FUNC_2(VAR_8->group);
  }
 }

 FUNC_1(&VAR_4, VAR_8, VAR_3, VAR_7);
 FUNC_2(VAR_8);

 return (0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct context {int user; int role; int type; int str; scalar_t__ len; } ;
struct TYPE_2__ {char** p_user_val_to_name; char** p_role_val_to_name; char** p_type_val_to_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (scalar_t__,int ) ;
 char* FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct context*) ;
 int FUNC_3 (struct context*,char**) ;
 TYPE_1__ VAR_2 ;
 int FUNC_4 (char*,char*,char*,char*,char*) ;
 scalar_t__ FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(struct context *VAR_3, char **VAR_4, u32 *VAR_5)
{
 char *VAR_6;

 *VAR_4 = ((void*)0);
 *VAR_5 = 0;

 if (VAR_3->len) {
  *VAR_5 = VAR_3->len;
  *VAR_4 = FUNC_1(VAR_3->str, VAR_1);
  if (!(*VAR_4))
   return -VAR_0;
  return 0;
 }


 *VAR_5 += FUNC_5(VAR_2.p_user_val_to_name[VAR_3->user - 1]) + 1;
 *VAR_5 += FUNC_5(VAR_2.p_role_val_to_name[VAR_3->role - 1]) + 1;
 *VAR_5 += FUNC_5(VAR_2.p_type_val_to_name[VAR_3->type - 1]) + 1;
 *VAR_5 += FUNC_2(VAR_3);


 VAR_6 = FUNC_0(*VAR_5, VAR_1);
 if (!VAR_6)
  return -VAR_0;
 *VAR_4 = VAR_6;




 FUNC_4(VAR_6, "%s:%s:%s",
  VAR_2.p_user_val_to_name[VAR_3->user - 1],
  VAR_2.p_role_val_to_name[VAR_3->role - 1],
  VAR_2.p_type_val_to_name[VAR_3->type - 1]);
 VAR_6 += FUNC_5(VAR_2.p_user_val_to_name[VAR_3->user - 1]) +
       1 + FUNC_5(VAR_2.p_role_val_to_name[VAR_3->role - 1]) +
       1 + FUNC_5(VAR_2.p_type_val_to_name[VAR_3->type - 1]);

 FUNC_3(VAR_3, &VAR_6);

 *VAR_6 = 0;

 return 0;
}

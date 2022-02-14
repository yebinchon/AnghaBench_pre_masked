
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct user_datum {int value; } ;
struct type_datum {int value; scalar_t__ attribute; } ;
struct sidtab {int dummy; } ;
struct role_datum {int value; } ;
struct TYPE_6__ {int table; } ;
struct TYPE_5__ {int table; } ;
struct TYPE_4__ {int table; } ;
struct policydb {TYPE_3__ p_types; TYPE_2__ p_roles; TYPE_1__ p_users; } ;
struct context {int type; int role; int user; } ;


 int VAR_0 ;
 int FUNC_0 (struct context*) ;
 int FUNC_1 (struct context*) ;
 void* FUNC_2 (int ,char*) ;
 int FUNC_3 (struct policydb*,char,char**,struct context*,struct sidtab*,int) ;
 int FUNC_4 (struct policydb*,struct context*) ;

__attribute__((used)) static int FUNC_5(struct policydb *VAR_1,
        struct sidtab *VAR_2,
        char *VAR_3,
        u32 VAR_4,
        struct context *VAR_5,
        u32 VAR_6)
{
 struct role_datum *VAR_7;
 struct type_datum *VAR_8;
 struct user_datum *VAR_9;
 char *VAR_10, *VAR_11, VAR_12;
 int VAR_13 = 0;

 FUNC_1(VAR_5);



 VAR_13 = -VAR_0;
 VAR_10 = (char *) VAR_3;


 VAR_11 = VAR_10;
 while (*VAR_11 && *VAR_11 != ':')
  VAR_11++;

 if (*VAR_11 == 0)
  goto out;

 *VAR_11++ = 0;

 VAR_9 = FUNC_2(VAR_1->p_users.table, VAR_10);
 if (!VAR_9)
  goto out;

 VAR_5->user = VAR_9->value;


 VAR_10 = VAR_11;
 while (*VAR_11 && *VAR_11 != ':')
  VAR_11++;

 if (*VAR_11 == 0)
  goto out;

 *VAR_11++ = 0;

 VAR_7 = FUNC_2(VAR_1->p_roles.table, VAR_10);
 if (!VAR_7)
  goto out;
 VAR_5->role = VAR_7->value;


 VAR_10 = VAR_11;
 while (*VAR_11 && *VAR_11 != ':')
  VAR_11++;
 VAR_12 = *VAR_11;
 *VAR_11++ = 0;

 VAR_8 = FUNC_2(VAR_1->p_types.table, VAR_10);
 if (!VAR_8 || VAR_8->attribute)
  goto out;

 VAR_5->type = VAR_8->value;

 VAR_13 = FUNC_3(VAR_1, VAR_12, &VAR_11, VAR_5, VAR_2, VAR_6);
 if (VAR_13)
  goto out;

 if ((VAR_11 - VAR_3) < VAR_4) {
  VAR_13 = -VAR_0;
  goto out;
 }


 if (!FUNC_4(VAR_1, VAR_5)) {
  VAR_13 = -VAR_0;
  goto out;
 }
 VAR_13 = 0;
out:
 if (VAR_13)
  FUNC_0(VAR_5);
 return VAR_13;
}

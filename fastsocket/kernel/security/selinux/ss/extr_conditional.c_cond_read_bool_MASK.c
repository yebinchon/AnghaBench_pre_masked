
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct policydb {int dummy; } ;
struct hashtab {int dummy; } ;
struct cond_bool_datum {void* state; void* value; } ;
typedef char __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cond_bool_datum*) ;
 int FUNC_1 (char*,struct cond_bool_datum*,int *) ;
 int FUNC_2 (struct hashtab*,char*,struct cond_bool_datum*) ;
 char* FUNC_3 (size_t,int ) ;
 struct cond_bool_datum* FUNC_4 (int,int ) ;
 void* FUNC_5 (char) ;
 int FUNC_6 (char*,void*,size_t) ;

int FUNC_7(struct policydb *VAR_3, struct hashtab *VAR_4, void *VAR_5)
{
 char *VAR_6 = ((void*)0);
 struct cond_bool_datum *VAR_7;
 __le32 VAR_8[3];
 u32 VAR_9;
 int VAR_10;

 VAR_7 = FUNC_4(sizeof(struct cond_bool_datum), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_10 = FUNC_6(VAR_8, VAR_5, sizeof VAR_8);
 if (VAR_10)
  goto err;

 VAR_7->value = FUNC_5(VAR_8[0]);
 VAR_7->state = FUNC_5(VAR_8[1]);

 VAR_10 = -VAR_0;
 if (!FUNC_0(VAR_7))
  goto err;

 VAR_9 = FUNC_5(VAR_8[2]);

 VAR_10 = -VAR_1;
 VAR_6 = FUNC_3(VAR_9 + 1, VAR_2);
 if (!VAR_6)
  goto err;
 VAR_10 = FUNC_6(VAR_6, VAR_5, VAR_9);
 if (VAR_10)
  goto err;
 VAR_6[VAR_9] = '\0';
 VAR_10 = FUNC_2(VAR_4, VAR_6, VAR_7);
 if (VAR_10)
  goto err;

 return 0;
err:
 FUNC_1(VAR_6, VAR_7, ((void*)0));
 return VAR_10;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct policydb {int dummy; } ;
struct perm_datum {void* value; } ;
struct hashtab {int dummy; } ;
typedef char __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hashtab*,char*,struct perm_datum*) ;
 char* FUNC_1 (size_t,int ) ;
 struct perm_datum* FUNC_2 (int,int ) ;
 void* FUNC_3 (char) ;
 int FUNC_4 (char*,void*,size_t) ;
 int FUNC_5 (char*,struct perm_datum*,int *) ;

__attribute__((used)) static int FUNC_6(struct policydb *VAR_2, struct hashtab *VAR_3, void *VAR_4)
{
 char *VAR_5 = ((void*)0);
 struct perm_datum *VAR_6;
 int VAR_7;
 __le32 VAR_8[2];
 u32 VAR_9;

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_1);
 if (!VAR_6) {
  VAR_7 = -VAR_0;
  goto out;
 }

 VAR_7 = FUNC_4(VAR_8, VAR_4, sizeof VAR_8);
 if (VAR_7 < 0)
  goto bad;

 VAR_9 = FUNC_3(VAR_8[0]);
 VAR_6->value = FUNC_3(VAR_8[1]);

 VAR_5 = FUNC_1(VAR_9 + 1, VAR_1);
 if (!VAR_5) {
  VAR_7 = -VAR_0;
  goto bad;
 }
 VAR_7 = FUNC_4(VAR_5, VAR_4, VAR_9);
 if (VAR_7 < 0)
  goto bad;
 VAR_5[VAR_9] = '\0';

 VAR_7 = FUNC_0(VAR_3, VAR_5, VAR_6);
 if (VAR_7)
  goto bad;
out:
 return VAR_7;
bad:
 FUNC_5(VAR_5, VAR_6, ((void*)0));
 goto out;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct policydb {int dummy; } ;
struct hashtab {int dummy; } ;
struct cat_datum {void* isalias; void* value; } ;
typedef char __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,struct cat_datum*,int *) ;
 int FUNC_1 (struct hashtab*,char*,struct cat_datum*) ;
 char* FUNC_2 (size_t,int ) ;
 struct cat_datum* FUNC_3 (int,int ) ;
 void* FUNC_4 (char) ;
 int FUNC_5 (char*,void*,size_t) ;

__attribute__((used)) static int FUNC_6(struct policydb *VAR_2, struct hashtab *VAR_3, void *VAR_4)
{
 char *VAR_5 = ((void*)0);
 struct cat_datum *VAR_6;
 int VAR_7;
 __le32 VAR_8[3];
 u32 VAR_9;

 VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_1);
 if (!VAR_6) {
  VAR_7 = -VAR_0;
  goto out;
 }

 VAR_7 = FUNC_5(VAR_8, VAR_4, sizeof VAR_8);
 if (VAR_7 < 0)
  goto bad;

 VAR_9 = FUNC_4(VAR_8[0]);
 VAR_6->value = FUNC_4(VAR_8[1]);
 VAR_6->isalias = FUNC_4(VAR_8[2]);

 VAR_5 = FUNC_2(VAR_9 + 1, VAR_1);
 if (!VAR_5) {
  VAR_7 = -VAR_0;
  goto bad;
 }
 VAR_7 = FUNC_5(VAR_5, VAR_4, VAR_9);
 if (VAR_7 < 0)
  goto bad;
 VAR_5[VAR_9] = '\0';

 VAR_7 = FUNC_1(VAR_3, VAR_5, VAR_6);
 if (VAR_7)
  goto bad;
out:
 return VAR_7;

bad:
 FUNC_0(VAR_5, VAR_6, ((void*)0));
 goto out;
}

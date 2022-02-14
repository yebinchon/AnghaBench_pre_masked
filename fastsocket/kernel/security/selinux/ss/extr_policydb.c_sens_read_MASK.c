
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct policydb {int dummy; } ;
struct mls_level {int dummy; } ;
struct level_datum {void* level; void* isalias; } ;
struct hashtab {int dummy; } ;
typedef char __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hashtab*,char*,struct level_datum*) ;
 void* FUNC_1 (int,int ) ;
 struct level_datum* FUNC_2 (int,int ) ;
 void* FUNC_3 (char) ;
 scalar_t__ FUNC_4 (void*,void*) ;
 int FUNC_5 (char*,void*,size_t) ;
 int FUNC_6 (char*,struct level_datum*,int *) ;

__attribute__((used)) static int FUNC_7(struct policydb *VAR_3, struct hashtab *VAR_4, void *VAR_5)
{
 char *VAR_6 = ((void*)0);
 struct level_datum *VAR_7;
 int VAR_8;
 __le32 VAR_9[2];
 u32 VAR_10;

 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_2);
 if (!VAR_7) {
  VAR_8 = -VAR_1;
  goto out;
 }

 VAR_8 = FUNC_5(VAR_9, VAR_5, sizeof VAR_9);
 if (VAR_8 < 0)
  goto bad;

 VAR_10 = FUNC_3(VAR_9[0]);
 VAR_7->isalias = FUNC_3(VAR_9[1]);

 VAR_6 = FUNC_1(VAR_10 + 1, VAR_2);
 if (!VAR_6) {
  VAR_8 = -VAR_1;
  goto bad;
 }
 VAR_8 = FUNC_5(VAR_6, VAR_5, VAR_10);
 if (VAR_8 < 0)
  goto bad;
 VAR_6[VAR_10] = '\0';

 VAR_7->level = FUNC_1(sizeof(struct mls_level), VAR_2);
 if (!VAR_7->level) {
  VAR_8 = -VAR_1;
  goto bad;
 }
 if (FUNC_4(VAR_7->level, VAR_5)) {
  VAR_8 = -VAR_0;
  goto bad;
 }

 VAR_8 = FUNC_0(VAR_4, VAR_6, VAR_7);
 if (VAR_8)
  goto bad;
out:
 return VAR_8;
bad:
 FUNC_6(VAR_6, VAR_7, ((void*)0));
 goto out;
}

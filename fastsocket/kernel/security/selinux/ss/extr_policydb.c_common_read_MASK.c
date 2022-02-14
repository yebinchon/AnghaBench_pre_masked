
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct policydb {int dummy; } ;
struct hashtab {int dummy; } ;
struct TYPE_2__ {int table; void* nprim; } ;
struct common_datum {TYPE_1__ permissions; void* value; } ;
typedef char __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,struct common_datum*,int *) ;
 int FUNC_1 (struct hashtab*,char*,struct common_datum*) ;
 char* FUNC_2 (size_t,int ) ;
 struct common_datum* FUNC_3 (int,int ) ;
 void* FUNC_4 (char) ;
 int FUNC_5 (char*,void*,size_t) ;
 int FUNC_6 (struct policydb*,int ,void*) ;
 int FUNC_7 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_8(struct policydb *VAR_3, struct hashtab *VAR_4, void *VAR_5)
{
 char *VAR_6 = ((void*)0);
 struct common_datum *VAR_7;
 __le32 VAR_8[4];
 u32 VAR_9, VAR_10;
 int VAR_11, VAR_12;

 VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_1);
 if (!VAR_7) {
  VAR_12 = -VAR_0;
  goto out;
 }

 VAR_12 = FUNC_5(VAR_8, VAR_5, sizeof VAR_8);
 if (VAR_12 < 0)
  goto bad;

 VAR_9 = FUNC_4(VAR_8[0]);
 VAR_7->value = FUNC_4(VAR_8[1]);

 VAR_12 = FUNC_7(&VAR_7->permissions, VAR_2);
 if (VAR_12)
  goto bad;
 VAR_7->permissions.nprim = FUNC_4(VAR_8[2]);
 VAR_10 = FUNC_4(VAR_8[3]);

 VAR_6 = FUNC_2(VAR_9 + 1, VAR_1);
 if (!VAR_6) {
  VAR_12 = -VAR_0;
  goto bad;
 }
 VAR_12 = FUNC_5(VAR_6, VAR_5, VAR_9);
 if (VAR_12 < 0)
  goto bad;
 VAR_6[VAR_9] = '\0';

 for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
  VAR_12 = FUNC_6(VAR_3, VAR_7->permissions.table, VAR_5);
  if (VAR_12)
   goto bad;
 }

 VAR_12 = FUNC_1(VAR_4, VAR_6, VAR_7);
 if (VAR_12)
  goto bad;
out:
 return VAR_12;
bad:
 FUNC_0(VAR_6, VAR_7, ((void*)0));
 goto out;
}

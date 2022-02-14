
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct role_datum {size_t value; size_t bounds; int types; int dominates; } ;
struct policydb {scalar_t__ policyvers; } ;
struct policy_data {struct policydb* p; void* fp; } ;
typedef int buf ;
typedef char __le32 ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 char FUNC_1 (size_t) ;
 int FUNC_2 (int *,void*) ;
 int FUNC_3 (char*,int,size_t,void*) ;
 size_t FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(void *VAR_1, void *VAR_2, void *VAR_3)
{
 char *VAR_4 = VAR_1;
 struct role_datum *VAR_5 = VAR_2;
 struct policy_data *VAR_6 = VAR_3;
 void *VAR_7 = VAR_6->fp;
 struct policydb *VAR_8 = VAR_6->p;
 __le32 VAR_9[3];
 size_t VAR_10, VAR_11;
 int VAR_12;

 VAR_11 = FUNC_4(VAR_4);
 VAR_10 = 0;
 VAR_9[VAR_10++] = FUNC_1(VAR_11);
 VAR_9[VAR_10++] = FUNC_1(VAR_5->value);
 if (VAR_8->policyvers >= VAR_0)
  VAR_9[VAR_10++] = FUNC_1(VAR_5->bounds);

 FUNC_0(VAR_10 > (sizeof(VAR_9)/sizeof(VAR_9[0])));

 VAR_12 = FUNC_3(VAR_9, sizeof(u32), VAR_10, VAR_7);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_3(VAR_4, 1, VAR_11, VAR_7);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_2(&VAR_5->dominates, VAR_7);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_2(&VAR_5->types, VAR_7);
 if (VAR_12)
  return VAR_12;

 return 0;
}

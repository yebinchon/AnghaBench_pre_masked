
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct user_datum {size_t value; size_t bounds; int dfltlevel; int range; int roles; } ;
struct policydb {scalar_t__ policyvers; } ;
struct policy_data {void* fp; struct policydb* p; } ;
typedef int buf ;
typedef char __le32 ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 char FUNC_1 (size_t) ;
 int FUNC_2 (int *,void*) ;
 int FUNC_3 (int *,void*) ;
 int FUNC_4 (int *,void*) ;
 int FUNC_5 (char*,int,size_t,void*) ;
 size_t FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(void *VAR_1, void *VAR_2, void *VAR_3)
{
 char *VAR_4 = VAR_1;
 struct user_datum *VAR_5 = VAR_2;
 struct policy_data *VAR_6 = VAR_3;
 struct policydb *VAR_7 = VAR_6->p;
 void *VAR_8 = VAR_6->fp;
 __le32 VAR_9[3];
 size_t VAR_10, VAR_11;
 int VAR_12;

 VAR_11 = FUNC_6(VAR_4);
 VAR_10 = 0;
 VAR_9[VAR_10++] = FUNC_1(VAR_11);
 VAR_9[VAR_10++] = FUNC_1(VAR_5->value);
 if (VAR_7->policyvers >= VAR_0)
  VAR_9[VAR_10++] = FUNC_1(VAR_5->bounds);
 FUNC_0(VAR_10 > (sizeof(VAR_9) / sizeof(VAR_9[0])));
 VAR_12 = FUNC_5(VAR_9, sizeof(u32), VAR_10, VAR_8);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_5(VAR_4, 1, VAR_11, VAR_8);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_2(&VAR_5->roles, VAR_8);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_4(&VAR_5->range, VAR_8);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_3(&VAR_5->dfltlevel, VAR_8);
 if (VAR_12)
  return VAR_12;

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct type_datum {size_t value; size_t primary; size_t bounds; scalar_t__ attribute; } ;
struct policydb {scalar_t__ policyvers; } ;
struct policy_data {void* fp; struct policydb* p; } ;
typedef int buf ;
typedef char __le32 ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 char FUNC_1 (size_t) ;
 int FUNC_2 (char*,int,size_t,void*) ;
 size_t FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(void *VAR_3, void *VAR_4, void *VAR_5)
{
 char *VAR_6 = VAR_3;
 struct type_datum *VAR_7 = VAR_4;
 struct policy_data *VAR_8 = VAR_5;
 struct policydb *VAR_9 = VAR_8->p;
 void *VAR_10 = VAR_8->fp;
 __le32 VAR_11[4];
 int VAR_12;
 size_t VAR_13, VAR_14;

 VAR_14 = FUNC_3(VAR_6);
 VAR_13 = 0;
 VAR_11[VAR_13++] = FUNC_1(VAR_14);
 VAR_11[VAR_13++] = FUNC_1(VAR_7->value);
 if (VAR_9->policyvers >= VAR_0) {
  u32 VAR_15 = 0;

  if (VAR_7->primary)
   VAR_15 |= VAR_2;

  if (VAR_7->attribute)
   VAR_15 |= VAR_1;

  VAR_11[VAR_13++] = FUNC_1(VAR_15);
  VAR_11[VAR_13++] = FUNC_1(VAR_7->bounds);
 } else {
  VAR_11[VAR_13++] = FUNC_1(VAR_7->primary);
 }
 FUNC_0(VAR_13 > (sizeof(VAR_11) / sizeof(VAR_11[0])));
 VAR_12 = FUNC_2(VAR_11, sizeof(u32), VAR_13, VAR_10);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_2(VAR_6, 1, VAR_14, VAR_10);
 if (VAR_12)
  return VAR_12;

 return 0;
}

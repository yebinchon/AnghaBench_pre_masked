
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct role_trans {size_t role; size_t type; size_t new_role; struct role_trans* next; } ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (int *,int,int,void*) ;

__attribute__((used)) static int FUNC_2(struct role_trans *VAR_0, void *VAR_1)
{
 struct role_trans *VAR_2;
 u32 VAR_3[3];
 size_t VAR_4;
 int VAR_5;

 VAR_4 = 0;
 for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->next)
  VAR_4++;
 VAR_3[0] = FUNC_0(VAR_4);
 VAR_5 = FUNC_1(VAR_3, sizeof(u32), 1, VAR_1);
 if (VAR_5)
  return VAR_5;
 for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->next) {
  VAR_3[0] = FUNC_0(VAR_2->role);
  VAR_3[1] = FUNC_0(VAR_2->type);
  VAR_3[2] = FUNC_0(VAR_2->new_role);
  VAR_5 = FUNC_1(VAR_3, sizeof(u32), 3, VAR_1);
  if (VAR_5)
   return VAR_5;
 }

 return 0;
}

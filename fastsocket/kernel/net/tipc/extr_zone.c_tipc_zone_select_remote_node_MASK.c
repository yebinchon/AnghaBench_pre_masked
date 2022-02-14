
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct tipc_node {int dummy; } ;
struct cluster {int dummy; } ;
struct _zone {struct cluster** clusters; } ;


 struct tipc_node* FUNC_0 (struct cluster*,size_t) ;
 size_t FUNC_1 (size_t) ;
 size_t VAR_0 ;

struct tipc_node *FUNC_2(struct _zone *VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct cluster *VAR_4;
 struct tipc_node *VAR_5;
 u32 VAR_6;

 if (!VAR_1)
  return ((void*)0);
 VAR_4 = VAR_1->clusters[FUNC_1(VAR_2)];
 if (!VAR_4)
  return ((void*)0);
 VAR_5 = FUNC_0(VAR_4, VAR_3);
 if (VAR_5)
  return VAR_5;


 for (VAR_6 = 1; VAR_6 <= VAR_0; VAR_6++) {
  VAR_4 = VAR_1->clusters[VAR_6];
  if (!VAR_4)
   return ((void*)0);
  VAR_5 = FUNC_0(VAR_4, VAR_3);
  if (VAR_5)
   return VAR_5;
 }
 return ((void*)0);
}

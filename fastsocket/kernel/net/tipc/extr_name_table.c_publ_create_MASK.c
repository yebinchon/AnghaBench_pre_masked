
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_2__ {int nodesub_list; } ;
struct publication {TYPE_1__ subscr; int pport_list; int local_list; void* key; void* ref; void* node; void* scope; void* upper; void* lower; void* type; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct publication* FUNC_1 (int,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static struct publication *FUNC_3(u32 VAR_1, u32 VAR_2, u32 VAR_3,
           u32 VAR_4, u32 VAR_5, u32 VAR_6,
           u32 VAR_7)
{
 struct publication *VAR_8 = FUNC_1(sizeof(*VAR_8), VAR_0);
 if (VAR_8 == ((void*)0)) {
  FUNC_2("Publication creation failure, no memory\n");
  return ((void*)0);
 }

 VAR_8->type = VAR_1;
 VAR_8->lower = VAR_2;
 VAR_8->upper = VAR_3;
 VAR_8->scope = VAR_4;
 VAR_8->node = VAR_5;
 VAR_8->ref = VAR_6;
 VAR_8->key = VAR_7;
 FUNC_0(&VAR_8->local_list);
 FUNC_0(&VAR_8->pport_list);
 FUNC_0(&VAR_8->subscr.nodesub_list);
 return VAR_8;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
struct symsort_thunk {TYPE_1__* symtab; int e; } ;
struct TYPE_5__ {scalar_t__ st_value; int st_name; int st_info; } ;
struct TYPE_4__ {int stridx; int data; } ;
typedef TYPE_2__ GElf_Sym ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 char* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_3(void *VAR_1, const void *VAR_2, const void *VAR_3)
{
 GElf_Sym VAR_4, VAR_5;
 struct symsort_thunk *VAR_6;
 const char *VAR_7, *VAR_8;
 u_int VAR_9, VAR_10;
 int VAR_11, VAR_12;

 VAR_9 = *(const u_int *)VAR_2;
 VAR_10 = *(const u_int *)VAR_3;
 VAR_6 = VAR_1;

 (void)FUNC_2(VAR_6->symtab->data, VAR_9, &VAR_4);
 (void)FUNC_2(VAR_6->symtab->data, VAR_10, &VAR_5);

 if (VAR_4 != VAR_5)
  return (VAR_4 < VAR_5 ? -1 : 1);


 VAR_11 = FUNC_0(VAR_4);
 VAR_12 = FUNC_0(VAR_5);
 if (VAR_11 != VAR_12) {
  if (VAR_11 == VAR_0 && VAR_12 != VAR_0)
   return (-1);
  if (VAR_11 != VAR_0 && VAR_12 == VAR_0)
   return (1);
 }

 VAR_7 = FUNC_1(VAR_6->e, VAR_6->symtab->stridx, VAR_4);
 VAR_8 = FUNC_1(VAR_6->e, VAR_6->symtab->stridx, VAR_5);
 if (VAR_7 != ((void*)0) && VAR_8 != ((void*)0)) {

  if (*VAR_7 == '$')
   return (-1);
  if (*VAR_8 == '$')
   return (1);


  for (; *VAR_7 == '_' && *VAR_8 == '_'; VAR_7++, VAR_8++)
   ;
  if (*VAR_7 == '_')
   return (-1);
  if (*VAR_8 == '_')
   return (1);
 }

 return (0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct typetable {int* table; int tablesize; int nextarg; } ;
typedef enum typeid { ____Placeholder_typeid } typeid ;


 int VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int* const,int*,int const) ;
 int* FUNC_1 (int) ;
 int* FUNC_2 (int* const,int,int) ;

__attribute__((used)) static int
FUNC_3(struct typetable *VAR_3)
{
 enum typeid *const VAR_4 = VAR_3->table;
 const int VAR_5 = VAR_3->tablesize;
 enum typeid *VAR_6;
 u_int VAR_7, VAR_8;


 if (VAR_3->nextarg > VAR_0)
  return (-1);

 VAR_8 = VAR_5 * 2;
 if (VAR_8 < VAR_3->nextarg + 1)
  VAR_8 = VAR_3->nextarg + 1;
 if (VAR_5 == VAR_1) {
  if ((VAR_6 = FUNC_1(VAR_8 * sizeof(enum typeid))) == ((void*)0))
   return (-1);
  FUNC_0(VAR_4, VAR_6, VAR_5 * sizeof(enum typeid));
 } else {
  VAR_6 = FUNC_2(VAR_4, VAR_8, sizeof(enum typeid));
  if (VAR_6 == ((void*)0))
   return (-1);
 }
 for (VAR_7 = VAR_5; VAR_7 < VAR_8; VAR_7++)
  VAR_6[VAR_7] = VAR_2;

 VAR_3->table = VAR_6;
 VAR_3->tablesize = VAR_8;

 return (0);
}

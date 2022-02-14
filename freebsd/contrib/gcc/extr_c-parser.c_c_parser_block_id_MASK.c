
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * tree ;
struct c_declspecs {int type_seen_p; int declspecs_seen_p; } ;
struct c_declarator {int dummy; } ;
typedef int c_parser ;


 int VAR_0 ;
 struct c_declspecs* FUNC_0 () ;
 struct c_declarator* FUNC_1 (int *,int ,int ,int*) ;
 int FUNC_2 (int *,struct c_declspecs*,int,int,int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (struct c_declspecs*) ;
 int * FUNC_5 (struct c_declspecs*,struct c_declarator*) ;
 int FUNC_6 () ;

__attribute__((used)) static tree
FUNC_7 (c_parser* VAR_1)
{
  struct c_declspecs *VAR_2 = FUNC_0 ();
  struct c_declarator *VAR_3;
  bool VAR_4 = 0;

  FUNC_2 (VAR_1, VAR_2, 0, 1, 1);
  if (!VAR_2->declspecs_seen_p)
    {
      FUNC_3 (VAR_1, "expected specifier-qualifier-list");
      return ((void*)0);
    }
  FUNC_6 ();
  FUNC_4 (VAR_2);
  VAR_3 = FUNC_1 (VAR_1, VAR_2->type_seen_p,
        VAR_0, &VAR_4);
  if (VAR_3 == ((void*)0))
    return ((void*)0);

  return FUNC_5 (VAR_2, VAR_3);
}

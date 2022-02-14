
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* tree ;
struct c_parm {int dummy; } ;
struct c_declspecs {int type_seen_p; void* attrs; } ;
struct c_declarator {int dummy; } ;
typedef int c_parser ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 struct c_parm* FUNC_0 (struct c_declspecs*,int ,struct c_declarator*) ;
 struct c_declspecs* FUNC_1 () ;
 void* FUNC_2 (int *) ;
 struct c_declarator* FUNC_3 (int *,int ,int ,int*) ;
 int FUNC_4 (int *,struct c_declspecs*,int,int,int) ;
 int FUNC_5 (int *,char*) ;
 scalar_t__ FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,int *) ;
 int FUNC_10 (void*,void*) ;
 int FUNC_11 (struct c_declspecs*,void*) ;
 int FUNC_12 (struct c_declspecs*) ;
 int FUNC_13 () ;

__attribute__((used)) static struct c_parm *
FUNC_14 (c_parser *VAR_4, tree VAR_5)
{
  struct c_declspecs *VAR_6;
  struct c_declarator *VAR_7;
  tree VAR_8;
  tree VAR_9 = VAR_2;
  bool VAR_10 = 0;
  if (!FUNC_7 (VAR_4))
    {


      FUNC_5 (VAR_4,
        "expected declaration specifiers or %<...%>");
      FUNC_8 (VAR_4);
      return ((void*)0);
    }
  VAR_6 = FUNC_1 ();
  if (VAR_5)
    {
      FUNC_11 (VAR_6, VAR_5);
      VAR_5 = VAR_2;
    }
  FUNC_4 (VAR_4, VAR_6, 1, 1, 1);
  FUNC_12 (VAR_6);
  FUNC_13 ();
  VAR_8 = VAR_6->attrs;
  VAR_6->attrs = VAR_2;
  VAR_7 = FUNC_3 (VAR_4, VAR_6->type_seen_p,
        VAR_1, &VAR_10);
  if (VAR_7 == ((void*)0))
    {
      FUNC_9 (VAR_4, VAR_0, ((void*)0));
      return ((void*)0);
    }
  if (FUNC_6 (VAR_4, VAR_3))
    VAR_9 = FUNC_2 (VAR_4);
  return FUNC_0 (VAR_6, FUNC_10 (VAR_9, VAR_8),
         VAR_7);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct c_declspecs {int dummy; } ;
struct c_declarator {int dummy; } ;
typedef int c_parser ;
typedef int c_dtr_syn ;


 int VAR_0 ;
 int VAR_1 ;
 struct c_declspecs* FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct c_declspecs*,int,int,int) ;
 struct c_declarator* FUNC_3 (int *,int,int ,int*) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 scalar_t__ VAR_2 ;
 struct c_declarator* FUNC_5 (struct c_declspecs*,struct c_declarator*) ;
 struct c_declarator* FUNC_6 (struct c_declspecs*,struct c_declarator*) ;

__attribute__((used)) static struct c_declarator *
FUNC_7 (c_parser *VAR_3, bool VAR_4, c_dtr_syn VAR_5,
       bool *VAR_6)
{

  if (FUNC_4 (VAR_3, VAR_0))
    {
      struct c_declspecs *VAR_7 = FUNC_0 ();
      struct c_declarator *VAR_8;
      FUNC_1 (VAR_3);
      FUNC_2 (VAR_3, VAR_7, 0, 0, 1);
      VAR_8 = FUNC_7 (VAR_3, VAR_4, VAR_5, VAR_6);
      if (VAR_8 == ((void*)0))
 return ((void*)0);
      else
 return FUNC_6 (VAR_7, VAR_8);
    }

  else if (VAR_2 && FUNC_4 (VAR_3, VAR_1)) {
    struct c_declspecs *VAR_9 = FUNC_0 ();
    struct c_declarator *VAR_10;
    FUNC_1 (VAR_3);
    FUNC_2 (VAR_3, VAR_9, 0, 0, 1);
    VAR_10 = FUNC_7 (VAR_3, VAR_4, VAR_5, VAR_6);
    if (VAR_10 == ((void*)0))
      return ((void*)0);
    else

      return FUNC_5 (VAR_9, VAR_10);
  }



  return FUNC_3 (VAR_3, VAR_4, VAR_5, VAR_6);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_5__ {int lexer; } ;
typedef TYPE_1__ cp_parser ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int,int,int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_6 (char*) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static tree
FUNC_7 (cp_parser* VAR_5)
{
  tree VAR_6;
  tree VAR_7;
  tree VAR_8;


  if (FUNC_2 (VAR_5->lexer, VAR_0))
    {
      FUNC_6 ("anachronistic old-style base class initializer");
      VAR_6 = VAR_1;
    }
  else
    VAR_6 = FUNC_3 (VAR_5);
  VAR_8 = FUNC_5 (VAR_6);
  if (VAR_8 && !FUNC_0 (VAR_8))
    VAR_3 = 1;

  VAR_7
    = FUNC_4 (VAR_5, 0,
                       0,
                               ((void*)0));
  if (VAR_7 == VAR_2)
    return VAR_2;
  if (!VAR_7)
    VAR_7 = VAR_4;

  VAR_3 = 0;

  return VAR_8 ? FUNC_1 (VAR_8, VAR_7) : VAR_2;
}

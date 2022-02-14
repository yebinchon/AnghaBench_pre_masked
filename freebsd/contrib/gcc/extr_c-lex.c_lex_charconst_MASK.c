
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tree ;
typedef scalar_t__ cppchar_t ;
typedef scalar_t__ cppchar_signed_t ;
struct TYPE_4__ {scalar_t__ type; } ;
typedef TYPE_1__ cpp_token ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__,int) ;
 int FUNC_1 () ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ,TYPE_1__ const*,unsigned int*,int*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static tree
FUNC_3 (const cpp_token *VAR_5)
{
  cppchar_t VAR_6;
  tree VAR_7, VAR_8;
  unsigned int VAR_9;
  int VAR_10;

  VAR_6 = FUNC_2 (VAR_3, VAR_5,
        &VAR_9, &VAR_10);

  if (VAR_5->type == VAR_0)
    VAR_7 = VAR_4;


  else if (!FUNC_1 () || VAR_9 > 1)
    VAR_7 = VAR_2;
  else
    VAR_7 = VAR_1;



  if (VAR_10 || (cppchar_signed_t) VAR_6 >= 0)
    VAR_8 = FUNC_0 (VAR_7, VAR_6, 0);
  else
    VAR_8 = FUNC_0 (VAR_7, (cppchar_signed_t) VAR_6, -1);

  return VAR_8;
}

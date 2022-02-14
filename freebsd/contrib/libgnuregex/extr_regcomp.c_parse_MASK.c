
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ buffer; } ;
typedef TYPE_1__ regex_t ;
typedef int reg_syntax_t ;
typedef scalar_t__ reg_errcode_t ;
typedef int re_token_t ;
typedef int re_string_t ;
struct TYPE_7__ {int syntax; } ;
typedef TYPE_2__ re_dfa_t ;
typedef int bin_tree_t ;


 scalar_t__ FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int * FUNC_1 (TYPE_2__*,int *,int *,int ) ;
 int FUNC_2 (int *,int *,int) ;
 int * FUNC_3 (int *,TYPE_1__*,int *,int,int ,scalar_t__*) ;

__attribute__((used)) static bin_tree_t *
FUNC_4 (re_string_t *VAR_5, regex_t *VAR_6, reg_syntax_t VAR_7,
       reg_errcode_t *VAR_8)
{
  re_dfa_t *VAR_9 = (re_dfa_t *) VAR_6->buffer;
  bin_tree_t *VAR_10, *VAR_11, *VAR_12;
  re_token_t VAR_13;
  VAR_9->syntax = VAR_7;
  FUNC_2 (&VAR_13, VAR_5, VAR_7 | VAR_4);
  VAR_10 = FUNC_3 (VAR_5, VAR_6, &VAR_13, VAR_7, 0, VAR_8);
  if (FUNC_0 (*VAR_8 != VAR_3 && VAR_10 == ((void*)0), 0))
    return ((void*)0);
  VAR_11 = FUNC_1 (VAR_9, ((void*)0), ((void*)0), VAR_1);
  if (VAR_10 != ((void*)0))
    VAR_12 = FUNC_1 (VAR_9, VAR_10, VAR_11, VAR_0);
  else
    VAR_12 = VAR_11;
  if (FUNC_0 (VAR_11 == ((void*)0) || VAR_12 == ((void*)0), 0))
    {
      *VAR_8 = VAR_2;
      return ((void*)0);
    }
  return VAR_12;
}

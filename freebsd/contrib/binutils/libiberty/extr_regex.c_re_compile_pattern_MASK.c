
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct re_pattern_buffer {int newline_anchor; scalar_t__ no_sub; int regs_allocated; } ;
typedef scalar_t__ reg_errcode_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,size_t,int ,struct re_pattern_buffer*) ;
 char const* FUNC_1 (int ) ;
 int * VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (char const*,size_t,int ,struct re_pattern_buffer*) ;

const char *
FUNC_3 (const char *VAR_4, size_t VAR_5,
                    struct re_pattern_buffer *VAR_6)
{
  reg_errcode_t VAR_7;



  VAR_6->regs_allocated = VAR_1;




  VAR_6->no_sub = 0;


  VAR_6->newline_anchor = 1;






    VAR_7 = FUNC_0 (VAR_4, VAR_5, VAR_3, VAR_6);

  if (!VAR_7)
    return ((void*)0);
  return FUNC_1 (VAR_2[(int) VAR_7]);
}

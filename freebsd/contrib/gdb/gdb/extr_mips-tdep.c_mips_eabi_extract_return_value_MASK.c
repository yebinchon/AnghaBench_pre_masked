
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct return_value_word {int buf_offset; int reg_offset; scalar_t__ len; scalar_t__ reg; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,char*,scalar_t__) ;
 int FUNC_2 (struct type*,struct return_value_word*,struct return_value_word*) ;

__attribute__((used)) static void
FUNC_3 (struct type *VAR_1,
    char VAR_2[], char *VAR_3)
{
  struct return_value_word VAR_4;
  struct return_value_word VAR_5;
  FUNC_2 (VAR_1, &VAR_5, &VAR_4);

  FUNC_1 (VAR_3 + VAR_4.buf_offset,
   VAR_2 + FUNC_0 (VAR_0 + VAR_4.reg) +
   VAR_4.reg_offset, VAR_4.len);

  if (VAR_5.len > 0)
    FUNC_1 (VAR_3 + VAR_5.buf_offset,
     VAR_2 + FUNC_0 (VAR_0 + VAR_5.reg) +
     VAR_5.reg_offset, VAR_5.len);
}

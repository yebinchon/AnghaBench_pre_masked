
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct return_value_word {int reg_offset; int buf_offset; scalar_t__ len; int reg; } ;
typedef int raw_buffer ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (char*,char*,scalar_t__) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct type*,struct return_value_word*,struct return_value_word*) ;

__attribute__((used)) static void
FUNC_6 (struct type *VAR_2, char *VAR_3)
{
  char VAR_4[VAR_0];
  struct return_value_word VAR_5;
  struct return_value_word VAR_6;
  FUNC_5 (VAR_2, &VAR_6, &VAR_5);

  FUNC_3 (VAR_4, 0, sizeof (VAR_4));
  FUNC_2 (VAR_4 + VAR_5.reg_offset, VAR_3 + VAR_5.buf_offset, VAR_5.len);
  FUNC_1 (FUNC_0 (VAR_5.reg),
       VAR_4, FUNC_4 (VAR_1,
             VAR_5.reg));

  if (VAR_6.len > 0)
    {
      FUNC_3 (VAR_4, 0, sizeof (VAR_4));
      FUNC_2 (VAR_4 + VAR_6.reg_offset, VAR_3 + VAR_6.buf_offset, VAR_6.len);
      FUNC_1 (FUNC_0 (VAR_6.reg),
           VAR_4,
           FUNC_4 (VAR_1,
            VAR_6.reg));
    }
}

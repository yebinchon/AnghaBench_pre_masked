
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct ui_stream {int stream; } ;
struct expression {int dummy; } ;
struct cleanup {int dummy; } ;
typedef enum mi_cmd_result { ____Placeholder_mi_cmd_result } mi_cmd_result ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct value*) ;
 int FUNC_1 (struct value*) ;
 int FUNC_2 (struct value*) ;
 int FUNC_3 (struct value*) ;
 int FUNC_4 (struct cleanup*) ;
 struct value* FUNC_5 (struct expression*) ;
 int VAR_2 ;
 struct cleanup* FUNC_6 (int ,struct expression**) ;
 int VAR_3 ;
 struct expression* FUNC_7 (char*) ;
 int FUNC_8 (int ,char*,struct ui_stream*) ;
 int FUNC_9 (struct ui_stream*) ;
 struct ui_stream* FUNC_10 (int ) ;
 int VAR_4 ;
 int FUNC_11 (int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_12 (int *,char*) ;

enum mi_cmd_result
FUNC_13 (char *VAR_5, char **VAR_6, int VAR_7)
{
  struct expression *VAR_8;
  struct cleanup *VAR_9 = ((void*)0);
  struct value *VAR_10;
  struct ui_stream *VAR_11 = ((void*)0);

  VAR_11 = FUNC_10 (VAR_4);

  if (VAR_7 != 1)
    {
      FUNC_12 (&VAR_3,
   "mi_cmd_data_evaluate_expression: Usage: -data-evaluate-expression expression");
      return VAR_1;
    }

  VAR_8 = FUNC_7 (VAR_6[0]);

  VAR_9 = FUNC_6 (VAR_2, &VAR_8);

  VAR_10 = FUNC_5 (VAR_8);


  FUNC_11 (FUNC_3 (VAR_10), FUNC_1 (VAR_10),
      FUNC_2 (VAR_10), FUNC_0 (VAR_10),
      VAR_11->stream, 0, 0, 0, 0);

  FUNC_8 (VAR_4, "value", VAR_11);
  FUNC_9 (VAR_11);

  FUNC_4 (VAR_9);

  return VAR_0;
}

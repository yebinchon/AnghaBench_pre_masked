
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct charset {char const* name; int valid_host_charset; int (* host_char_print_literally ) (void*,int) ;int (* target_char_to_control_char ) (void*,int,int*) ;void* target_char_to_control_char_baton; void* host_char_print_literally_baton; } ;


 int FUNC_0 (struct charset*,int ,int) ;
 struct charset* FUNC_1 (int) ;

__attribute__((used)) static struct charset *
FUNC_2 (const char *VAR_0,
                int VAR_1,
                int (*VAR_2) (void *VAR_3, int VAR_4),
                void *VAR_5,
                int (*VAR_6) (void *VAR_7,
                                                    int VAR_8,
                                                    int *VAR_9),
                void *VAR_10)
{
  struct charset *VAR_11 = FUNC_1 (sizeof (*VAR_11));

  FUNC_0 (VAR_11, 0, sizeof (*VAR_11));
  VAR_11->name = VAR_0;
  VAR_11->valid_host_charset = VAR_1;
  VAR_11->host_char_print_literally = VAR_2;
  VAR_11->host_char_print_literally_baton = VAR_5;
  VAR_11->target_char_to_control_char = VAR_6;
  VAR_11->target_char_to_control_char_baton = VAR_10;

  return VAR_11;
}

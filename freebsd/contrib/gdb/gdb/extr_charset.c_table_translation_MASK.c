
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct translation {char const* from; char const* to; char const* (* c_target_char_has_backslash_escape ) (void*,int) ;int (* c_parse_backslash ) (void*,int,int*) ;void* convert_char_baton; int convert_char; void* c_parse_backslash_baton; void* c_target_char_has_backslash_escape_baton; } ;


 int FUNC_0 (struct translation*,int ,int) ;
 int VAR_0 ;
 struct translation* FUNC_1 (int) ;

__attribute__((used)) static struct translation *
FUNC_2 (const char *VAR_1, const char *VAR_2, int *VAR_3,
                   const char *(*VAR_4)
                   (void *VAR_5, int VAR_6),
                   void *VAR_7,
                   int (*VAR_8) (void *VAR_9,
                                             int VAR_10,
                                             int *VAR_11),
                   void *VAR_12)
{
  struct translation *VAR_13 = FUNC_1 (sizeof (*VAR_13));

  FUNC_0 (VAR_13, 0, sizeof (*VAR_13));
  VAR_13->from = VAR_1;
  VAR_13->to = VAR_2;
  VAR_13->c_target_char_has_backslash_escape = VAR_4;
  VAR_13->c_target_char_has_backslash_escape_baton
    = VAR_7;
  VAR_13->c_parse_backslash = VAR_8;
  VAR_13->c_parse_backslash_baton = VAR_12;
  VAR_13->convert_char = VAR_0;
  VAR_13->convert_char_baton = (void *) VAR_3;

  return VAR_13;
}

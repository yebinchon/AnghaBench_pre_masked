
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct re_pattern_buffer {char* fastmap; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,char const*) ;
 int FUNC_1 (struct re_pattern_buffer*) ;
 char* FUNC_2 (char*,int ,struct re_pattern_buffer*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5 (char *VAR_1, struct re_pattern_buffer *VAR_2,
   char *VAR_3)
{
  int VAR_4;
  const char *VAR_5;

  VAR_2->fastmap = VAR_3;

  VAR_4 = FUNC_3 (VAR_0);
  VAR_5 = FUNC_2 (VAR_1,
       FUNC_4 (VAR_1),
       VAR_2);
  FUNC_3 (VAR_4);

  if (VAR_5)
    FUNC_0 ("compile_pattern: Can't compile pattern string `%s': %s!", VAR_1, VAR_5);

  if (VAR_3)
    FUNC_1 (VAR_2);
}

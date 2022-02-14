
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macro_buffer {char* text; int len; int shared; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct macro_buffer*,char*,char*) ;
 scalar_t__ FUNC_2 (struct macro_buffer*,char*,char*) ;
 scalar_t__ FUNC_3 (struct macro_buffer*,char*,char*) ;
 scalar_t__ FUNC_4 (struct macro_buffer*,char*,char*) ;
 scalar_t__ FUNC_5 (struct macro_buffer*,char*,char*) ;
 scalar_t__ FUNC_6 (struct macro_buffer*,char*,char*) ;
 scalar_t__ FUNC_7 (char) ;
 int FUNC_8 (struct macro_buffer*,char*,char*) ;

__attribute__((used)) static int
FUNC_9 (struct macro_buffer *VAR_0,
           struct macro_buffer *VAR_1)
{
  char *VAR_2 = VAR_1->text;
  char *VAR_3 = VAR_2 + VAR_1->len;

  FUNC_0 (VAR_1->shared);
  while (VAR_2 < VAR_3)
    if (FUNC_7 (*VAR_2))
      VAR_2++;
    else if (FUNC_2 (VAR_0, VAR_2, VAR_3))
      VAR_2 += VAR_0->len;
    else if (FUNC_4 (VAR_0, VAR_2, VAR_3)
             || FUNC_1 (VAR_0, VAR_2, VAR_3)
             || FUNC_6 (VAR_0, VAR_2, VAR_3)
             || FUNC_3 (VAR_0, VAR_2, VAR_3)
             || FUNC_5 (VAR_0, VAR_2, VAR_3))
      {

        int VAR_4 = VAR_2 - VAR_1->text + VAR_0->len;
        VAR_1->text += VAR_4;
        VAR_1->len -= VAR_4;
        return 1;
      }
    else
      {


        int VAR_5;

        FUNC_8 (VAR_0, VAR_2, VAR_2 + 1);
        VAR_5 = VAR_2 - VAR_1->text + VAR_0->len;
        VAR_1->text += VAR_5;
        VAR_1->len -= VAR_5;
        return 1;
      }

  return 0;
}

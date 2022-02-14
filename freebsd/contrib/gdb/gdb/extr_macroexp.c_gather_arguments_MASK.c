
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macro_buffer {char* text; int len; int last_token; } ;
struct cleanup {int dummy; } ;


 int FUNC_0 (struct cleanup*) ;
 int FUNC_1 (char*,char const*) ;
 int VAR_0 ;
 int FUNC_2 (struct macro_buffer*,struct macro_buffer*) ;
 int FUNC_3 (struct macro_buffer*,char*,int) ;
 struct cleanup* FUNC_4 (int ,struct macro_buffer**) ;
 int FUNC_5 (struct macro_buffer*,char*,char*) ;
 scalar_t__ FUNC_6 (int) ;
 struct macro_buffer* FUNC_7 (struct macro_buffer*,int) ;

__attribute__((used)) static struct macro_buffer *
FUNC_8 (const char *VAR_1, struct macro_buffer *VAR_2, int *VAR_3)
{
  struct macro_buffer VAR_4;
  int VAR_5, VAR_6;
  struct macro_buffer *VAR_7 = ((void*)0);
  struct cleanup *VAR_8 = FUNC_4 (VAR_0, &VAR_7);




  {
    struct macro_buffer VAR_9;
    FUNC_3 (&VAR_9, VAR_2->text, VAR_2->len);

    if (! FUNC_2 (&VAR_4, &VAR_9)
        || VAR_4.len != 1
        || VAR_4.text[0] != '(')
      {
        FUNC_0 (VAR_8);
        return 0;
      }
  }


  FUNC_2 (&VAR_4, VAR_2);

  VAR_5 = 0;
  VAR_6 = 1;
  VAR_7 = (struct macro_buffer *) FUNC_6 (sizeof (*VAR_7) * VAR_6);

  for (;;)
    {
      struct macro_buffer *VAR_10;
      int VAR_11;


      if (VAR_5 >= VAR_6)
        {
          VAR_6 *= 2;
          VAR_7 = FUNC_7 (VAR_7, sizeof (*VAR_7) * VAR_6);
        }


      VAR_10 = &VAR_7[VAR_5++];
      FUNC_5 (VAR_10, VAR_2->text, VAR_2->text);


      VAR_11 = 0;
      for (;;)
        {
          char *VAR_12 = VAR_2->text;

          if (! FUNC_2 (&VAR_4, VAR_2))
            FUNC_1 ("Malformed argument list for macro `%s'.", VAR_1);


          if (VAR_4.len == 1 && VAR_4.text[0] == '(')
            VAR_11++;


          else if (VAR_4.len == 1 && VAR_4.text[0] == ')')
            {


              if (VAR_11 == 0)
                {
                  FUNC_0 (VAR_8);
                  *VAR_3 = VAR_5;
                  return VAR_7;
                }

              VAR_11--;
            }



          else if (VAR_4.len == 1 && VAR_4.text[0] == ',' && VAR_11 == 0)
            break;




          if (VAR_10->len == 0)
            {
              VAR_10->text = VAR_4.text;
              VAR_10->len = VAR_4.len;
              VAR_10->last_token = 0;
            }
          else
            {
              VAR_10->len = (VAR_4.text + VAR_4.len) - VAR_10->text;
              VAR_10->last_token = VAR_4.text - VAR_10->text;
            }
        }
    }
}

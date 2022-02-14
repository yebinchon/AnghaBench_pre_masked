
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macro_name_list {int dummy; } ;
struct macro_definition {char* replacement; int argc; char** argv; } ;
struct macro_buffer {scalar_t__ len; scalar_t__ last_token; char* text; scalar_t__ is_identifier; } ;
typedef int macro_lookup_ftype ;


 int FUNC_0 (struct macro_buffer*,struct macro_buffer*) ;
 int FUNC_1 (struct macro_buffer*,char*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct macro_buffer*,struct macro_buffer*) ;
 int FUNC_5 (struct macro_buffer*,char*,int) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (struct macro_buffer*,struct macro_buffer*,struct macro_name_list*,int *,void*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void
FUNC_9 (struct macro_buffer *VAR_0,
                 struct macro_definition *VAR_1,
                 int VAR_2, struct macro_buffer *VAR_3,
                 struct macro_name_list *VAR_4,
                 macro_lookup_ftype *VAR_5,
                 void *VAR_6)
{

  struct macro_buffer VAR_7;

  FUNC_5 (&VAR_7, (char *) VAR_1->replacement,
                      FUNC_8 (VAR_1->replacement));

  FUNC_3 (VAR_0->len == 0);
  VAR_0->last_token = 0;

  for (;;)
    {
      struct macro_buffer VAR_8;
      char *VAR_9 = VAR_7.text;
      int VAR_10 = 0;


      if (! FUNC_4 (&VAR_8, &VAR_7))
        break;



      if (VAR_8.text > VAR_9)
        {
          FUNC_1 (VAR_0, VAR_9, VAR_8.text - VAR_9);
          VAR_0->last_token = VAR_0->len;
        }


      if (VAR_8.len == 1
          && VAR_8.text[0] == '#')
        FUNC_2 ("Stringification is not implemented yet.");


      if (VAR_8.len == 2
          && VAR_8.text[0] == '#'
          && VAR_8.text[1] == '#')
        FUNC_2 ("Token splicing is not implemented yet.");


      if (VAR_8.is_identifier)
        {
          int VAR_11;


          if (VAR_8.len == 11
              && ! FUNC_6 (VAR_8.text, "__VA_ARGS__", 11))
            FUNC_2 ("Variable-arity macros not implemented yet.");


          for (VAR_11 = 0; VAR_11 < VAR_1->argc; VAR_11++)
            if (VAR_8.len == FUNC_8 (VAR_1->argv[VAR_11])
                && ! FUNC_6 (VAR_8.text, VAR_1->argv[VAR_11], VAR_8.len))
              {
                struct macro_buffer VAR_12;






                FUNC_5 (&VAR_12, VAR_3[VAR_11].text, VAR_3[VAR_11].len);
                FUNC_7 (VAR_0, &VAR_12, VAR_4, VAR_5, VAR_6);
                VAR_10 = 1;
                break;
              }
        }


      if (! VAR_10)
        FUNC_0 (VAR_0, &VAR_8);
    }
}

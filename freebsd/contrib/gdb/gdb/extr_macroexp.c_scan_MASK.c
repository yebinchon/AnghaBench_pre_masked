
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macro_name_list {int dummy; } ;
struct macro_buffer {int shared; char* text; int last_token; int len; } ;
typedef int macro_lookup_ftype ;


 int FUNC_0 (struct macro_buffer*,struct macro_buffer*) ;
 int FUNC_1 (struct macro_buffer*,char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct macro_buffer*,struct macro_buffer*) ;
 int FUNC_4 (struct macro_buffer*,struct macro_buffer*,struct macro_buffer*,struct macro_name_list*,int *,void*) ;

__attribute__((used)) static void
FUNC_5 (struct macro_buffer *VAR_0,
      struct macro_buffer *VAR_1,
      struct macro_name_list *VAR_2,
      macro_lookup_ftype *VAR_3,
      void *VAR_4)
{
  FUNC_2 (VAR_1->shared);
  FUNC_2 (! VAR_0->shared);

  for (;;)
    {
      struct macro_buffer VAR_5;
      char *VAR_6 = VAR_1->text;


      if (! FUNC_3 (&VAR_5, VAR_1))
        break;



      if (VAR_5.text > VAR_6)
        {
          FUNC_1 (VAR_0, VAR_6, VAR_5.text - VAR_6);
          VAR_0->last_token = VAR_0->len;
        }

      if (! FUNC_4 (VAR_0, &VAR_5, VAR_1, VAR_2, VAR_3, VAR_4))


        FUNC_0 (VAR_0, &VAR_5);
    }



  if (VAR_1->len)
    {
      FUNC_1 (VAR_0, VAR_1->text, VAR_1->len);
      VAR_0->last_token = VAR_0->len;
    }
}

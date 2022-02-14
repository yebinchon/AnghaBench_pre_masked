
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macro_buffer {char* text; scalar_t__ last_token; } ;
struct cleanup {int dummy; } ;
typedef int macro_lookup_ftype ;


 int FUNC_0 (struct macro_buffer*,char) ;
 int VAR_0 ;
 int FUNC_1 (struct cleanup*) ;
 int FUNC_2 (struct cleanup*) ;
 int FUNC_3 (struct macro_buffer*,struct macro_buffer*) ;
 int FUNC_4 (struct macro_buffer*,int ) ;
 int FUNC_5 (struct macro_buffer*,char*,int ) ;
 struct cleanup* FUNC_6 (int ,struct macro_buffer*) ;
 scalar_t__ FUNC_7 (struct macro_buffer*,struct macro_buffer*,struct macro_buffer*,int ,int *,void*) ;
 int FUNC_8 (char*) ;

char *
FUNC_9 (char **VAR_1,
                   macro_lookup_ftype *VAR_2,
                   void *VAR_3)
{
  struct macro_buffer VAR_4, VAR_5, VAR_6;
  struct cleanup *VAR_7;


  FUNC_5 (&VAR_4, *VAR_1, FUNC_8 (*VAR_1));


  FUNC_4 (&VAR_5, 0);
  VAR_5.last_token = 0;
  VAR_7 = FUNC_6 (VAR_0, &VAR_5);


  if (! FUNC_3 (&VAR_6, &VAR_4))
    {
      FUNC_2 (VAR_7);
      return 0;
    }


  if (FUNC_7 (&VAR_5, &VAR_6, &VAR_4, 0, VAR_2, VAR_3))
    {



      FUNC_0 (&VAR_5, '\0');
      FUNC_1 (VAR_7);
      *VAR_1 = VAR_4.text;
      return VAR_5.text;
    }
  else
    {

      FUNC_2 (VAR_7);
      return 0;
    }
}

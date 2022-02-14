
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


struct work_stuff {int temp_start; int options; } ;
struct TYPE_13__ {int p; int b; } ;
typedef TYPE_1__ string ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct work_stuff*,char const*,int,char const**,char const**) ;
 char const* VAR_2 ;
 int FUNC_1 (struct work_stuff*,char const**,TYPE_1__*) ;
 int FUNC_2 (struct work_stuff*,char const**,TYPE_1__*) ;
 int FUNC_3 (struct work_stuff*,char const**,TYPE_1__*) ;
 int FUNC_4 (char const**,TYPE_1__*) ;
 char* FUNC_5 (char const*,char const) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 int FUNC_7 (TYPE_1__*,char const*,int) ;
 int FUNC_8 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 scalar_t__ FUNC_11 (char const*,char*,int) ;

__attribute__((used)) static void
FUNC_12 (struct work_stuff *VAR_3, const char **VAR_4,
                          int VAR_5, string *VAR_6)
{
  const char *VAR_7;
  const char *VAR_8;
  const char *VAR_9 = *VAR_4 + VAR_5;
  string VAR_10;



  if (VAR_1 && ((*VAR_4)[VAR_5] == 'X'))
    {
      char *VAR_11 = ((void*)0);
      int VAR_12;



      VAR_11 = FUNC_5 (*VAR_4, '<');
      if (VAR_11 && (VAR_11 - *VAR_4 < VAR_5))
        FUNC_7 (VAR_6, *VAR_4, VAR_11 - *VAR_4);
      else
        FUNC_7 (VAR_6, *VAR_4, VAR_5);
      (*VAR_4) += VAR_5 + 1;
      FUNC_10 (&VAR_10);
      if (VAR_3->temp_start == -1)
        VAR_3->temp_start = VAR_6->p - VAR_6->b;



      VAR_12 = VAR_3->options;
      VAR_3->options |= VAR_0;

      FUNC_6 (VAR_6, "<");
      while (1)
        {
          FUNC_9 (&VAR_10);
          switch (**VAR_4)
            {
              case 'T':

                (*VAR_4)++;
                if (!FUNC_3 (VAR_3, VAR_4, &VAR_10))
                  goto hpacc_template_args_done;
                break;

              case 'U':
              case 'S':

                if (!FUNC_1 (VAR_3, VAR_4, &VAR_10))
                  goto hpacc_template_args_done;
                break;

              case 'A':

                if (!FUNC_2 (VAR_3, VAR_4, &VAR_10))
                  goto hpacc_template_args_done;
                break;

              default:



                goto hpacc_template_args_done;
            }
          FUNC_8 (VAR_6, &VAR_10);



          if ((**VAR_4 == '\000') || (**VAR_4 == '_'))
            break;
          else
            FUNC_6 (VAR_6, ",");
        }
    hpacc_template_args_done:
      FUNC_6 (VAR_6, ">");
      FUNC_9 (&VAR_10);
      if (**VAR_4 == '_')
        (*VAR_4)++;
      VAR_3->options = VAR_12;
      return;
    }

  else if (FUNC_0 (VAR_3, *VAR_4, VAR_5, &VAR_7, &VAR_8))
    {
      int VAR_13;
      string VAR_14;

      FUNC_10 (&VAR_10);
      FUNC_7 (VAR_6, *VAR_4, VAR_7 - *VAR_4);
      if (VAR_3->temp_start == -1)
 VAR_3->temp_start = VAR_6->p - VAR_6->b;



      VAR_13 = VAR_3->options;
      VAR_3->options |= VAR_0;

      FUNC_6 (VAR_6, "<");

      while (VAR_8 < VAR_9) {
 FUNC_9 (&VAR_10);


 switch (*VAR_8)
   {



          case 'X':

            VAR_8++;
            if (!FUNC_3 (VAR_3, &VAR_8, &VAR_14))
       goto cfront_template_args_done;
            FUNC_6 (&VAR_10, "(");
            FUNC_8 (&VAR_10, &VAR_14);
            FUNC_9 (&VAR_14);
            FUNC_6 (&VAR_10, ")");
            if (*VAR_8 != 'L')
              goto cfront_template_args_done;
            VAR_8++;

            if (!FUNC_4 (&VAR_8, &VAR_10))
       goto cfront_template_args_done;
            break;

          case 'L':

            VAR_8++;
            if (!FUNC_4 (&VAR_8, &VAR_10))
       goto cfront_template_args_done;
            break;
          default:

            {
              const char* VAR_15 = VAR_8;
              if (!FUNC_3 (VAR_3, &VAR_8, &VAR_10))
                goto cfront_template_args_done;


              if (VAR_8 == VAR_15)
  {
    VAR_3->options = VAR_13;
    return;
  }
            }
   }
 FUNC_8 (VAR_6, &VAR_10);
 FUNC_6 (VAR_6, ",");
      }
    cfront_template_args_done:
      FUNC_9 (&VAR_10);
      if (VAR_8 >= VAR_9)
 --VAR_6->p;
      FUNC_6 (VAR_6, ">");
      VAR_3->options = VAR_13;
    }
  else if (VAR_5>10 && FUNC_11 (*VAR_4, "_GLOBAL_", 8) == 0
    && (*VAR_4)[9] == 'N'
    && (*VAR_4)[8] == (*VAR_4)[10]
    && FUNC_5 (VAR_2, (*VAR_4)[8]))
    {

      FUNC_6 (VAR_6, "{anonymous}");
    }
  else
    {
      if (VAR_3->temp_start == -1)
 VAR_3->temp_start = 0;
      FUNC_7 (VAR_6, *VAR_4, VAR_5);
    }
  *VAR_4 += VAR_5;
}

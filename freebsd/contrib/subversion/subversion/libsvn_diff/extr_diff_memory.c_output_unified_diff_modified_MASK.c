
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_4__ {scalar_t__ context_size; scalar_t__* hunk_length; scalar_t__* hunk_start; scalar_t__* current_token; int hunk_delimiter; } ;
typedef TYPE_1__ output_baton_t ;
typedef scalar_t__ apr_off_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int,int ,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static svn_error_t *
FUNC_4(void *VAR_7,
                             apr_off_t VAR_8,
                             apr_off_t VAR_9,
                             apr_off_t VAR_10,
                             apr_off_t VAR_11,
                             apr_off_t VAR_12,
                             apr_off_t VAR_13)
{
  output_baton_t *VAR_14 = VAR_7;
  apr_off_t VAR_15;
  apr_off_t VAR_16;
  svn_boolean_t VAR_17 = VAR_0;

  if (VAR_8 > VAR_14->context_size)
    VAR_15 = VAR_14->context_size;
  else
    VAR_15 = VAR_8;



  if (VAR_14->hunk_length[0] > 0 || VAR_14->hunk_length[1] > 0)
    {
      VAR_16 = VAR_14->hunk_start[0]
                         + VAR_14->hunk_length[0]
                         + VAR_14->context_size;
    }
  else
    {
      VAR_16 = -1;

      if (VAR_14->hunk_start[0] == 0
          && (VAR_9 > 0 || VAR_11 > 0))
        VAR_17 = VAR_2;
    }



  {
    apr_off_t VAR_18 = (VAR_8 - VAR_15);

    if (VAR_14->current_token[0] < VAR_18
          && VAR_16 <= VAR_18)
      {
        FUNC_0(FUNC_2(VAR_14,
                                          VAR_14->hunk_delimiter));
        VAR_17 = VAR_2;
      }
    else if (VAR_14->hunk_length[0] > 0
             || VAR_14->hunk_length[1] > 0)
      {



        FUNC_0(FUNC_3(VAR_14, 0 ,
                                           VAR_3,
                                           VAR_8));
      }
  }



  FUNC_0(FUNC_3(VAR_14, 0 ,
                                     VAR_6,
                                     VAR_8 - VAR_15));

  if (VAR_17)
    {
      FUNC_1(VAR_14->hunk_length[0] == 0
                     && VAR_14->hunk_length[1] == 0);

      VAR_14->hunk_start[0] = VAR_8 - VAR_15;
      VAR_14->hunk_start[1] = VAR_10 - VAR_15;
    }


  FUNC_0(FUNC_3(VAR_14, 1 ,
                                     VAR_6,
                                     VAR_10));


  FUNC_0(FUNC_3(VAR_14, 0 ,
                                    VAR_3,
                                    VAR_8));


  FUNC_0(FUNC_3(VAR_14, 0 ,
                                     VAR_4,
                                     VAR_8 + VAR_9));
  FUNC_0(FUNC_3(VAR_14, 1 ,
                                     VAR_5,
                                     VAR_10 + VAR_11));

  return VAR_1;
}

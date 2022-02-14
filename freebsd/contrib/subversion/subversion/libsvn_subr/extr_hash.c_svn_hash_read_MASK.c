
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int len; void* data; } ;
typedef TYPE_1__ svn_string_t ;
struct TYPE_14__ {int apr_err; } ;
typedef TYPE_2__ svn_error_t ;
typedef int buf ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_file_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_2 (int *,void*,size_t,TYPE_1__*) ;
 void* FUNC_3 (int *,int) ;
 TYPE_2__* FUNC_4 (int*,char*) ;
 int FUNC_5 (TYPE_2__*) ;
 TYPE_2__* FUNC_6 (int ,int *,int *) ;
 TYPE_2__* FUNC_7 (char*,int *,int *) ;
 TYPE_2__* FUNC_8 (int *,void*,int,int*,int *,int *) ;
 TYPE_2__* FUNC_9 (int *,char*,int*,int *) ;

svn_error_t *
FUNC_10(apr_hash_t *VAR_3,
              apr_file_t *VAR_4,
              apr_pool_t *VAR_5)
{
  svn_error_t *VAR_6;
  char VAR_7[VAR_1];
  apr_size_t VAR_8;
  char VAR_9;
  int VAR_10 = 1;


  while (1)
    {

      apr_size_t VAR_11 = sizeof(VAR_7);

      VAR_6 = FUNC_9(VAR_4, VAR_7, &VAR_11, VAR_5);
      if (VAR_6 && FUNC_0(VAR_6->apr_err) && VAR_10)
        {


          FUNC_5(VAR_6);
          return VAR_2;
        }
      else if (VAR_6)

        return VAR_6;

      VAR_10 = 0;

      if (((VAR_11 == 3) && (VAR_7[0] == 'E') && (VAR_7[1] == 'N') && (VAR_7[2] == 'D'))
          || ((VAR_11 == 9)
              && (VAR_7[0] == 'P')
              && (VAR_7[1] == 'R')
              && (VAR_7[2] == 'O')
              && (VAR_7[3] == 'P')
              && (VAR_7[4] == 'S')
              && (VAR_7[5] == '-')
              && (VAR_7[6] == 'E')
              && (VAR_7[7] == 'N')
              && (VAR_7[8] == 'D')))
        {

          return VAR_2;
        }
      else if ((VAR_7[0] == 'K') && (VAR_7[1] == ' '))
        {
          size_t VAR_12;
          int VAR_13;
          void *VAR_14;


          FUNC_1(FUNC_4(&VAR_13, VAR_7 + 2));
          VAR_12 = VAR_13;


          VAR_14 = FUNC_3(VAR_5, VAR_12 + 1);
          FUNC_1(FUNC_8(VAR_4,
                                         VAR_14, VAR_12,
                                         &VAR_8, ((void*)0), VAR_5));
          ((char *) VAR_14)[VAR_12] = '\0';


          FUNC_1(FUNC_7(&VAR_9, VAR_4, VAR_5));
          if (VAR_9 != '\n')
            return FUNC_6(VAR_0, ((void*)0), ((void*)0));


          VAR_11 = sizeof(VAR_7);
          FUNC_1(FUNC_9(VAR_4, VAR_7, &VAR_11, VAR_5));

          if ((VAR_7[0] == 'V') && (VAR_7[1] == ' '))
            {
              svn_string_t *VAR_15 = FUNC_3(VAR_5, sizeof(*VAR_15));
              apr_size_t VAR_16;
              void *VAR_17;


              FUNC_1(FUNC_4(&VAR_13, VAR_7 + 2));
              VAR_16 = VAR_13;


              VAR_17 = FUNC_3(VAR_5, VAR_16 + 1);
              FUNC_1(FUNC_8(VAR_4,
                                             VAR_17, VAR_16,
                                             &VAR_8, ((void*)0), VAR_5));
              ((char *) VAR_17)[VAR_16] = '\0';


              FUNC_1(FUNC_7(&VAR_9, VAR_4, VAR_5));
              if (VAR_9 != '\n')
                return FUNC_6(VAR_0, ((void*)0), ((void*)0));

              VAR_15->data = VAR_17;
              VAR_15->len = VAR_16;


              FUNC_2(VAR_3, VAR_14, VAR_12, VAR_15);
            }
          else
            {
              return FUNC_6(VAR_0, ((void*)0), ((void*)0));
            }
        }
      else
        {
          return FUNC_6(VAR_0, ((void*)0), ((void*)0));
        }
    }
}

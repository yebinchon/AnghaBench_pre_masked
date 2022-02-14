
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {char* data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct svn_diff__hunk_range {scalar_t__ current; scalar_t__ end; } ;
typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_off_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (scalar_t__*,int *,int *) ;
 int FUNC_3 (int *,TYPE_1__**,char const**,int*,scalar_t__,int *,int *) ;
 int FUNC_4 (int *,int ,scalar_t__*,int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 TYPE_1__* FUNC_8 (char*,int *) ;
 TYPE_1__* FUNC_9 (int *) ;
 TYPE_1__* FUNC_10 (int ,int *) ;
 TYPE_1__* FUNC_11 (TYPE_1__*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_12(apr_file_t *VAR_5,
                                   struct svn_diff__hunk_range *VAR_6,
                                   svn_stringbuf_t **VAR_7,
                                   const char **VAR_8,
                                   svn_boolean_t *VAR_9,
                                   char VAR_10,
                                   svn_boolean_t VAR_11,
                                   apr_pool_t *VAR_12,
                                   apr_pool_t *VAR_13)
{
  apr_size_t VAR_14;
  svn_boolean_t VAR_15;
  apr_off_t VAR_16;
  svn_stringbuf_t *VAR_17;
  const char *VAR_18;
  apr_pool_t *VAR_19;

  if (!VAR_8)
    VAR_8 = &VAR_18;

  if (VAR_6->current >= VAR_6->end)
    {

      *VAR_9 = VAR_4;
      *VAR_8 = ((void*)0);
      *VAR_7 = FUNC_9(VAR_12);
      return VAR_3;
    }

  FUNC_0(FUNC_2(&VAR_16, VAR_5, VAR_13));
  FUNC_0(FUNC_4(VAR_5, VAR_0, &VAR_6->current, VAR_13));



  VAR_19 = FUNC_6(VAR_13);
  do
    {
      FUNC_5(VAR_19);

      VAR_14 = VAR_6->end - VAR_6->current;
      FUNC_0(FUNC_3(VAR_5, &VAR_17, VAR_8, VAR_9, VAR_14,
                                   VAR_19, VAR_19));
      FUNC_0(FUNC_2(&VAR_6->current, VAR_5, VAR_19));
      VAR_15 = (VAR_17->data[0] == VAR_10 || VAR_17->data[0] == '\\');
    }
  while (VAR_15 && ! *VAR_9);

  if (VAR_15)
    {

      *VAR_7 = FUNC_10(0, VAR_12);
      *VAR_8 = ((void*)0);
    }
  else if (VAR_17->data[0] == '+' || VAR_17->data[0] == '-' || VAR_17->data[0] == ' ')
    {

      *VAR_7 = FUNC_8(VAR_17->data + 1, VAR_12);
    }
  else
    {

      *VAR_7 = FUNC_11(VAR_17, VAR_12);
    }

  if (!VAR_15 && *VAR_9 && !*VAR_8 && *VAR_17->data)
    {






      if (!VAR_11 && VAR_8 != &VAR_18)
        {
          apr_off_t VAR_20 = 0;

          FUNC_0(FUNC_4(VAR_5, VAR_0, &VAR_20, VAR_13));

          FUNC_0(FUNC_3(VAR_5, &VAR_17, VAR_8, ((void*)0), VAR_1,
                                       VAR_13, VAR_13));


          FUNC_1(*VAR_8 != ((void*)0));
        }

      *VAR_9 = VAR_2;

    }
  FUNC_0(FUNC_4(VAR_5, VAR_0, &VAR_16, VAR_13));

  FUNC_7(VAR_19);
  return VAR_3;
}

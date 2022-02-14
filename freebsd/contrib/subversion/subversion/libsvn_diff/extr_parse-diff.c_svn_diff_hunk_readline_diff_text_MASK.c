
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {char* data; } ;
typedef TYPE_3__ svn_stringbuf_t ;
typedef int svn_error_t ;
struct TYPE_9__ {scalar_t__ current; scalar_t__ end; } ;
struct TYPE_12__ {TYPE_2__* patch; int apr_file; TYPE_1__ diff_text_range; } ;
typedef TYPE_4__ svn_diff_hunk_t ;
typedef scalar_t__ svn_boolean_t ;
typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_off_t ;
struct TYPE_10__ {scalar_t__ reverse; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (scalar_t__*,int ,int *) ;
 int FUNC_3 (int ,TYPE_3__**,char const**,scalar_t__*,scalar_t__,int *,int *) ;
 int FUNC_4 (int ,int ,scalar_t__*,int *) ;
 TYPE_3__* FUNC_5 (int *) ;

svn_error_t *
FUNC_6(svn_diff_hunk_t *VAR_5,
                                 svn_stringbuf_t **VAR_6,
                                 const char **VAR_7,
                                 svn_boolean_t *VAR_8,
                                 apr_pool_t *VAR_9,
                                 apr_pool_t *VAR_10)
{
  svn_stringbuf_t *VAR_11;
  apr_size_t VAR_12;
  apr_off_t VAR_13;
  const char *VAR_14;

  if (!VAR_7)
    VAR_7 = &VAR_14;

  if (VAR_5->diff_text_range.current >= VAR_5->diff_text_range.end)
    {

      *VAR_8 = VAR_4;
      *VAR_7 = ((void*)0);
      *VAR_6 = FUNC_5(VAR_9);
      return VAR_3;
    }

  FUNC_0(FUNC_2(&VAR_13, VAR_5->apr_file, VAR_10));
  FUNC_0(FUNC_4(VAR_5->apr_file, VAR_0,
                           &VAR_5->diff_text_range.current, VAR_10));
  VAR_12 = VAR_5->diff_text_range.end - VAR_5->diff_text_range.current;
  FUNC_0(FUNC_3(VAR_5->apr_file, &VAR_11, VAR_7, VAR_8, VAR_12,
                               VAR_9,
                   VAR_10));
  FUNC_0(FUNC_2(&VAR_5->diff_text_range.current,
                                 VAR_5->apr_file, VAR_10));

  if (*VAR_8 && !*VAR_7 && *VAR_11->data)
    {






      if (VAR_7 != &VAR_14)
        {

          apr_off_t VAR_15 = 0;
          svn_stringbuf_t *VAR_16;

          FUNC_0(FUNC_4(VAR_5->apr_file, VAR_0, &VAR_15,
                                   VAR_10));

          FUNC_0(FUNC_3(VAR_5->apr_file, &VAR_16, VAR_7, ((void*)0),
                                       VAR_1,
                                       VAR_10, VAR_10));


          FUNC_1(*VAR_7 != ((void*)0));
        }

      *VAR_8 = VAR_2;


    }

  FUNC_0(FUNC_4(VAR_5->apr_file, VAR_0, &VAR_13, VAR_10));

  if (VAR_5->patch->reverse)
    {
      if (VAR_11->data[0] == '+')
        VAR_11->data[0] = '-';
      else if (VAR_11->data[0] == '-')
        VAR_11->data[0] = '+';
    }

  *VAR_6 = VAR_11;

  return VAR_3;
}

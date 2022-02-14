
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
struct TYPE_8__ {int modified_length; int modified_start; int original_length; int original_start; } ;
typedef TYPE_2__ svn_diff_hunk_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (char const*,char const*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (TYPE_1__*,char const*,int) ;
 TYPE_1__* FUNC_4 (int,int *) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static svn_boolean_t
FUNC_6(const char *VAR_2, svn_diff_hunk_t *VAR_3,
                  const char *VAR_4, apr_pool_t *VAR_5)
{
  const char *VAR_6;
  const char *VAR_7;
  svn_stringbuf_t *VAR_8;

  VAR_6 = VAR_2 + FUNC_2(VAR_4);
  if (*VAR_6 != ' ')

    return VAR_0;
  VAR_6++;
  if (*VAR_6 != '-')

    return VAR_0;

  VAR_8 = FUNC_4(31, VAR_5);
  VAR_7 = ++VAR_6;
  while (*VAR_6 && *VAR_6 != ' ')
    {
      VAR_6++;
    }

  if (*VAR_6 != ' ')

    return VAR_0;

  FUNC_3(VAR_8, VAR_7, VAR_6 - VAR_7);


  if (! FUNC_0(&VAR_3->original_start, &VAR_3->original_length, VAR_8->data))
    return VAR_0;


  FUNC_5(VAR_8);
  VAR_6++;
  if (*VAR_6 != '+')

    return VAR_0;

  VAR_7 = ++VAR_6;
  while (*VAR_6 && *VAR_6 != ' ')
    {
      VAR_6++;
    }
  if (*VAR_6 != ' ')

    return VAR_0;

  FUNC_3(VAR_8, VAR_7, VAR_6 - VAR_7);


  VAR_6++;
  if (! FUNC_1(VAR_6, VAR_4))
    return VAR_0;





  if (! FUNC_0(&VAR_3->modified_start, &VAR_3->modified_length, VAR_8->data))
    return VAR_0;


  return VAR_1;
}

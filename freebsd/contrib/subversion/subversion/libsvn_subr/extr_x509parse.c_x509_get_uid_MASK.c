
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int tag; unsigned char const* p; int len; } ;
typedef TYPE_1__ x509_buf ;
struct TYPE_11__ {scalar_t__ apr_err; } ;
typedef TYPE_2__ svn_error_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* VAR_3 ;
 TYPE_2__* FUNC_0 (unsigned char const**,unsigned char const*,int *,int) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static svn_error_t *
FUNC_3(const unsigned char **VAR_4,
             const unsigned char *VAR_5, x509_buf * VAR_6, int VAR_7)
{
  svn_error_t *VAR_8;

  if (*VAR_4 == VAR_5)
    return VAR_3;

  VAR_8 = FUNC_0(VAR_4, VAR_5, &VAR_6->len,
                     VAR_1 | VAR_0 | VAR_7);
  if (VAR_8)
    {
      if (VAR_8->apr_err == VAR_2)
        {
          FUNC_1(VAR_8);
          return VAR_3;
        }

      return FUNC_2(VAR_8);
    }

  VAR_6->tag = VAR_1 | VAR_0 | VAR_7;
  VAR_6->p = *VAR_4;
  *VAR_4 += VAR_6->len;

  return VAR_3;
}

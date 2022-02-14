
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char const* p; int len; int tag; } ;
typedef TYPE_1__ x509_buf ;
typedef int svn_error_t ;


 int VAR_0 ;
 unsigned char const VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int * FUNC_0 (unsigned char const**,unsigned char const*,int *) ;
 int * FUNC_1 (int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(const unsigned char **VAR_7,
                const unsigned char *VAR_8, x509_buf * VAR_9)
{
  svn_error_t *VAR_10;

  if ((VAR_8 - *VAR_7) < 1)
    {
      VAR_10 = FUNC_1(VAR_3, ((void*)0), ((void*)0));
      return FUNC_1(VAR_5, VAR_10, ((void*)0));
    }

  if (**VAR_7 != (VAR_0 | VAR_2 | 2) &&
      **VAR_7 != VAR_1)
    {
      VAR_10 = FUNC_1(VAR_4, ((void*)0), ((void*)0));
      return FUNC_1(VAR_5, VAR_10, ((void*)0));
    }

  VAR_9->tag = *(*VAR_7)++;

  VAR_10 = FUNC_0(VAR_7, VAR_8, &VAR_9->len);
  if (VAR_10)
    return FUNC_1(VAR_5, VAR_10, ((void*)0));

  VAR_9->p = *VAR_7;
  *VAR_7 += VAR_9->len;

  return VAR_6;
}

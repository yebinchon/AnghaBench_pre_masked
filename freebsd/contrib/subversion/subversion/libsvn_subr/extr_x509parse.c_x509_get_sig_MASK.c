
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; unsigned char const* p; int tag; } ;
typedef TYPE_1__ x509_buf ;
typedef int svn_error_t ;
typedef int ptrdiff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int * FUNC_0 (unsigned char const**,unsigned char const*,int*,int ) ;
 int * FUNC_1 (int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(const unsigned char **VAR_3, const unsigned char *VAR_4, x509_buf * VAR_5)
{
  svn_error_t *VAR_6;
  ptrdiff_t VAR_7;

  VAR_6 = FUNC_0(VAR_3, VAR_4, &VAR_7, VAR_0);
  if (VAR_6)
    return FUNC_1(VAR_1, VAR_6, ((void*)0));

  VAR_5->tag = VAR_0;

  if (--VAR_7 < 1 || *(*VAR_3)++ != 0)
    return FUNC_1(VAR_1, ((void*)0), ((void*)0));

  VAR_5->len = VAR_7;
  VAR_5->p = *VAR_3;

  *VAR_3 += VAR_7;

  return VAR_2;
}

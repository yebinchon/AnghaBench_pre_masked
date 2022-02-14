
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int tag; unsigned char const* p; int len; } ;
struct TYPE_4__ {int * next; TYPE_2__ val; TYPE_2__ oid; } ;
typedef TYPE_1__ x509_name ;
typedef TYPE_2__ x509_buf ;
typedef int svn_error_t ;
typedef int ptrdiff_t ;
typedef int apr_pool_t ;


 unsigned char const VAR_0 ;
 int VAR_1 ;
 unsigned char const VAR_2 ;
 int VAR_3 ;
 unsigned char const VAR_4 ;
 int VAR_5 ;
 unsigned char const VAR_6 ;
 unsigned char const VAR_7 ;
 unsigned char const VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int * VAR_13 ;
 int * FUNC_0 (unsigned char const**,unsigned char const*,int *) ;
 int * FUNC_1 (unsigned char const**,unsigned char const*,int *,int) ;
 int * FUNC_2 (int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(const unsigned char **VAR_14, const unsigned char *VAR_15,
                   x509_name *VAR_16, apr_pool_t *VAR_17)
{
  svn_error_t *VAR_18;
  ptrdiff_t VAR_19;
  x509_buf *VAR_20;
  x509_buf *VAR_21;

  VAR_18 = FUNC_1(VAR_14, VAR_15, &VAR_19, VAR_1 | VAR_5);
  if (VAR_18)
    return FUNC_2(VAR_12, VAR_18, ((void*)0));

  VAR_15 = *VAR_14 + VAR_19;

  VAR_20 = &VAR_16->oid;

  VAR_18 = FUNC_1(VAR_14, VAR_15, &VAR_20->len, VAR_3);
  if (VAR_18)
    return FUNC_2(VAR_12, VAR_18, ((void*)0));

  VAR_20->tag = VAR_3;
  VAR_20->p = *VAR_14;
  *VAR_14 += VAR_20->len;

  if ((VAR_15 - *VAR_14) < 1)
    {
      VAR_18 = FUNC_2(VAR_10, ((void*)0), ((void*)0));
      return FUNC_2(VAR_12, VAR_18, ((void*)0));
    }

  if (**VAR_14 != VAR_0 && **VAR_14 != VAR_8 &&
      **VAR_14 != VAR_6 && **VAR_14 != VAR_4 &&
      **VAR_14 != VAR_2 && **VAR_14 != VAR_7)
    {
      VAR_18 = FUNC_2(VAR_11, ((void*)0), ((void*)0));
      return FUNC_2(VAR_12, VAR_18, ((void*)0));
    }

  VAR_21 = &VAR_16->val;
  VAR_21->tag = *(*VAR_14)++;

  VAR_18 = FUNC_0(VAR_14, VAR_15, &VAR_21->len);
  if (VAR_18)
    return FUNC_2(VAR_12, VAR_18, ((void*)0));

  VAR_21->p = *VAR_14;
  *VAR_14 += VAR_21->len;

  VAR_16->next = ((void*)0);

  if (*VAR_14 != VAR_15)
    {
      VAR_18 = FUNC_2(VAR_9, ((void*)0), ((void*)0));
      return FUNC_2(VAR_12, VAR_18, ((void*)0));
    }

  return VAR_13;
}

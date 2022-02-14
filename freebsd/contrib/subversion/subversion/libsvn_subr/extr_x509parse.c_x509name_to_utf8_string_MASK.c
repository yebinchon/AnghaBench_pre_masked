
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int tag; int len; scalar_t__ p; } ;
struct TYPE_13__ {TYPE_1__ val; } ;
typedef TYPE_2__ x509_name ;
struct TYPE_14__ {int len; scalar_t__ data; } ;
typedef TYPE_3__ svn_string_t ;
typedef int svn_error_t ;
typedef int apr_uint16_t ;
typedef int apr_pool_t ;
typedef int apr_int32_t ;






 int VAR_0 ;
 char const* FUNC_0 (TYPE_3__ const*,int *) ;
 int * FUNC_1 (TYPE_3__ const**,TYPE_3__ const*,int *) ;
 char const* FUNC_2 (TYPE_3__ const*,int *) ;
 int FUNC_3 (int *) ;
 TYPE_3__* FUNC_4 (char const*,int ,int *) ;
 int FUNC_5 (scalar_t__,int) ;
 int * FUNC_6 (TYPE_3__ const**,void const*,int,int ,int *,int *) ;
 int * FUNC_7 (TYPE_3__ const**,void const*,int,int ,int *,int *) ;

__attribute__((used)) static const char *
FUNC_8(const x509_name *VAR_1, apr_pool_t *VAR_2)
{
  const svn_string_t *VAR_3;
  const svn_string_t *VAR_4;
  svn_error_t *VAR_5;

  VAR_3 = FUNC_4((const char *)VAR_1->val.p,
                                  VAR_1->val.len,
                                  VAR_2);
  switch (VAR_1->val.tag)
    {
    case 128:
      if (FUNC_5(VAR_3->data, VAR_3->len))
        return FUNC_2(VAR_3, VAR_2);
      else


        return FUNC_0(VAR_3, VAR_2);
      break;







    case 131:
      if (0 != VAR_3->len % sizeof(apr_uint16_t))
          return FUNC_0(VAR_3, VAR_2);
      VAR_5 = FUNC_6(&VAR_4,
                                   (const void*)(VAR_3->data),
                                   VAR_3->len / sizeof(apr_uint16_t),
                                   VAR_0, VAR_2, VAR_2);
      break;

    case 129:
      if (0 != VAR_3->len % sizeof(apr_int32_t))
          return FUNC_0(VAR_3, VAR_2);
      VAR_5 = FUNC_7(&VAR_4,
                                   (const void*)(VAR_3->data),
                                   VAR_3->len / sizeof(apr_int32_t),
                                   VAR_0, VAR_2, VAR_2);
      break;







    case 130:
      VAR_5 = FUNC_1(&VAR_4, VAR_3, VAR_2);
      break;
    default:
      return FUNC_0(VAR_3, VAR_2);
    }

  if (VAR_5)
    {
      FUNC_3(VAR_5);
      return FUNC_0(VAR_3, VAR_2);
    }

  return FUNC_2(VAR_4, VAR_2);
}

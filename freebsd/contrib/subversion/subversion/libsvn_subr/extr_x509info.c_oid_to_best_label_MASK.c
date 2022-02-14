
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* short_label; char const* long_label; } ;
typedef TYPE_1__ asn1_oid ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (unsigned char*,int ) ;
 char* FUNC_1 (unsigned char*,int ,int *,int *) ;

__attribute__((used)) static const char *FUNC_2(unsigned char *VAR_0, apr_size_t VAR_1,
                                     apr_pool_t *VAR_2)
{
  const asn1_oid *VAR_3 = FUNC_0(VAR_0, VAR_1);

  if (VAR_3)
    {
      if (VAR_3->short_label)
        return VAR_3->short_label;

      if (VAR_3->long_label)
        return VAR_3->long_label;
    }
  else
    {
      const char *VAR_4 = FUNC_1(VAR_0, VAR_1,
                                                      VAR_2, VAR_2);
      if (VAR_4)
        return VAR_4;
    }

  return "??";
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int kind; int digest; } ;
typedef TYPE_1__ svn_checksum_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 char const* FUNC_0 (int ,int ,int *) ;





const char *
FUNC_1(const svn_checksum_t *VAR_1,
                                apr_pool_t *VAR_2)
{
  switch (VAR_1->kind)
    {
      case 129:
      case 128:
      case 131:
      case 130:
        return FUNC_0(VAR_1->digest,
                                              VAR_0[VAR_1->kind],
                                              VAR_2);

      default:

        return ((void*)0);
    }
}

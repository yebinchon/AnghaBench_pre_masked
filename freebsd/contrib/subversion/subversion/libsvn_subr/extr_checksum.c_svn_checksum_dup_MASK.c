
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int kind; int digest; } ;
typedef TYPE_1__ svn_checksum_t ;
typedef int apr_pool_t ;


 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int,int ,int *) ;





svn_checksum_t *
FUNC_2(const svn_checksum_t *VAR_0,
                 apr_pool_t *VAR_1)
{

  if (VAR_0 == ((void*)0))
    return ((void*)0);






  switch (VAR_0->kind)
    {
      case 129:
      case 128:
      case 131:
      case 130:
        return FUNC_1(VAR_0->kind, VAR_0->digest, VAR_1);

      default:
        FUNC_0();
        break;
    }
}

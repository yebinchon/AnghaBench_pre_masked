
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ digest; } ;
typedef TYPE_1__ svn_checksum_t ;
typedef int svn_checksum_kind_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int,int ,int *) ;
 int * VAR_0 ;
 int FUNC_1 (unsigned char*,int ,int ) ;





svn_checksum_t *
FUNC_2(svn_checksum_kind_t VAR_1,
                    apr_pool_t *VAR_2)
{
  svn_checksum_t *VAR_3;
  apr_size_t VAR_4;

  switch (VAR_1)
    {
      case 129:
      case 128:
      case 131:
      case 130:
        VAR_4 = VAR_0[VAR_1];
        break;

      default:
        return ((void*)0);
    }

  VAR_3 = FUNC_0(VAR_1, VAR_4, VAR_2);
  FUNC_1((unsigned char *) VAR_3->digest, 0, VAR_4);
  return VAR_3;
}

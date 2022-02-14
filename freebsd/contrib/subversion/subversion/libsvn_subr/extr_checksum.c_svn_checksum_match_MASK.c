
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int kind; int digest; } ;
typedef TYPE_1__ svn_checksum_t ;
typedef int svn_boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;





svn_boolean_t
FUNC_1(const svn_checksum_t *VAR_3,
                   const svn_checksum_t *VAR_4)
{
  if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
    return VAR_1;

  if (VAR_3->kind != VAR_4->kind)
    return VAR_0;

  switch (VAR_3->kind)
    {
      case 129:
      case 128:
      case 131:
      case 130:
        return FUNC_0(VAR_3->digest,
                                  VAR_4->digest,
                                  VAR_2[VAR_3->kind]);

      default:

        return VAR_0;
    }
}

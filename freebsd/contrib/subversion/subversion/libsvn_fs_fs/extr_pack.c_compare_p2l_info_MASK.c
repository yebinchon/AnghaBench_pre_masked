
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ revision; scalar_t__ number; } ;
struct TYPE_6__ {TYPE_1__ item; } ;
typedef TYPE_2__ svn_fs_fs__p2l_entry_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(const svn_fs_fs__p2l_entry_t * const * VAR_0,
                 const svn_fs_fs__p2l_entry_t * const * VAR_1)
{
  FUNC_0(*VAR_0 != *VAR_1);

  if ((*VAR_0)->item.revision == (*VAR_1)->item.revision)
    return (*VAR_0)->item.number > (*VAR_1)->item.number ? -1 : 1;

  return (*VAR_0)->item.revision > (*VAR_1)->item.revision ? -1 : 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t kind; } ;
typedef TYPE_1__ svn_checksum_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 char const* FUNC_1 (int *,int ,int ,int ) ;
 int * VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_2 (TYPE_1__ const*,int *) ;

const char *
FUNC_3(const svn_checksum_t *VAR_4,
                       apr_pool_t *VAR_5,
                       apr_pool_t *VAR_6)
{
  FUNC_0(VAR_4->kind >= VAR_3
                           || VAR_4->kind <= VAR_2);
  return FUNC_1(VAR_5,
                     VAR_1[VAR_4->kind],
                     FUNC_2(VAR_4, VAR_6),
                     VAR_0);
}

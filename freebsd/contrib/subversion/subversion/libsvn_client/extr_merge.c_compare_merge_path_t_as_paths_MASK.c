
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int abspath; } ;
typedef TYPE_1__ svn_client__merge_path_t ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_0,
                              const void *VAR_1)
{
  const svn_client__merge_path_t *VAR_2
    = *((const svn_client__merge_path_t * const *) VAR_0);
  const svn_client__merge_path_t *VAR_3
    = *((const svn_client__merge_path_t * const *) VAR_1);

  return FUNC_0(VAR_2->abspath, VAR_3->abspath);
}

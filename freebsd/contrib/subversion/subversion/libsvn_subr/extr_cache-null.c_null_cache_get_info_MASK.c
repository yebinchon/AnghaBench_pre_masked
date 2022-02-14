
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_3__ {scalar_t__ total_size; scalar_t__ data_size; scalar_t__ used_size; scalar_t__ total_entries; scalar_t__ used_entries; int id; } ;
typedef TYPE_1__ svn_cache__info_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int FUNC_0 (int *,char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_1(void *VAR_1,
                    svn_cache__info_t *VAR_2,
                    svn_boolean_t VAR_3,
                    apr_pool_t *VAR_4)
{
  const char *VAR_5 = VAR_1;

  VAR_2->id = FUNC_0(VAR_4, VAR_5);

  VAR_2->used_entries = 0;
  VAR_2->total_entries = 0;

  VAR_2->used_size = 0;
  VAR_2->data_size = 0;
  VAR_2->total_size = 0;

  return VAR_0;
}

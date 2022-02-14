
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
struct revision_baton_t {int rev_orig; int rev_actual; TYPE_1__* pb; int original_headers; int props; void* writing_begun; void* had_dropped_nodes; void* has_nodes; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_2__ {int rev_drop_count; scalar_t__ do_renumber_revs; } ;


 void* VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int *) ;
 char* FUNC_4 (int *,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_5(void **VAR_3,
                    apr_hash_t *VAR_4,
                    void *VAR_5,
                    apr_pool_t *VAR_6)
{
  struct revision_baton_t *VAR_7;
  const char *VAR_8;

  *VAR_3 = FUNC_2(VAR_6, sizeof(struct revision_baton_t));
  VAR_7 = *VAR_3;
  VAR_7->pb = VAR_5;
  VAR_7->has_nodes = VAR_0;
  VAR_7->had_dropped_nodes = VAR_0;
  VAR_7->writing_begun = VAR_0;
  VAR_7->props = FUNC_1(VAR_6);
  VAR_7->original_headers = FUNC_3(VAR_4, VAR_6);

  VAR_8 = FUNC_4(VAR_4, VAR_2);
  VAR_7->rev_orig = FUNC_0(VAR_8);

  if (VAR_7->pb->do_renumber_revs)
    VAR_7->rev_actual = VAR_7->rev_orig - VAR_7->pb->rev_drop_count;
  else
    VAR_7->rev_actual = VAR_7->rev_orig;

  return VAR_1;
}

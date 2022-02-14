
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct revision_baton_t {int rev_orig; } ;
struct node_baton_t {int props; int has_props; int node_path; int has_prop_delta; scalar_t__ do_skip; struct revision_baton_t* rb; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int ,int *,int ,int ,int ) ;
 int FUNC_2 (int *,char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_3(void *VAR_3, const char *VAR_4)
{
  struct node_baton_t *VAR_5 = VAR_3;
  struct revision_baton_t *VAR_6 = VAR_5->rb;

  if (VAR_5->do_skip)
    return VAR_1;

  if (!VAR_5->has_prop_delta)
    return FUNC_1(VAR_0, ((void*)0),
                             FUNC_0("Delta property block detected, but deltas "
                               "are not enabled for node '%s' in original "
                               "revision %ld"),
                             VAR_5->node_path, VAR_6->rev_orig);

  VAR_5->has_props = VAR_2;
  FUNC_2(&(VAR_5->props), VAR_4);

  return VAR_1;
}

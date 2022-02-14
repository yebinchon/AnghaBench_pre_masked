
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_wc_conflict_version_t ;
struct TYPE_5__ {int len; int data; struct TYPE_5__* next; scalar_t__ is_atom; struct TYPE_5__* children; } ;
typedef TYPE_1__ svn_skel_t ;
typedef scalar_t__ svn_revnum_t ;
typedef int svn_node_kind_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_int64_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (TYPE_1__ const*,int ) ;
 int FUNC_4 (scalar_t__*,TYPE_1__ const*,int *) ;
 int * FUNC_5 (char const*,char const*,char const*,scalar_t__,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(svn_wc_conflict_version_t **VAR_2,
                        const svn_skel_t *VAR_3,
                        apr_pool_t *VAR_4,
                        apr_pool_t *VAR_5)
{
  const char *VAR_6;
  const char *VAR_7;
  const char *VAR_8;
  svn_revnum_t VAR_9;
  apr_int64_t VAR_10;
  svn_node_kind_t VAR_11;
  const char *VAR_12;

  const svn_skel_t *VAR_13 = VAR_3->children;

  if (!FUNC_3(VAR_13, VAR_1))
    {
      *VAR_2 = ((void*)0);
      return VAR_0;
    }
  VAR_13 = VAR_13->next;

  VAR_6 = FUNC_1(VAR_4, VAR_13->data, VAR_13->len);
  VAR_13 = VAR_13->next;

  if (VAR_13->is_atom)
    VAR_7 = FUNC_1(VAR_4, VAR_13->data, VAR_13->len);
  else
    VAR_7 = ((void*)0);
  VAR_13 = VAR_13->next;

  VAR_8 = FUNC_1(VAR_4, VAR_13->data, VAR_13->len);
  VAR_13 = VAR_13->next;

  FUNC_0(FUNC_4(&VAR_10, VAR_13, VAR_5));
  VAR_9 = (svn_revnum_t)VAR_10;
  VAR_13 = VAR_13->next;

  VAR_12 = FUNC_1(VAR_5, VAR_13->data, VAR_13->len);
  VAR_11 = FUNC_2(VAR_12);

  *VAR_2 = FUNC_5(VAR_6,
                                              VAR_7,
                                              VAR_8,
                                              VAR_9,
                                              VAR_11,
                                              VAR_4);
  return VAR_0;
}

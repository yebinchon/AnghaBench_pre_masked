
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ svn_wc_operation_t ;
typedef int svn_wc_conflict_version_t ;
typedef int svn_wc_conflict_reason_t ;
struct TYPE_15__ {int action; int reason; } ;
typedef TYPE_3__ svn_wc_conflict_description2_t ;
typedef int svn_wc_conflict_action_t ;
struct TYPE_16__ {struct TYPE_16__ const* next; TYPE_2__* children; } ;
typedef TYPE_4__ const svn_skel_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
struct TYPE_17__ {char* data; } ;
struct TYPE_14__ {TYPE_1__* next; } ;
struct TYPE_13__ {TYPE_4__ const* next; int len; int data; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (TYPE_4__ const*) ;
 int VAR_2 ;
 int FUNC_4 (int*,int ,TYPE_4__ const*) ;
 int FUNC_5 (int const**,TYPE_4__ const*,int *,int *) ;
 int FUNC_6 (char const**,int ,int *) ;
 int FUNC_7 (char const*,char const*,int *) ;
 int * FUNC_8 (int ,int *,int ) ;
 int * FUNC_9 (int ,int *,int ,char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_8__* FUNC_10 (TYPE_4__ const*,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_3__* FUNC_11 (char const*,scalar_t__,scalar_t__,int const*,int const*,int *) ;

svn_error_t *
FUNC_12(const svn_wc_conflict_description2_t **VAR_8,
                             const svn_skel_t *VAR_9,
                             const char *VAR_10,
                             apr_pool_t *VAR_11,
                             apr_pool_t *VAR_12)
{
  const char *VAR_13;
  const char *VAR_14;
  svn_node_kind_t VAR_15;
  svn_wc_operation_t VAR_16;
  svn_wc_conflict_action_t VAR_17;
  svn_wc_conflict_reason_t VAR_18;
  const svn_wc_conflict_version_t *VAR_19;
  const svn_wc_conflict_version_t *VAR_20;
  int VAR_21;
  svn_wc_conflict_description2_t *VAR_22;

  if (!FUNC_3(VAR_9))
    return FUNC_9(VAR_0, ((void*)0),
                             FUNC_1("Invalid conflict info '%s' in tree conflict "
                               "description"),
                             VAR_9 ? FUNC_10(VAR_9, VAR_12)->data
                                  : "(null)");


  VAR_13 = FUNC_2(VAR_12,
                                   VAR_9->children->next->data,
                                   VAR_9->children->next->len);
  if (VAR_13[0] == '\0')
    return FUNC_8(VAR_0, ((void*)0),
                            FUNC_1("Empty 'victim' field in tree conflict "
                              "description"));


  FUNC_0(FUNC_4(&VAR_21, VAR_2, VAR_9->children->next->next));
  VAR_15 = (svn_node_kind_t)VAR_21;
  if (VAR_15 != VAR_4 && VAR_15 != VAR_3)
    return FUNC_8(VAR_0, ((void*)0),
             FUNC_1("Invalid 'node_kind' field in tree conflict description"));


  FUNC_0(FUNC_4(&VAR_21, VAR_7,
                          VAR_9->children->next->next->next));
  VAR_16 = (svn_wc_operation_t)VAR_21;

  FUNC_0(FUNC_6(&VAR_14,
                    FUNC_7(VAR_10, VAR_13, VAR_12),
                    VAR_12));


  FUNC_0(FUNC_4(&VAR_21, VAR_5,
                          VAR_9->children->next->next->next->next));
  VAR_17 = VAR_21;


  FUNC_0(FUNC_4(&VAR_21, VAR_6,
                          VAR_9->children->next->next->next->next->next));
  VAR_18 = VAR_21;


  VAR_9 = VAR_9->children->next->next->next->next->next->next;


  FUNC_0(FUNC_5(&VAR_19, VAR_9,
                                 VAR_11, VAR_12));


  FUNC_0(FUNC_5(&VAR_20, VAR_9->next,
                                 VAR_11, VAR_12));

  VAR_22 = FUNC_11(VAR_14,
    VAR_15, VAR_16, VAR_19, VAR_20,
    VAR_11);
  VAR_22->action = VAR_17;
  VAR_22->reason = VAR_18;

  *VAR_8 = VAR_22;

  return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int svn_wc_conflict_version_t ;
struct TYPE_12__ {TYPE_4__* children; } ;
typedef TYPE_5__ svn_skel_t ;
typedef int svn_revnum_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
struct TYPE_11__ {TYPE_3__* next; } ;
struct TYPE_10__ {TYPE_2__* next; int len; int data; } ;
struct TYPE_9__ {TYPE_1__* next; int len; int data; } ;
struct TYPE_8__ {int next; int len; int data; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (TYPE_5__ const*) ;
 int VAR_2 ;
 int FUNC_5 (int*,int ,int ) ;
 int * FUNC_6 (int ,int *,int ) ;
 char* FUNC_7 (char const*,int *) ;
 int * FUNC_8 (char const*,int *,char const*,int ,scalar_t__,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_9(const svn_wc_conflict_version_t **VAR_3,
                       const svn_skel_t *VAR_4,
                       apr_pool_t *VAR_5,
                       apr_pool_t *VAR_6)
{
  int VAR_7;
  const char *VAR_8;
  const char *VAR_9;
  svn_revnum_t VAR_10;
  svn_node_kind_t VAR_11;

  if (!FUNC_4(VAR_4))
    return FUNC_6(VAR_0, ((void*)0),
                            FUNC_2("Invalid version info in tree conflict "
                              "description"));

  VAR_8 = FUNC_3(VAR_6,
                              VAR_4->children->next->data,
                              VAR_4->children->next->len);
  if (*VAR_8 == '\0')
    {
      *VAR_3 = ((void*)0);
      return VAR_1;
    }


  VAR_8 = FUNC_7(VAR_8, VAR_5);

  VAR_10 = FUNC_1(FUNC_3(VAR_6,
                                          VAR_4->children->next->next->data,
                                          VAR_4->children->next->next->len));

  VAR_9 = FUNC_3(VAR_5,
                                 VAR_4->children->next->next->next->data,
                                 VAR_4->children->next->next->next->len);

  FUNC_0(FUNC_5(&VAR_7, VAR_2,
                          VAR_4->children->next->next->next->next));
  VAR_11 = (svn_node_kind_t)VAR_7;

  *VAR_3 = FUNC_8(VAR_8,
                                                  ((void*)0),
                                                  VAR_9,
                                                  VAR_10,
                                                  VAR_11,
                                                  VAR_5);

  return VAR_1;
}

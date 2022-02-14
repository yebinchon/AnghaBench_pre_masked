
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
struct edit_baton {TYPE_1__* path_tracker; } ;
typedef int apr_pool_t ;
struct TYPE_2__ {int revision; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__*,struct edit_baton*,char const*,int ,int *) ;
 int * FUNC_3 (int ,int *,int ,char const*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (char const**,int *,TYPE_1__*,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(struct edit_baton *VAR_3,
                    const char *VAR_4,
                    svn_revnum_t VAR_5,
                    apr_pool_t *VAR_6)
{
  svn_node_kind_t VAR_7 = VAR_2;


  if (VAR_3->path_tracker == ((void*)0))
    return VAR_1;



  if (VAR_5 == VAR_3->path_tracker->revision)
    FUNC_4(&VAR_4, &VAR_5, VAR_3->path_tracker, VAR_4, VAR_6);


  if (VAR_4)
    FUNC_0(FUNC_2(&VAR_7, VAR_3, VAR_4, VAR_5, VAR_6));


  if (VAR_7 != VAR_2)
    return FUNC_3(VAR_0, ((void*)0),
                             FUNC_1("Path '%s' exists in r%ld."),
                             VAR_4, VAR_5);

  return VAR_1;
}

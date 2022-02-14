
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ len; int data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_mergeinfo_t ;
struct TYPE_10__ {int apr_err; } ;
typedef TYPE_2__ svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int ,TYPE_2__*,int ,char const*) ;
 TYPE_2__* FUNC_3 (int *,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(const svn_string_t *VAR_2,
                 const char *VAR_3,
                 apr_pool_t *VAR_4)
{
  svn_error_t *VAR_5;
  svn_mergeinfo_t VAR_6;


  if (VAR_2 == ((void*)0))
    return VAR_1;



  if (FUNC_1(VAR_2->data) != VAR_2->len)
    return FUNC_2(VAR_0, ((void*)0),
                             FUNC_0("Commit rejected because mergeinfo on '%s' "
                               "contains unexpected string terminator"),
                             VAR_3);

  VAR_5 = FUNC_3(&VAR_6, VAR_2->data, VAR_4);
  if (VAR_5)
    return FUNC_2(VAR_5->apr_err, VAR_5,
                             FUNC_0("Commit rejected because mergeinfo on '%s' "
                               "is syntactically invalid"),
                             VAR_3);
  return VAR_1;
}

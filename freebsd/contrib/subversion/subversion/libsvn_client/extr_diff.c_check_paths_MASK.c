
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ kind; } ;
typedef TYPE_1__ svn_opt_revision_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int ,int *,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_boolean_t *VAR_5,
            svn_boolean_t *VAR_6,
            const char *VAR_7,
            const char *VAR_8,
            const svn_opt_revision_t *VAR_9,
            const svn_opt_revision_t *VAR_10,
            const svn_opt_revision_t *VAR_11)
{
  svn_boolean_t VAR_12, VAR_13;


  if ((VAR_9->kind == VAR_3)
      || (VAR_10->kind == VAR_3))
    return FUNC_1(VAR_0, ((void*)0),
                            FUNC_0("Not all required revisions are specified"));



  VAR_12 =
    ((VAR_9->kind == VAR_2)
     || (VAR_9->kind == VAR_4));
  VAR_13 =
    ((VAR_10->kind == VAR_2)
     || (VAR_10->kind == VAR_4));

  if (VAR_11->kind != VAR_3 &&
      VAR_12 && VAR_13)
    return FUNC_1(VAR_0, ((void*)0),
                            FUNC_0("At least one revision must be something other "
                              "than BASE or WORKING when diffing a URL"));





  *VAR_5 = ! VAR_12 || FUNC_2(VAR_7);
  *VAR_6 = ! VAR_13 || FUNC_2(VAR_8);

  return VAR_1;
}

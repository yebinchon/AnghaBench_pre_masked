
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_revnum_t ;
typedef int svn_node_kind_t ;
typedef int svn_error_t ;
struct edit_baton {int txn; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (char const*,int ) ;
 int * FUNC_2 (int ,int *,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static svn_error_t *
FUNC_4(struct edit_baton *VAR_2,
                  const char *VAR_3,
                  svn_node_kind_t VAR_4,
                  svn_revnum_t VAR_5,
                  svn_revnum_t VAR_6)
{
  if (VAR_5 < VAR_6)
    {
      return FUNC_1(VAR_3, VAR_4);
    }
  else if (VAR_5 > VAR_6)
    {
      if (VAR_5 > FUNC_3(VAR_2->txn))
        return FUNC_2(VAR_0, ((void*)0),
                                 FUNC_0("No such revision %ld"),
                                 VAR_5);
    }

  return VAR_1;
}

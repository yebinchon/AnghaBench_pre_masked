
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_revnum_t ;
typedef int svn_error_t ;
struct svnadmin_opt_state {int end_revision; int start_revision; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__*,int *) ;
 int * FUNC_3 (int ,int *,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_revnum_t *VAR_3,
               svn_revnum_t *VAR_4,
               struct svnadmin_opt_state *VAR_5)
{


  FUNC_0(FUNC_2(VAR_3, &VAR_5->start_revision));
  FUNC_0(FUNC_2(VAR_4, &VAR_5->end_revision));


  if ((*VAR_4 == VAR_1) && (*VAR_3 != VAR_1))
    {
      *VAR_4 = *VAR_3;
    }
  else if ((*VAR_4 != VAR_1) && (*VAR_3 == VAR_1))
    {
      *VAR_3 = *VAR_4;
    }


  if (*VAR_3 > *VAR_4)
    {
      return FUNC_3(VAR_0, ((void*)0),
                              FUNC_1("First revision cannot be higher than second"));
    }

  return VAR_2;
}

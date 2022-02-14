
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct TYPE_13__ {int * (* cb_copy ) (int ,char const*,int ,char const*,int ,int ) ;} ;
struct TYPE_14__ {int scratch_pool; int baton; TYPE_1__ funcs; } ;
typedef TYPE_2__ svn_editor_t ;


 int FUNC_0 (TYPE_2__*,char const*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,char const*) ;
 int FUNC_3 (TYPE_2__*,char const*) ;
 int FUNC_4 (TYPE_2__*,char const*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int * VAR_0 ;
 int FUNC_9 (TYPE_2__*,char const*) ;
 int FUNC_10 (TYPE_2__*) ;
 int * FUNC_11 (int ,char const*,int ,char const*,int ,int ) ;
 int * FUNC_12 (int *) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (char const*) ;

svn_error_t *
FUNC_15(svn_editor_t *VAR_1,
                const char *VAR_2,
                svn_revnum_t VAR_3,
                const char *VAR_4,
                svn_revnum_t VAR_5)
{
  svn_error_t *VAR_6 = VAR_0;

  FUNC_8(FUNC_14(VAR_2));
  FUNC_8(FUNC_14(VAR_4));
  FUNC_5(VAR_1);
  FUNC_4(VAR_1, VAR_4);
  FUNC_9(VAR_1, VAR_2);
  FUNC_9(VAR_1, VAR_4);

  FUNC_7(FUNC_10(VAR_1));

  if (VAR_1->funcs.cb_copy)
    {
      FUNC_6(VAR_1);
      VAR_6 = VAR_1->funcs.cb_copy(VAR_1->baton, VAR_2, VAR_3,
                                  VAR_4, VAR_5,
                                  VAR_1->scratch_pool);
      FUNC_1(VAR_1);
    }

  FUNC_2(VAR_1, VAR_4);
  FUNC_3(VAR_1, VAR_4);
  FUNC_0(VAR_1, VAR_4);

  FUNC_13(VAR_1->scratch_pool);
  return FUNC_12(VAR_6);
}

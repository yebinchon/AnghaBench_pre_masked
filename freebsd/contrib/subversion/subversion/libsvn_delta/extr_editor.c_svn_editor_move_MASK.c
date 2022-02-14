
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct TYPE_16__ {int * (* cb_move ) (int ,char const*,int ,char const*,int ,int ) ;} ;
struct TYPE_17__ {int scratch_pool; int baton; TYPE_1__ funcs; } ;
typedef TYPE_2__ svn_editor_t ;


 int FUNC_0 (TYPE_2__*,char const*) ;
 int FUNC_1 (TYPE_2__*,char const*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,char const*) ;
 int FUNC_4 (TYPE_2__*,char const*) ;
 int FUNC_5 (TYPE_2__*,char const*) ;
 int FUNC_6 (TYPE_2__*,char const*) ;
 int FUNC_7 (TYPE_2__*,char const*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int * VAR_0 ;
 int FUNC_12 (TYPE_2__*,char const*) ;
 int FUNC_13 (TYPE_2__*) ;
 int * FUNC_14 (int ,char const*,int ,char const*,int ,int ) ;
 int * FUNC_15 (int *) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (char const*) ;

svn_error_t *
FUNC_18(svn_editor_t *VAR_1,
                const char *VAR_2,
                svn_revnum_t VAR_3,
                const char *VAR_4,
                svn_revnum_t VAR_5)
{
  svn_error_t *VAR_6 = VAR_0;

  FUNC_11(FUNC_17(VAR_2));
  FUNC_11(FUNC_17(VAR_4));
  FUNC_8(VAR_1);
  FUNC_7(VAR_1, VAR_2);
  FUNC_6(VAR_1, VAR_4);
  FUNC_12(VAR_1, VAR_2);
  FUNC_0(VAR_1, VAR_2);
  FUNC_12(VAR_1, VAR_4);

  FUNC_10(FUNC_13(VAR_1));

  if (VAR_1->funcs.cb_move)
    {
      FUNC_9(VAR_1);
      VAR_6 = VAR_1->funcs.cb_move(VAR_1->baton, VAR_2, VAR_3,
                                  VAR_4, VAR_5,
                                  VAR_1->scratch_pool);
      FUNC_2(VAR_1);
    }

  FUNC_3(VAR_1, VAR_2);
  FUNC_5(VAR_1, VAR_2);
  FUNC_4(VAR_1, VAR_4);
  FUNC_5(VAR_1, VAR_4);
  FUNC_1(VAR_1, VAR_4);

  FUNC_16(VAR_1->scratch_pool);
  return FUNC_15(VAR_6);
}

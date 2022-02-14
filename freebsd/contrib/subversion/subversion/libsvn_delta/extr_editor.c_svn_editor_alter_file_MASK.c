
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct TYPE_15__ {int * (* cb_alter_file ) (int ,char const*,int ,TYPE_3__ const*,int *,int *,int ) ;} ;
struct TYPE_16__ {int scratch_pool; int baton; TYPE_1__ funcs; } ;
typedef TYPE_2__ svn_editor_t ;
struct TYPE_17__ {scalar_t__ kind; } ;
typedef TYPE_3__ svn_checksum_t ;
typedef int apr_hash_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,char const*) ;
 int FUNC_2 (TYPE_2__*,char const*) ;
 int FUNC_3 (TYPE_2__*,char const*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int * VAR_1 ;
 int FUNC_8 (TYPE_2__*,char const*) ;
 int FUNC_9 (TYPE_2__*) ;
 int * FUNC_10 (int ,char const*,int ,TYPE_3__ const*,int *,int *,int ) ;
 int * FUNC_11 (int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char const*) ;

svn_error_t *
FUNC_14(svn_editor_t *VAR_2,
                      const char *VAR_3,
                      svn_revnum_t VAR_4,
                      const svn_checksum_t *VAR_5,
                      svn_stream_t *VAR_6,
                      apr_hash_t *VAR_7)
{
  svn_error_t *VAR_8 = VAR_1;

  FUNC_7(FUNC_13(VAR_3));
  FUNC_7((VAR_5 != ((void*)0) && VAR_6 != ((void*)0))
                 || (VAR_5 == ((void*)0) && VAR_6 == ((void*)0)));
  FUNC_7(VAR_7 != ((void*)0) || VAR_5 != ((void*)0));
  if (VAR_5)
    FUNC_7(VAR_5->kind == VAR_0);
  FUNC_4(VAR_2);
  FUNC_3(VAR_2, VAR_3);
  FUNC_8(VAR_2, VAR_3);

  FUNC_6(FUNC_9(VAR_2));

  if (VAR_2->funcs.cb_alter_file)
    {
      FUNC_5(VAR_2);
      VAR_8 = VAR_2->funcs.cb_alter_file(VAR_2->baton,
                                        VAR_3, VAR_4,
                                        VAR_5, VAR_6, VAR_7,
                                        VAR_2->scratch_pool);
      FUNC_0(VAR_2);
    }

  FUNC_1(VAR_2, VAR_3);
  FUNC_2(VAR_2, VAR_3);

  FUNC_12(VAR_2->scratch_pool);
  return FUNC_11(VAR_8);
}

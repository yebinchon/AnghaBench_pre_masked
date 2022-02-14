
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct TYPE_17__ {int * (* cb_add_file ) (int ,char const*,TYPE_3__ const*,int *,int *,int ,int ) ;} ;
struct TYPE_18__ {int scratch_pool; int baton; TYPE_1__ funcs; } ;
typedef TYPE_2__ svn_editor_t ;
struct TYPE_19__ {scalar_t__ kind; } ;
typedef TYPE_3__ svn_checksum_t ;
typedef int apr_hash_t ;


 int FUNC_0 (TYPE_2__*,char const*) ;
 int FUNC_1 (TYPE_2__*,char const*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,char const*) ;
 int FUNC_4 (TYPE_2__*,char const*) ;
 int FUNC_5 (TYPE_2__*,char const*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int) ;
 int * VAR_1 ;
 int FUNC_10 (TYPE_2__*,char const*) ;
 int FUNC_11 (TYPE_2__*) ;
 int * FUNC_12 (int ,char const*,TYPE_3__ const*,int *,int *,int ,int ) ;
 int * FUNC_13 (int *) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (char const*) ;

svn_error_t *
FUNC_16(svn_editor_t *VAR_2,
                    const char *VAR_3,
                    const svn_checksum_t *VAR_4,
                    svn_stream_t *VAR_5,
                    apr_hash_t *VAR_6,
                    svn_revnum_t VAR_7)
{
  svn_error_t *VAR_8 = VAR_1;

  FUNC_9(FUNC_15(VAR_3));
  FUNC_9(VAR_4 != ((void*)0)
                    && VAR_4->kind == VAR_0);
  FUNC_9(VAR_5 != ((void*)0));
  FUNC_9(VAR_6 != ((void*)0));
  FUNC_6(VAR_2);
  FUNC_5(VAR_2, VAR_3);
  FUNC_10(VAR_2, VAR_3);
  FUNC_0(VAR_2, VAR_3);

  FUNC_8(FUNC_11(VAR_2));

  if (VAR_2->funcs.cb_add_file)
    {
      FUNC_7(VAR_2);
      VAR_8 = VAR_2->funcs.cb_add_file(VAR_2->baton, VAR_3,
                                      VAR_4, VAR_5, VAR_6,
                                      VAR_7, VAR_2->scratch_pool);
      FUNC_2(VAR_2);
    }

  FUNC_3(VAR_2, VAR_3);
  FUNC_4(VAR_2, VAR_3);
  FUNC_1(VAR_2, VAR_3);

  FUNC_14(VAR_2->scratch_pool);
  return FUNC_13(VAR_8);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_wcroot_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct op_copy_baton {scalar_t__ is_move; scalar_t__* dst_relpath; int * dst_wcroot; scalar_t__* src_relpath; int * src_wcroot; } ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,scalar_t__*,int,int *,scalar_t__*,int,int,int ,char const*,int ,int,int *) ;
 int FUNC_4 (int*,int *,char const*) ;
 int FUNC_5 (scalar_t__*) ;
 int FUNC_6 (scalar_t__*,int *) ;
 char* FUNC_7 (scalar_t__*,int *) ;
 char* FUNC_8 (char const*,int ,int *) ;
 int FUNC_9 (int *,int *,int *,char const**,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,char const*,int,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_10(svn_wc__db_wcroot_t *VAR_3,
                           struct op_copy_baton *VAR_4,
                           apr_pool_t *VAR_5)
{
  const char *VAR_6;
  const char *VAR_7;
  int VAR_8;
  int VAR_9;
  int VAR_10;
  const char *VAR_11 = ((void*)0);
  apr_int64_t VAR_12 = VAR_0;
  svn_revnum_t VAR_13 = VAR_1;

  if (VAR_3 != VAR_4->dst_wcroot)
    {



      FUNC_2(FUNC_10(VAR_4->dst_wcroot, VAR_4,
                                                     VAR_5),
                          VAR_4->dst_wcroot);

      return VAR_2;
    }





  FUNC_1(*VAR_4->src_relpath && *VAR_4->dst_relpath);

  VAR_6 = FUNC_7(VAR_4->src_relpath, VAR_5);
  VAR_7 = FUNC_7(VAR_4->dst_relpath, VAR_5);


  FUNC_0(FUNC_4(&VAR_8, VAR_4->src_wcroot, VAR_6));


  FUNC_0(FUNC_4(&VAR_9, VAR_4->dst_wcroot, VAR_7));

  VAR_10 = FUNC_5(VAR_4->dst_relpath);


  FUNC_0(FUNC_9(((void*)0), ((void*)0), &VAR_13, &VAR_11,
                                    &VAR_12, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                    ((void*)0), ((void*)0), ((void*)0),
                                    VAR_4->src_wcroot,
                                    VAR_6, VAR_8,
                                    VAR_5, VAR_5));

  if (VAR_11 == ((void*)0))
    {

      return VAR_2;
    }


  VAR_11 = FUNC_8(VAR_11,
                                   FUNC_6(VAR_4->src_relpath,
                                                        ((void*)0)),
                                   VAR_5);

  FUNC_0(FUNC_3(
                        VAR_4->src_wcroot, VAR_4->src_relpath, VAR_8,
                        VAR_4->dst_wcroot, VAR_4->dst_relpath, VAR_9,
                        VAR_10,
                        VAR_12, VAR_11, VAR_13,
                        (VAR_4->is_move ? VAR_9 : 0),
                        VAR_5));

  return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_stringbuf_t ;
typedef scalar_t__ svn_revnum_t ;
typedef int svn_packed__int_stream_t ;
typedef int svn_packed__data_root_t ;
typedef int svn_error_t ;
struct TYPE_3__ {int tag; scalar_t__ start_rev; } ;
typedef TYPE_1__ manifest_entry_t ;
typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (int ,int ) ;
 int * VAR_0 ;
 int * FUNC_1 (int *,int,int) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,scalar_t__) ;
 int FUNC_4 (int **,int *,int *,int *) ;
 int * FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_10(apr_array_header_t **VAR_1,
              svn_stringbuf_t *VAR_2,
              svn_revnum_t VAR_3,
              apr_pool_t *VAR_4,
              apr_pool_t *VAR_5)
{
  apr_size_t VAR_6;
  apr_size_t VAR_7;

  svn_packed__data_root_t *VAR_8;
  svn_packed__int_stream_t *VAR_9;
  svn_packed__int_stream_t *VAR_10;


  FUNC_0(FUNC_4(&VAR_8, VAR_2, VAR_4,
                                         VAR_5),
            FUNC_3(VAR_5,
                         "Revprop manifest file for r%ld is corrupt",
                         VAR_3));


  VAR_9 = FUNC_5(VAR_8);
  VAR_10 = FUNC_9(VAR_9);


  VAR_7 = FUNC_8(VAR_9);
  *VAR_1 = FUNC_1(VAR_4, (int)VAR_7,
                            sizeof(manifest_entry_t));

  for (VAR_6 = 0; VAR_6 < VAR_7; ++VAR_6)
    {
      manifest_entry_t *VAR_11 = FUNC_2(*VAR_1);
      VAR_11->start_rev = (svn_revnum_t)FUNC_6(VAR_9);
      VAR_11->tag = FUNC_7(VAR_10);
    }

  return VAR_0;
}

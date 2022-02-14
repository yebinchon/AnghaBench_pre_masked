
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_fs_t ;
struct TYPE_4__ {int p2l_stream; } ;
typedef TYPE_1__ svn_fs_fs__revision_file_t ;
typedef int svn_fs_fs__p2l_entry_t ;
typedef int svn_error_t ;
typedef scalar_t__ apr_uint64_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_off_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int *,int,int) ;
 int FUNC_3 (TYPE_1__*,int *,int ) ;
 int FUNC_4 (scalar_t__*,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int ,scalar_t__*,int *,scalar_t__*,int *) ;
 int * FUNC_8 (int ,int *,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_9(apr_array_header_t **VAR_2,
             svn_fs_fs__revision_file_t *VAR_3,
             svn_fs_t *VAR_4,
             svn_revnum_t VAR_5,
             apr_off_t VAR_6,
             apr_off_t VAR_7,
             apr_off_t VAR_8,
             apr_uint64_t VAR_9,
             apr_pool_t *VAR_10)
{
  apr_uint64_t VAR_11;
  apr_array_header_t *VAR_12
    = FUNC_2(VAR_10, 16, sizeof(svn_fs_fs__p2l_entry_t));
  apr_off_t VAR_13;
  apr_off_t VAR_14;
  svn_revnum_t VAR_15;
  apr_uint64_t VAR_16;


  FUNC_0(FUNC_3(VAR_3, VAR_4, VAR_5));
  FUNC_6(VAR_3->p2l_stream, VAR_6);



  FUNC_0(FUNC_4(&VAR_11, VAR_3->p2l_stream));
  VAR_13 = (apr_off_t)VAR_11;


  VAR_15 = VAR_5;
  VAR_16 = 0;


  if (VAR_6 == VAR_7)
    {


      FUNC_0(FUNC_7(VAR_3->p2l_stream, &VAR_13,
                         &VAR_15, &VAR_16, VAR_12));
    }
  else
    {

      do
        {
          FUNC_0(FUNC_7(VAR_3->p2l_stream, &VAR_13,
                             &VAR_15, &VAR_16, VAR_12));
          VAR_14 = FUNC_5(VAR_3->p2l_stream);
        }
      while (VAR_14 < VAR_7);



      if (VAR_14 != VAR_7)
        return FUNC_8(VAR_0, ((void*)0),
             FUNC_1("P2L page description overlaps with next page description"));



      if (VAR_13 < VAR_8 + VAR_9)
        {
          FUNC_0(FUNC_4(&VAR_11, VAR_3->p2l_stream));
          VAR_13 = (apr_off_t)VAR_11;
          VAR_15 = VAR_5;
          VAR_16 = 0;
          FUNC_0(FUNC_7(VAR_3->p2l_stream, &VAR_13,
                             &VAR_15, &VAR_16, VAR_12));
        }
    }

  *VAR_2 = VAR_12;

  return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_txdelta_window_t ;
typedef int svn_error_t ;
struct file_baton {int pool; int result_digest; int result_md5_checksum; int apply_baton; int (* apply_handler ) (int *,int ) ;} ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_txdelta_window_t *VAR_1,
               void *VAR_2)
{
  struct file_baton *VAR_3 = VAR_2;

  FUNC_0(VAR_3->apply_handler(VAR_1, VAR_3->apply_baton));

  if (!VAR_1)
    {
      VAR_3->result_md5_checksum = FUNC_2(
                                        VAR_3->result_digest,
                                        VAR_3->pool);
    }

  return VAR_0;
}

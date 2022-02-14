
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct checksum_stream_baton {int proxy; int pool; scalar_t__ write_ctx; int write_checksum; scalar_t__ read_ctx; int read_checksum; scalar_t__ read_more; } ;
typedef int apr_size_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 char* FUNC_1 (int ,int ) ;
 int FUNC_2 (void*,char*,int *) ;
 int FUNC_3 (int ,scalar_t__,int ) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static svn_error_t *
FUNC_6(void *VAR_1)
{
  struct checksum_stream_baton *VAR_2 = VAR_1;



  if (VAR_2->read_more)
    {
      char *VAR_3 = FUNC_1(VAR_2->pool, VAR_0);
      apr_size_t VAR_4 = VAR_0;

      do
        {
          FUNC_0(FUNC_2(VAR_1, VAR_3, &VAR_4));
        }
      while (VAR_2->read_more);
    }

  if (VAR_2->read_ctx)
    FUNC_0(FUNC_3(VAR_2->read_checksum, VAR_2->read_ctx, VAR_2->pool));

  if (VAR_2->write_ctx)
    FUNC_0(FUNC_3(VAR_2->write_checksum, VAR_2->write_ctx, VAR_2->pool));

  return FUNC_4(FUNC_5(VAR_2->proxy));
}

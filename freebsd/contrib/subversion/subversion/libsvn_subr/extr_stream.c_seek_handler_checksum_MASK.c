
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_mark_t ;
typedef int svn_error_t ;
struct checksum_stream_baton {int proxy; scalar_t__ write_ctx; scalar_t__ read_ctx; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int * FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static svn_error_t *
FUNC_4(void *VAR_2, const svn_stream_mark_t *VAR_3)
{
  struct checksum_stream_baton *VAR_4 = VAR_2;


  if (VAR_3)
    {
      return FUNC_2(VAR_0,
                              ((void*)0), ((void*)0));
    }
  else
    {
      if (VAR_4->read_ctx)
        FUNC_1(VAR_4->read_ctx);

      if (VAR_4->write_ctx)
        FUNC_1(VAR_4->write_ctx);

      FUNC_0(FUNC_3(VAR_4->proxy));
    }

  return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int z_stream ;
typedef void* uInt ;
typedef int svn_error_t ;
struct zbaton {int substream; TYPE_1__* out; int * pool; } ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
struct TYPE_3__ {scalar_t__ avail_in; int avail_out; int msg; void* next_out; int * next_in; int * opaque; int zfree; int zalloc; } ;
typedef int Bytef ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (int,char*,int ) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,void*,int*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static svn_error_t *
FUNC_8(void *VAR_5, const char *VAR_6, apr_size_t *VAR_7)
{
  struct zbaton *VAR_8 = VAR_5;
  apr_pool_t *VAR_9;
  void *VAR_10;
  apr_size_t VAR_11, VAR_12;
  int VAR_13;

  if (VAR_8->out == ((void*)0))
    {
      VAR_8->out = FUNC_1(VAR_8->pool, sizeof(z_stream));
      VAR_8->out->zalloc = VAR_3;
      VAR_8->out->zfree = VAR_4;
      VAR_8->out->opaque = VAR_8->pool;

      VAR_13 = FUNC_3(VAR_8->out, VAR_1);
      FUNC_0(FUNC_4(VAR_13, "deflateInit", VAR_8->out->msg));
    }



  VAR_11 = *VAR_7 + (*VAR_7 / 1000) + 13;
  VAR_9 = FUNC_5(VAR_8->pool);
  VAR_10 = FUNC_1(VAR_9, VAR_11);

  VAR_8->out->next_in = (Bytef *) VAR_6;
  VAR_8->out->avail_in = (uInt) *VAR_7;

  while (VAR_8->out->avail_in > 0)
    {
      VAR_8->out->next_out = VAR_10;
      VAR_8->out->avail_out = (uInt) VAR_11;

      VAR_13 = FUNC_2(VAR_8->out, VAR_2);
      FUNC_0(FUNC_4(VAR_13, "deflate", VAR_8->out->msg));
      VAR_12 = VAR_11 - VAR_8->out->avail_out;
      if (VAR_12 > 0)
        FUNC_0(FUNC_7(VAR_8->substream, VAR_10, &VAR_12));
    }

  FUNC_6(VAR_9);

  return VAR_0;
}

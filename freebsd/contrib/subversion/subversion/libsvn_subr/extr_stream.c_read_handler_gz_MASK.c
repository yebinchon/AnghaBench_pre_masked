
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int z_stream ;
typedef scalar_t__ uInt ;
typedef int svn_error_t ;
struct zbaton {TYPE_1__* in; int read_flush; void* read_buffer; int substream; int pool; } ;
typedef scalar_t__ apr_size_t ;
struct TYPE_3__ {int avail_in; scalar_t__ avail_out; int msg; void* next_in; int * next_out; int opaque; int zfree; int zalloc; } ;
typedef int Bytef ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,void*,int*,int *) ;
 int FUNC_5 (int,char*,int ) ;
 int * FUNC_6 (int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static svn_error_t *
FUNC_7(void *VAR_6, char *VAR_7, apr_size_t *VAR_8)
{
  struct zbaton *VAR_9 = VAR_6;
  int VAR_10;

  if (VAR_9->in == ((void*)0))
    {
      VAR_9->in = FUNC_1(VAR_9->pool, sizeof(z_stream));
      VAR_9->in->zalloc = VAR_4;
      VAR_9->in->zfree = VAR_5;
      VAR_9->in->opaque = VAR_9->pool;
      VAR_9->read_buffer = FUNC_1(VAR_9->pool, VAR_1);
      VAR_9->in->next_in = VAR_9->read_buffer;
      VAR_9->in->avail_in = VAR_1;

      FUNC_0(FUNC_4(VAR_9->substream, VAR_9->read_buffer,
                             &VAR_9->in->avail_in, &VAR_9->read_flush));

      VAR_10 = FUNC_3(VAR_9->in);
      FUNC_0(FUNC_5(VAR_10, "inflateInit", VAR_9->in->msg));
    }

  VAR_9->in->next_out = (Bytef *) VAR_7;
  VAR_9->in->avail_out = (uInt) *VAR_8;

  while (VAR_9->in->avail_out > 0)
    {
      if (VAR_9->in->avail_in <= 0)
        {
          VAR_9->in->avail_in = VAR_1;
          VAR_9->in->next_in = VAR_9->read_buffer;
          FUNC_0(FUNC_4(VAR_9->substream, VAR_9->read_buffer,
                                 &VAR_9->in->avail_in, &VAR_9->read_flush));
        }


      if (VAR_9->in->avail_in == 0)
        {
          *VAR_8 = 0;
          return VAR_0;
        }

      VAR_10 = FUNC_2(VAR_9->in, VAR_9->read_flush);
      if (VAR_10 == VAR_3)
        break;
      else if (VAR_10 != VAR_2)
        return FUNC_6(FUNC_5(VAR_10, "inflate",
                                                    VAR_9->in->msg));
    }

  *VAR_8 -= VAR_9->in->avail_out;
  return VAR_0;
}

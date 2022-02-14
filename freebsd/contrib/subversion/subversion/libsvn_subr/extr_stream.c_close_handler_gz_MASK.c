
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
struct zbaton {int substream; TYPE_2__* out; int pool; TYPE_1__* in; } ;
typedef scalar_t__ apr_size_t ;
struct TYPE_5__ {scalar_t__ avail_out; int msg; void* next_out; } ;
struct TYPE_4__ {int msg; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int,char*,int ) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,void*,scalar_t__*) ;

__attribute__((used)) static svn_error_t *
FUNC_9(void *VAR_5)
{
  struct zbaton *VAR_6 = VAR_5;
  int VAR_7;

  if (VAR_6->in != ((void*)0))
    {
      VAR_7 = FUNC_4(VAR_6->in);
      FUNC_0(FUNC_5(VAR_7, "inflateEnd", VAR_6->in->msg));
    }

  if (VAR_6->out != ((void*)0))
    {
      void *VAR_8;
      apr_size_t VAR_9;

      VAR_8 = FUNC_1(VAR_6->pool, VAR_1);

      while (VAR_0)
        {
          VAR_6->out->next_out = VAR_8;
          VAR_6->out->avail_out = VAR_1;

          VAR_7 = FUNC_2(VAR_6->out, VAR_2);
          if (VAR_7 != VAR_4 && VAR_7 != VAR_3)
            return FUNC_6(FUNC_5(VAR_7, "deflate",
                                                        VAR_6->out->msg));
          VAR_9 = VAR_1 - VAR_6->out->avail_out;
          if (VAR_9 > 0)
            FUNC_0(FUNC_8(VAR_6->substream, VAR_8, &VAR_9));
          if (VAR_7 == VAR_4)
            break;
        }

      VAR_7 = FUNC_3(VAR_6->out);
      FUNC_0(FUNC_5(VAR_7, "deflateEnd", VAR_6->out->msg));
    }

  return FUNC_6(FUNC_7(VAR_6->substream));
}

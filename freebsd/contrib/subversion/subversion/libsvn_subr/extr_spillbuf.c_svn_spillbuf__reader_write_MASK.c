
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ sb_len; scalar_t__ save_len; TYPE_2__* buf; scalar_t__ save_pos; int sb_ptr; int * save_ptr; } ;
typedef TYPE_1__ svn_spillbuf_reader_t ;
typedef int svn_error_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
struct TYPE_5__ {int blocksize; int pool; } ;


 int * FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ,scalar_t__) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,char const*,int ,int *) ;

svn_error_t *
FUNC_4(svn_spillbuf_reader_t *VAR_0,
                           const char *VAR_1,
                           apr_size_t VAR_2,
                           apr_pool_t *VAR_3)
{


  if (VAR_0->sb_len > 0)
    {
      if (VAR_0->save_ptr == ((void*)0))
        VAR_0->save_ptr = FUNC_0(VAR_0->buf->pool,
                                      VAR_0->buf->blocksize);

      FUNC_1(VAR_0->save_ptr, VAR_0->sb_ptr, VAR_0->sb_len);
      VAR_0->save_len = VAR_0->sb_len;
      VAR_0->save_pos = 0;


      VAR_0->sb_len = 0;
    }

  return FUNC_2(FUNC_3(VAR_0->buf, VAR_1, VAR_2,
                                             VAR_3));
}

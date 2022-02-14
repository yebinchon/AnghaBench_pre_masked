
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ save_len; scalar_t__ save_ptr; scalar_t__ save_pos; scalar_t__ sb_len; scalar_t__ sb_ptr; int buf; } ;
typedef TYPE_1__ svn_spillbuf_reader_t ;
typedef int svn_error_t ;
typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*,scalar_t__,scalar_t__) ;
 int * FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (int **,scalar_t__*,int ,int *) ;

svn_error_t *
FUNC_4(apr_size_t *VAR_2,
                          svn_spillbuf_reader_t *VAR_3,
                          char *VAR_4,
                          apr_size_t VAR_5,
                          apr_pool_t *VAR_6)
{
  if (VAR_5 == 0)
    return FUNC_2(VAR_0, ((void*)0), ((void*)0));

  *VAR_2 = 0;

  while (VAR_5 > 0)
    {
      apr_size_t VAR_7;

      if (VAR_3->save_len > 0)
        {


          if (VAR_5 < VAR_3->save_len)
            VAR_7 = VAR_5;
          else
            VAR_7 = VAR_3->save_len;

          FUNC_1(VAR_4, VAR_3->save_ptr + VAR_3->save_pos, VAR_7);
          VAR_3->save_pos += VAR_7;
          VAR_3->save_len -= VAR_7;
        }
      else
        {




          if (VAR_3->sb_len == 0)
            {
              FUNC_0(FUNC_3(&VAR_3->sb_ptr, &VAR_3->sb_len,
                                         VAR_3->buf,
                                         VAR_6));



              if (VAR_3->sb_ptr == ((void*)0))
                {


                  VAR_3->sb_len = 0;
                  return VAR_1;
                }
            }

          if (VAR_5 < VAR_3->sb_len)
            VAR_7 = VAR_5;
          else
            VAR_7 = VAR_3->sb_len;

          FUNC_1(VAR_4, VAR_3->sb_ptr, VAR_7);
          VAR_3->sb_ptr += VAR_7;
          VAR_3->sb_len -= VAR_7;
        }

      VAR_4 += VAR_7;
      VAR_5 -= VAR_7;
      (*VAR_2) += VAR_7;
    }

  return VAR_1;
}

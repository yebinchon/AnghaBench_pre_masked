
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ svn_filesize_t ;
typedef int svn_error_t ;
struct TYPE_3__ {int revision; } ;
struct rep_read_baton {int off; int md5_checksum_ctx; int pool; TYPE_2__* current_fulltext; int filehandle_pool; int len; TYPE_1__ fulltext_cache_key; } ;
typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;
struct TYPE_4__ {scalar_t__ len; char* data; } ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_4 (int *,scalar_t__) ;
 int * FUNC_5 (struct rep_read_baton*,char*,scalar_t__*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,char*,scalar_t__) ;
 int * FUNC_8 (int *) ;
 int * FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 TYPE_2__* FUNC_11 (int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_12(struct rep_read_baton *VAR_2,
              svn_filesize_t VAR_3)
{
  svn_error_t *VAR_4 = VAR_0;


  if (FUNC_3(VAR_2->fulltext_cache_key.revision))
    {
      char *VAR_5;
      svn_filesize_t VAR_6 = FUNC_0(VAR_3, VAR_2->len);



      FUNC_2((apr_size_t)VAR_6 == VAR_6);


      VAR_2->current_fulltext = FUNC_11(
                        FUNC_6((apr_size_t)VAR_6),
                        VAR_2->filehandle_pool);



      VAR_2->current_fulltext->len = (apr_size_t)VAR_3;
      VAR_2->current_fulltext->data[(apr_size_t)VAR_3] = 0;

      VAR_5 = VAR_2->current_fulltext->data;
      while (VAR_3 > 0 && !VAR_4)
        {
          apr_size_t VAR_7 = (apr_size_t)VAR_3;
          VAR_4 = FUNC_5(VAR_2, VAR_5, &VAR_7);
          VAR_3 -= VAR_7;
          VAR_5 += VAR_7;
        }



      if (!VAR_4)
        {
          FUNC_1(FUNC_7(VAR_2->md5_checksum_ctx,
                                      VAR_2->current_fulltext->data,
                                      VAR_2->current_fulltext->len));
          VAR_2->off += VAR_2->current_fulltext->len;
        }
    }
  else if (VAR_3 > 0)
    {

      apr_pool_t *VAR_8 = FUNC_9(VAR_2->pool);
      char *VAR_9 = FUNC_4(VAR_8, VAR_1);

      while (VAR_3 > 0 && !VAR_4)
        {
          apr_size_t VAR_10 = VAR_3 > VAR_1
                            ? VAR_1
                            : (apr_size_t)VAR_3;

          VAR_4 = FUNC_5(VAR_2, VAR_9, &VAR_10);
          VAR_3 -= VAR_10;



          if (!VAR_4)
            {
              FUNC_1(FUNC_7(VAR_2->md5_checksum_ctx,
                                          VAR_9, VAR_10));
              VAR_2->off += VAR_10;
            }
        }

      FUNC_10(VAR_8);
    }

  return FUNC_8(VAR_4);
}

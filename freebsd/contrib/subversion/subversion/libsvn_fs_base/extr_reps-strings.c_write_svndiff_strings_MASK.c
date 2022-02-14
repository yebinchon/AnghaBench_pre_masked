
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
struct write_svndiff_strings_baton {int header_read; char version; int size; int * key; TYPE_1__* trail; int fs; } ;
typedef int apr_size_t ;
struct TYPE_2__ {int pool; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int ,int **,int,char const*,TYPE_1__*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_4(void *VAR_2, const char *VAR_3, apr_size_t *VAR_4)
{
  struct write_svndiff_strings_baton *VAR_5 = VAR_2;
  const char *VAR_6 = VAR_3;
  apr_size_t VAR_7 = 0;






  if (VAR_5->header_read < 4)
    {
      VAR_7 = 4 - VAR_5->header_read;
      *VAR_4 -= VAR_7;
      VAR_6 += VAR_7;
      VAR_5->header_read += VAR_7;



      if (VAR_5->header_read == 4)
        VAR_5->version = *(VAR_6 - 1);
    }



  FUNC_0(FUNC_3(VAR_5->fs, &(VAR_5->key), *VAR_4,
                                    VAR_6, VAR_5->trail, VAR_5->trail->pool));


  if (VAR_5->key == ((void*)0))
    return FUNC_2(VAR_0, ((void*)0),
                            FUNC_1("Failed to get new string key"));



  *VAR_4 += VAR_7;


  VAR_5->size += *VAR_4;

  return VAR_1;
}

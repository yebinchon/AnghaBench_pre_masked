
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef void* u_int32_t ;
typedef int trail_t ;
typedef int svn_fs_t ;
typedef scalar_t__ svn_filesize_t ;
typedef int svn_error_t ;
typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;
struct TYPE_8__ {char* data; int flags; scalar_t__ size; void* ulen; void* dlen; void* doff; } ;
typedef TYPE_1__ DBT ;
typedef int DBC ;


 int * FUNC_0 (int *,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int * VAR_4 ;
 int FUNC_3 (scalar_t__*,int *,TYPE_1__*) ;
 int * FUNC_4 (scalar_t__*,int **,TYPE_1__*,int *,int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,TYPE_1__*,TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,char const*) ;

svn_error_t *
FUNC_9(svn_fs_t *VAR_5,
                        const char *VAR_6,
                        char *VAR_7,
                        svn_filesize_t VAR_8,
                        apr_size_t *VAR_9,
                        trail_t *VAR_10,
                        apr_pool_t *VAR_11)
{
  int VAR_12;
  DBT VAR_13, VAR_14;
  DBC *VAR_15;
  apr_size_t VAR_16, VAR_17 = 0;

  FUNC_8(&VAR_13, VAR_6);

  FUNC_2(FUNC_4(&VAR_16, &VAR_15, &VAR_13, VAR_5, VAR_10, VAR_11));




  while (VAR_16 <= VAR_8)
    {
      VAR_8 -= VAR_16;



      VAR_12 = FUNC_3(&VAR_16, VAR_15, &VAR_13);


      if (VAR_12 == VAR_3)
        {
          *VAR_9 = 0;
          return VAR_4;
        }
      if (VAR_12)
        return FUNC_0(VAR_5, FUNC_1("reading string"), VAR_12);
    }





  while (1)
    {
      FUNC_7(&VAR_14);
      VAR_14.data = VAR_7 + VAR_17;
      VAR_14.ulen = (u_int32_t)(*VAR_9 - VAR_17);
      VAR_14.doff = (u_int32_t)VAR_8;
      VAR_14.dlen = VAR_14.ulen;
      VAR_14.flags |= (VAR_2 | VAR_1);
      VAR_12 = FUNC_6(VAR_15, &VAR_13, &VAR_14, VAR_0);
      if (VAR_12)
        {
          FUNC_5(VAR_15);
          return FUNC_0(VAR_5, FUNC_1("reading string"), VAR_12);
        }

      VAR_17 += VAR_14.size;
      if (VAR_17 == *VAR_9)
        {

          FUNC_2(FUNC_0(VAR_5, FUNC_1("closing string-reading cursor"),
                           FUNC_5(VAR_15)));
          break;
        }



      VAR_12 = FUNC_3(&VAR_16, VAR_15, &VAR_13);
      if (VAR_12 == VAR_3)
        break;
      if (VAR_12)
        return FUNC_0(VAR_5, FUNC_1("reading string"), VAR_12);


      VAR_8 = 0;
    }

  *VAR_9 = VAR_17;
  return VAR_4;
}

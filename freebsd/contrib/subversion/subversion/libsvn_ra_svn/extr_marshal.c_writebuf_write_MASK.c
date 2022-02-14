
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int write_pos; scalar_t__ write_buf; } ;
typedef TYPE_1__ svn_ra_svn_conn_t ;
typedef int svn_error_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (scalar_t__,char const*,int) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int * FUNC_3 (TYPE_1__*,int *,char const*,int) ;

__attribute__((used)) static svn_error_t *FUNC_4(svn_ra_svn_conn_t *VAR_1, apr_pool_t *VAR_2,
                                   const char *VAR_3, apr_size_t VAR_4)
{

  if (VAR_4 >= sizeof(VAR_1->write_buf) / 2)
    {
      if (VAR_1->write_pos > 0)
        FUNC_0(FUNC_2(VAR_1, VAR_2));

      return FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4);
    }


  if (VAR_1->write_pos + VAR_4 > sizeof(VAR_1->write_buf))
    FUNC_0(FUNC_2(VAR_1, VAR_2));


  FUNC_1(VAR_1->write_buf + VAR_1->write_pos, VAR_3, VAR_4);
  VAR_1->write_pos += VAR_4;

  return VAR_0;
}

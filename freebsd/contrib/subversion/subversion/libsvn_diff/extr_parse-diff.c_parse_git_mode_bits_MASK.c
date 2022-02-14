
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_tristate_t ;
typedef int svn_error_t ;
typedef int apr_uint64_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int*,char const*,int ,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static svn_error_t *
FUNC_2(svn_tristate_t *VAR_4,
                    svn_tristate_t *VAR_5,
                    const char *VAR_6)
{
  apr_uint64_t VAR_7;
  FUNC_0(FUNC_1(&VAR_7, VAR_6,
                                0 ,
                                0777777 ,
                                010 ));
  switch (VAR_7 & 0777)
    {
      case 0644:
        *VAR_4 = VAR_1;
        break;

      case 0755:
        *VAR_4 = VAR_2;
        break;

      default:

        *VAR_4 = VAR_3;
        break;
    }

  switch (VAR_7 & 0170000 )
    {
      case 0120000:
        *VAR_5 = VAR_2;
        break;

      case 0100000:
      case 0040000:
        *VAR_5 = VAR_1;
        break;

      default:


        *VAR_5 = VAR_3;
        break;
    }

  return VAR_0;
}

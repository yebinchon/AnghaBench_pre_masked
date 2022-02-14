
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_spillbuf_reader_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_2 (int ,int *,int ,char,char const*) ;
 int FUNC_3 (char*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_depth_t *VAR_6, svn_spillbuf_reader_t *VAR_7, const char *VAR_8,
           apr_pool_t *VAR_9)
{
  char VAR_10;

  FUNC_0(FUNC_3(&VAR_10, VAR_7, VAR_9));
  switch (VAR_10)
    {
    case 'X':
      *VAR_6 = VAR_3;
      break;
    case 'E':
      *VAR_6 = VAR_2;
      break;
    case 'F':
      *VAR_6 = VAR_4;
      break;
    case 'M':
      *VAR_6 = VAR_5;
      break;




    default:
      return FUNC_2(VAR_0, ((void*)0),
                               FUNC_1("Invalid depth (%c) for path '%s'"), VAR_10, VAR_8);
    }

  return VAR_1;
}

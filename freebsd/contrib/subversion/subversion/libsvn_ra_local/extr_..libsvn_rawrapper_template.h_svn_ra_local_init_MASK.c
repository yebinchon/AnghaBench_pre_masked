
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_ra__vtable_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_2__ {char** (* get_schemes ) (int *) ;int (* get_version ) () ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int const**,int *) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,char const* const,int ,int *) ;
 int VAR_6 ;
 int FUNC_4 () ;
 char** FUNC_5 (int *) ;
 int * FUNC_6 (int ,int *,int ,int,int ) ;

svn_error_t *
FUNC_7(int VAR_7,
                apr_pool_t *VAR_8,
                apr_hash_t *VAR_9)
{
  const svn_ra__vtable_t *VAR_10;
  const char * const * VAR_11;

  if (VAR_7 < 1
      || VAR_7 > VAR_4)
    return FUNC_6(VAR_2, ((void*)0),
                             FUNC_2("Unsupported RA plugin ABI version (%d) "
                               "for %s"), VAR_7, VAR_1);




  FUNC_1(FUNC_0(VAR_5.get_version(), &VAR_10, VAR_8));

  VAR_11 = VAR_5.get_schemes(VAR_8);

  for (; *VAR_11 != ((void*)0); ++VAR_11)
    FUNC_3(VAR_9, *VAR_11, VAR_0, &VAR_6);

  return VAR_3;
}

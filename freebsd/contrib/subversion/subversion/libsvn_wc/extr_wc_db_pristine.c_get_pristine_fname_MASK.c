
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_4__ {scalar_t__ kind; } ;
typedef TYPE_1__ svn_checksum_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 char const* VAR_1 ;
 int FUNC_0 (int) ;
 int * VAR_2 ;
 int VAR_3 ;
 char* FUNC_1 (int *,char const*,int ,int ) ;
 scalar_t__ VAR_4 ;
 char* FUNC_2 (TYPE_1__ const*,int *) ;
 int FUNC_3 (char const*) ;
 char* FUNC_4 (int *,char const*,char*,char const*,int ) ;
 char* FUNC_5 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(const char **VAR_5,
                   const char *VAR_6,
                   const svn_checksum_t *VAR_7,
                   apr_pool_t *VAR_8,
                   apr_pool_t *VAR_9)
{
  const char *VAR_10;
  const char *VAR_11 = FUNC_2(VAR_7, VAR_9);
  char VAR_12[3];


  FUNC_0(VAR_5 != ((void*)0));
  FUNC_0(FUNC_3(VAR_6));
  FUNC_0(VAR_7 != ((void*)0));
  FUNC_0(VAR_7->kind == VAR_4);

  VAR_10 = FUNC_4(VAR_9,
                                          VAR_6,
                                          FUNC_5(VAR_9),
                                          VAR_1,
                                          VAR_3);


  FUNC_0(VAR_11 != ((void*)0));


  VAR_12[0] = VAR_11[0];
  VAR_12[1] = VAR_11[1];
  VAR_12[2] = '\0';

  VAR_11 = FUNC_1(VAR_9, VAR_11, VAR_0,
                          VAR_3);


  *VAR_5 = FUNC_4(VAR_8,
                                           VAR_10,
                                           VAR_12,
                                           VAR_11,
                                           VAR_3);
  return VAR_2;
}

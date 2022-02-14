
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef size_t apr_size_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*,unsigned char) ;
 char* FUNC_2 (int *,char const*,int ,int ) ;
 int * FUNC_3 (int ,int *,int ,char const*,char const*) ;
 char* FUNC_4 (char const*,size_t) ;

__attribute__((used)) static svn_error_t *
FUNC_5(const char *VAR_2, apr_size_t VAR_3, apr_pool_t *VAR_4)
{
  const char *VAR_5 = FUNC_4(VAR_2, VAR_3);
  const char *VAR_6 = "", *VAR_7 = "";
  apr_size_t VAR_8;
  size_t VAR_9, VAR_10;



  VAR_9 = VAR_5 - VAR_2;
  if (VAR_9 > 24)
    VAR_9 = 24;
  for (VAR_8 = 0; VAR_8 < VAR_9; ++VAR_8)
    VAR_6 = FUNC_2(VAR_4, VAR_6,
                            FUNC_1(VAR_4, " %02x",
                                         (unsigned char)VAR_5[VAR_8-VAR_9]),
                                         VAR_1);


  VAR_10 = VAR_2 + VAR_3 - VAR_5;
  if (VAR_10 > 4)
    VAR_10 = 4;
  for (VAR_8 = 0; VAR_8 < VAR_10; ++VAR_8)
    VAR_7 = FUNC_2(VAR_4, VAR_7,
                              FUNC_1(VAR_4, " %02x",
                                           (unsigned char)VAR_5[VAR_8]),
                                           VAR_1);

  return FUNC_3(VAR_0, ((void*)0),
                           FUNC_0("Valid UTF-8 data\n(hex:%s)\n"
                             "followed by invalid UTF-8 sequence\n(hex:%s)"),
                           VAR_6, VAR_7);
}

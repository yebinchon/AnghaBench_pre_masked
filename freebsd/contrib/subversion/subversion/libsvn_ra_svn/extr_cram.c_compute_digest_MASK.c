
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int secret ;
typedef int apr_size_t ;
typedef int apr_md5_ctx_t ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,char const*,int) ;
 int FUNC_1 (unsigned char*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,...) ;
 int FUNC_4 (unsigned char*,char const*,int) ;
 int FUNC_5 (unsigned char*,int ,int) ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static void FUNC_7(unsigned char *VAR_1, const char *VAR_2,
                           const char *VAR_3)
{
  unsigned char VAR_4[64];
  apr_size_t VAR_5 = FUNC_6(VAR_3), VAR_6;
  apr_md5_ctx_t VAR_7;


  FUNC_5(VAR_4, 0, sizeof(VAR_4));
  if (VAR_5 <= sizeof(VAR_4))
    FUNC_4(VAR_4, VAR_3, VAR_5);
  else
    FUNC_0(VAR_4, VAR_3, VAR_5);



  for (VAR_6 = 0; VAR_6 < sizeof(VAR_4); VAR_6++)
    VAR_4[VAR_6] ^= 0x36;
  FUNC_2(&VAR_7);
  FUNC_3(&VAR_7, VAR_4, sizeof(VAR_4));
  FUNC_3(&VAR_7, VAR_2, FUNC_6(VAR_2));
  FUNC_1(VAR_1, &VAR_7);
  for (VAR_6 = 0; VAR_6 < sizeof(VAR_4); VAR_6++)
    VAR_4[VAR_6] ^= (0x36 ^ 0x5c);
  FUNC_2(&VAR_7);
  FUNC_3(&VAR_7, VAR_4, sizeof(VAR_4));
  FUNC_3(&VAR_7, VAR_1, VAR_0);
  FUNC_1(VAR_1, &VAR_7);
}

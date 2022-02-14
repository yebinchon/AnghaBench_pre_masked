
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
typedef int skip_buf ;
typedef int EVP_CIPHER_CTX ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,size_t) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int *,int *,unsigned char const*,int *,int) ;
 scalar_t__ FUNC_5 (int *,unsigned char*,int*,unsigned char*,size_t) ;
 int * FUNC_6 () ;

int FUNC_7(const u8 *VAR_0, size_t VAR_1, size_t VAR_2,
      u8 *VAR_3, size_t VAR_4)
{



 EVP_CIPHER_CTX *VAR_5;
 int VAR_6;
 int VAR_7 = -1;
 unsigned char VAR_8[16];

 VAR_5 = FUNC_1();
 if (!VAR_5 ||
     !FUNC_3(VAR_5, 0) ||
     !FUNC_4(VAR_5, FUNC_6(), ((void*)0), ((void*)0), ((void*)0), 1) ||
     !FUNC_2(VAR_5, VAR_1) ||
     !FUNC_4(VAR_5, ((void*)0), ((void*)0), VAR_0, ((void*)0), 1))
  goto out;

 while (VAR_2 >= sizeof(VAR_8)) {
  size_t VAR_9 = VAR_2;
  if (VAR_9 > sizeof(VAR_8))
   VAR_9 = sizeof(VAR_8);
  if (!FUNC_5(VAR_5, VAR_8, &VAR_6, VAR_8, VAR_9))
   goto out;
  VAR_2 -= VAR_9;
 }

 if (FUNC_5(VAR_5, VAR_3, &VAR_6, VAR_3, VAR_4))
  VAR_7 = 0;

out:
 if (VAR_5)
  FUNC_0(VAR_5);
 return VAR_7;

}

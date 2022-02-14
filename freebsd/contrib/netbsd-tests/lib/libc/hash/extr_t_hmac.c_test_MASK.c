
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int tmp2 ;
typedef int tmp1 ;
typedef int key ;
typedef int data ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*,char const*,size_t,size_t) ;
 int VAR_0 ;
 void const* FUNC_2 () ;
 void const* FUNC_3 () ;
 void const* FUNC_4 () ;
 void const* FUNC_5 () ;
 void const* FUNC_6 () ;
 void const* FUNC_7 () ;
 void const* FUNC_8 () ;
 void const* FUNC_9 () ;
 void const* FUNC_10 () ;
 void* FUNC_11 (void const*,size_t*,size_t,size_t*,size_t,size_t*,unsigned int*) ;
 size_t FUNC_12 (char const**) ;
 size_t FUNC_13 (char const*,size_t*,size_t,size_t*,size_t,size_t*,int) ;
 int FUNC_14 (size_t*,int ,int) ;
 int FUNC_15 (char*,...) ;

__attribute__((used)) static void
FUNC_16(void)
{
 uint8_t VAR_1[VAR_0];
 uint8_t VAR_2[VAR_0];
 uint8_t VAR_3[256];
 uint8_t VAR_4[4096];
 unsigned int VAR_5;
 size_t VAR_6;
 int VAR_7;
 void *VAR_8;
 const void *VAR_9[] = {
  FUNC_2(),
  FUNC_3(),
  FUNC_4(),
  FUNC_5(),
  FUNC_6(),
  FUNC_7(),
  FUNC_8(),
  FUNC_9(),
  FUNC_10(),
 };
 const char *VAR_10[] = {
  "md2",
  "md4",
  "md5",
  "rmd160",
  "sha1",
  "sha224",
  "sha256",
  "sha384",
  "sha512",
 };

 for (size_t VAR_11 = 0; VAR_11 < sizeof(VAR_3); VAR_11++)
  VAR_3[VAR_11] = VAR_11;
 for (size_t VAR_12 = 0; VAR_12 < sizeof(VAR_4); VAR_12++)
  VAR_4[VAR_12] = VAR_12 % 256;

 for (size_t VAR_13 = 0; VAR_13 < FUNC_12(VAR_10); VAR_13++)
     for (size_t VAR_14 = 1; VAR_14 < sizeof(VAR_3); VAR_14 += 9)
  for (size_t VAR_15 = 3; VAR_15 < sizeof(VAR_4); VAR_15 += 111) {
   VAR_7 = 0;




   FUNC_14(VAR_1, 0, sizeof(VAR_1));
   FUNC_14(VAR_2, 0, sizeof(VAR_2));
   VAR_8 = FUNC_11(VAR_9[VAR_13], VAR_3, VAR_14, VAR_4, VAR_15, VAR_1, &VAR_5);
   FUNC_0(VAR_8 != ((void*)0));
   VAR_6 = FUNC_13(VAR_10[VAR_13], VAR_3, VAR_14, VAR_4, VAR_15, VAR_2,
       sizeof(VAR_2));
   FUNC_1(VAR_5 == VAR_6, "hash %s len %u "
       "!= %zu", VAR_10[VAR_13], VAR_5, VAR_6);
   for (size_t VAR_16 = 0; VAR_16 < VAR_6; VAR_16++)
    if (VAR_1[VAR_16] != VAR_2[VAR_16]) {




     VAR_7 = 1;
     break;
    }
   FUNC_1(!VAR_7, "hash %s failed for "
    "keylen=%zu, datalen=%zu", VAR_10[VAR_13], VAR_14, VAR_15);
  }
}

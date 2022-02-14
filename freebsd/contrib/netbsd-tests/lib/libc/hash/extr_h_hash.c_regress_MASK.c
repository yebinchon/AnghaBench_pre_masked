
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int SHA1_CTX ;
typedef int MD5_CTX ;


 int FUNC_0 (unsigned char*,int,int) ;
 int FUNC_1 (unsigned char*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned char*,int) ;
 int FUNC_4 (unsigned char*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned char*,int) ;
 int * FUNC_7 (char*,int,int ) ;
 int FUNC_8 (unsigned char*,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void
FUNC_10(void)
{
 unsigned char VAR_2[1024];
 unsigned char VAR_3[20];
 int VAR_4, VAR_5, VAR_6;

 while (FUNC_7((char *)VAR_2, sizeof(VAR_2), VAR_1) != ((void*)0)) {
  VAR_6 = 0;

  VAR_4 = FUNC_9((char *)VAR_2);
  FUNC_0(VAR_2, VAR_4, VAR_6);
  if (VAR_0) {
   MD5_CTX VAR_7;

   FUNC_2(&VAR_7);
   FUNC_3(&VAR_7, VAR_2, VAR_4);
   while (!VAR_6 &&
       FUNC_7((char *)VAR_2, sizeof(VAR_2), VAR_1) != ((void*)0)) {
    VAR_4 = FUNC_9((char *)VAR_2);
    FUNC_0(VAR_2, VAR_4, VAR_6);
    FUNC_3(&VAR_7, VAR_2, VAR_4);
   }
   FUNC_1(VAR_3, &VAR_7);
   VAR_5 = 16;
  } else {
   SHA1_CTX VAR_8;

   FUNC_5(&VAR_8);
   FUNC_6(&VAR_8, VAR_2, VAR_4);
   while (!VAR_6 &&
       FUNC_7((char *)VAR_2, sizeof(VAR_2), VAR_1) != ((void*)0)) {
    VAR_4 = FUNC_9((char *)VAR_2);
    FUNC_0(VAR_2, VAR_4, VAR_6);
    FUNC_6(&VAR_8, VAR_2, VAR_4);
   }
   FUNC_4(VAR_3, &VAR_8);
   VAR_5 = 20;
  }
  FUNC_8(VAR_3, VAR_5);
 }
}

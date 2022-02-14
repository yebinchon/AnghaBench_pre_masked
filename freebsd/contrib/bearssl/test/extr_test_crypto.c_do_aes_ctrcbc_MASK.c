
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int br_aes_big_ctr_keys ;


 int FUNC_0 (int *,void const*,size_t) ;
 int FUNC_1 (int *,unsigned char*,int ,unsigned char*,int) ;
 int FUNC_2 (unsigned char*) ;
 int FUNC_3 (void*,unsigned char*,int) ;
 int FUNC_4 (unsigned char*,int ,int) ;

__attribute__((used)) static void
FUNC_5(const void *VAR_0, size_t VAR_1, int VAR_2,
 void *VAR_3, void *VAR_4, unsigned char *VAR_5, size_t VAR_6)
{
 br_aes_big_ctr_keys VAR_7;
 int VAR_8;

 FUNC_0(&VAR_7, VAR_0, VAR_1);
 for (VAR_8 = 0; VAR_8 < 2; VAR_8 ++) {




  if (VAR_4 != ((void*)0)
   && ((VAR_2 && VAR_8 == 1) || (!VAR_2 && VAR_8 == 0)))
  {
   unsigned char VAR_9[16];
   size_t VAR_10;

   FUNC_3(VAR_9, VAR_4, sizeof VAR_9);
   for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10 += 16) {
    unsigned char VAR_11[16];
    size_t VAR_12;

    for (VAR_12 = 0; VAR_12 < 16; VAR_12 ++) {
     VAR_11[VAR_12] = VAR_9[VAR_12] ^ VAR_5[VAR_10 + VAR_12];
    }
    FUNC_4(VAR_9, 0, sizeof VAR_9);
    FUNC_1(&VAR_7,
     VAR_11, FUNC_2(VAR_11 + 12), VAR_9, 16);
   }
   FUNC_3(VAR_4, VAR_9, sizeof VAR_9);
  }







  if (VAR_3 != ((void*)0) && VAR_8 == 0) {
   unsigned char VAR_13[16];
   size_t VAR_14;

   FUNC_3(VAR_13, VAR_3, sizeof VAR_13);
   for (VAR_14 = 0; VAR_14 < VAR_6; VAR_14 += 16) {
    int VAR_15;

    FUNC_1(&VAR_7,
     VAR_13, FUNC_2(VAR_13 + 12), VAR_5 + VAR_14, 16);
    for (VAR_15 = 15; VAR_15 >= 0; VAR_15 --) {
     VAR_13[VAR_15] = (VAR_13[VAR_15] + 1) & 0xFF;
     if (VAR_13[VAR_15] != 0) {
      break;
     }
    }
   }
   FUNC_3(VAR_3, VAR_13, sizeof VAR_13);
  }
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int br_sha1_context ;
typedef int br_multihash_context ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 size_t FUNC_1 (int *,int,unsigned char*) ;
 int FUNC_2 (int *,unsigned char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned char*) ;
 int FUNC_5 (int *,unsigned char*,size_t) ;
 int FUNC_6 (char*,unsigned char*,unsigned char*,size_t) ;
 size_t FUNC_7 (int,unsigned char*,size_t,unsigned char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,char*,unsigned int,unsigned int) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_10(br_multihash_context *VAR_2)
{






 size_t VAR_3;
 unsigned char VAR_4[258];
 int VAR_5;
 int VAR_6;

 VAR_6 = 0;
 for (VAR_3 = 0; VAR_3 < sizeof VAR_4; VAR_3 ++) {
  br_sha1_context VAR_7;
  unsigned char VAR_8[20];

  FUNC_3(&VAR_7);
  FUNC_5(&VAR_7, VAR_4, VAR_3);
  FUNC_4(&VAR_7, VAR_8);
  VAR_4[VAR_3] = VAR_8[0];
 }
 for (VAR_3 = 0; VAR_3 <= 257; VAR_3 ++) {
  size_t VAR_9;

  FUNC_0(VAR_2);
  FUNC_2(VAR_2, VAR_4, VAR_3);
  for (VAR_5 = 1; VAR_5 <= 6; VAR_5 ++) {
   unsigned char VAR_10[64], VAR_11[64];
   size_t VAR_12, VAR_13;

   VAR_12 = FUNC_1(VAR_2, VAR_5, VAR_10);
   if (VAR_12 == 0) {
    continue;
   }
   VAR_13 = FUNC_7(VAR_5, VAR_4, VAR_3, VAR_11);
   if (VAR_12 != VAR_13) {
    FUNC_9(VAR_1,
     "Bad hash output length: %u / %u\n",
     (unsigned)VAR_12, (unsigned)VAR_13);
    FUNC_8(VAR_0);
   }
   FUNC_6("Hash output", VAR_10, VAR_11, VAR_12);
   VAR_6 ++;
  }

  FUNC_0(VAR_2);
  for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9 ++) {
   FUNC_2(VAR_2, VAR_4 + VAR_9, 1);
   for (VAR_5 = 1; VAR_5 <= 6; VAR_5 ++) {
    unsigned char VAR_14[64], VAR_15[64];
    size_t VAR_16, VAR_17;

    VAR_16 = FUNC_1(VAR_2, VAR_5, VAR_14);
    if (VAR_16 == 0) {
     continue;
    }
    VAR_17 = FUNC_7(VAR_5, VAR_4, VAR_9 + 1, VAR_15);
    if (VAR_16 != VAR_17) {
     FUNC_9(VAR_1, "Bad hash output"
      " length: %u / %u\n",
      (unsigned)VAR_16,
      (unsigned)VAR_17);
     FUNC_8(VAR_0);
    }
    FUNC_6("Hash output", VAR_14, VAR_15, VAR_16);
   }
  }
 }
 return VAR_6;
}

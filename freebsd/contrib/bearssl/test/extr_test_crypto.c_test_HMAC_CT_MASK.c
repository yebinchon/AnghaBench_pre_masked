
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int br_hmac_key_context ;
typedef int br_hmac_context ;
typedef int br_hash_class ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *,int const*,void const*,size_t) ;
 size_t FUNC_2 (int *,unsigned char*) ;
 size_t FUNC_3 (int *,unsigned char const*,size_t,size_t,size_t,unsigned char*) ;
 int FUNC_4 (int *,void const*,size_t) ;
 int FUNC_5 (char*,unsigned char*,unsigned char*,size_t) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,unsigned int,unsigned int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,char*,unsigned int,unsigned int,unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_11(const br_hash_class *VAR_3,
 const void *VAR_4, size_t VAR_5, const void *VAR_6)
{
 br_hmac_key_context VAR_7;
 br_hmac_context VAR_8, VAR_9;
 unsigned char VAR_10[64], VAR_11[64];
 size_t VAR_12, VAR_13;

 FUNC_1(&VAR_7, VAR_3, VAR_4, VAR_5);

 for (VAR_12 = 0; VAR_12 < 2; VAR_12 ++) {
  for (VAR_13 = 0; VAR_13 < 130; VAR_13 ++) {
   size_t VAR_14, VAR_15;
   size_t VAR_16;

   VAR_14 = VAR_13;
   VAR_15 = VAR_13 + 256;
   for (VAR_16 = VAR_14; VAR_16 <= VAR_15; VAR_16 ++) {
    char VAR_17[30];
    size_t VAR_18, VAR_19;

    FUNC_0(&VAR_8, &VAR_7, 0);
    FUNC_4(&VAR_8, VAR_6, VAR_12 + VAR_16);
    VAR_18 = FUNC_2(&VAR_8, VAR_10);
    FUNC_0(&VAR_9, &VAR_7, 0);
    FUNC_4(&VAR_9, VAR_6, VAR_12);
    VAR_19 = FUNC_3(&VAR_9,
     (const unsigned char *)VAR_6 + VAR_12, VAR_16,
     VAR_14, VAR_15, VAR_11);
    if (VAR_18 != VAR_19) {
     FUNC_8(VAR_1, "HMAC length mismatch:"
      " %u / %u\n", (unsigned)VAR_18,
      (unsigned)VAR_19);
     FUNC_6(VAR_0);
    }
    FUNC_10(VAR_17, "HMAC CT %u,%u,%u",
     (unsigned)VAR_12, (unsigned)VAR_13, (unsigned)VAR_16);
    FUNC_5(VAR_17, VAR_10, VAR_11, VAR_18);
   }
  }
  FUNC_9(".");
  FUNC_7(VAR_2);
 }
 FUNC_9(" ");
 FUNC_7(VAR_2);
}

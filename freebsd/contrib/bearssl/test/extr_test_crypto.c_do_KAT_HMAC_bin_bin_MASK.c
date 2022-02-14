
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int br_hmac_key_context ;
typedef int br_hmac_context ;
typedef int br_hash_class ;


 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *,int const*,void const*,size_t) ;
 int FUNC_2 (int *,unsigned char*) ;
 int FUNC_3 (int *,unsigned char const*,size_t) ;
 int FUNC_4 (char*,unsigned char*,unsigned char*,size_t) ;
 size_t FUNC_5 (unsigned char*,char const*) ;

__attribute__((used)) static void
FUNC_6(const br_hash_class *VAR_0,
 const void *VAR_1, size_t VAR_2,
 const void *VAR_3, size_t VAR_4, const char *VAR_5)
{
 br_hmac_key_context VAR_6;
 br_hmac_context VAR_7;
 unsigned char VAR_8[64], VAR_9[64];
 size_t VAR_10, VAR_11;

 VAR_11 = FUNC_5(VAR_9, VAR_5);
 FUNC_1(&VAR_6, VAR_0, VAR_1, VAR_2);
 FUNC_0(&VAR_7, &VAR_6, 0);
 FUNC_3(&VAR_7, VAR_3, VAR_4);
 FUNC_2(&VAR_7, VAR_8);
 FUNC_4("KAT HMAC 1", VAR_8, VAR_9, VAR_11);

 FUNC_0(&VAR_7, &VAR_6, 0);
 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10 ++) {
  FUNC_3(&VAR_7, (const unsigned char *)VAR_3 + VAR_10, 1);
 }
 FUNC_2(&VAR_7, VAR_8);
 FUNC_4("KAT HMAC 2", VAR_8, VAR_9, VAR_11);

 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10 ++) {
  FUNC_0(&VAR_7, &VAR_6, 0);
  FUNC_3(&VAR_7, VAR_3, VAR_10);
  FUNC_2(&VAR_7, VAR_8);
  FUNC_3(&VAR_7,
   (const unsigned char *)VAR_3 + VAR_10, VAR_4 - VAR_10);
  FUNC_2(&VAR_7, VAR_8);
  FUNC_4("KAT HMAC 3", VAR_8, VAR_9, VAR_11);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ikev2_keys {int SK_d_len; int * SK_d; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int *,int ,int *,size_t,int *,scalar_t__) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (size_t) ;
 int FUNC_3 (int *,int const*,size_t) ;
 int FUNC_4 (int ,char*,int *,scalar_t__) ;

int FUNC_5(int VAR_3, struct ikev2_keys *VAR_4,
       const u8 *VAR_5, size_t VAR_6,
       const u8 *VAR_7, size_t VAR_8,
       u8 *VAR_9)
{
 u8 *VAR_10;
 size_t VAR_11;


 if (VAR_4->SK_d == ((void*)0) || VAR_5 == ((void*)0) || VAR_7 == ((void*)0))
  return -1;

 VAR_11 = VAR_6 + VAR_8;
 VAR_10 = FUNC_2(VAR_11);
 if (VAR_10 == ((void*)0))
  return -1;
 FUNC_3(VAR_10, VAR_5, VAR_6);
 FUNC_3(VAR_10 + VAR_6, VAR_7, VAR_8);

 if (FUNC_0(VAR_3, VAR_4->SK_d, VAR_4->SK_d_len, VAR_10, VAR_11,
      VAR_9, VAR_1 + VAR_0)) {
  FUNC_1(VAR_10);
  return -1;
 }
 FUNC_1(VAR_10);

 FUNC_4(VAR_2, "EAP-IKEV2: KEYMAT",
   VAR_9, VAR_1 + VAR_0);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dpp_curve_params {size_t prime_len; int ike_group; int name; } ;
typedef int EVP_PKEY ;
typedef int EC_GROUP ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int *,int const*,int const*,size_t) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;
 int * VAR_13 ;
 int * VAR_14 ;
 int * VAR_15 ;
 int * VAR_16 ;
 int * VAR_17 ;
 int * VAR_18 ;
 int * VAR_19 ;
 int * VAR_20 ;
 int * VAR_21 ;
 int * VAR_22 ;
 int * VAR_23 ;

__attribute__((used)) static EVP_PKEY * FUNC_4(const struct dpp_curve_params *VAR_24,
      int VAR_25)
{
 EC_GROUP *VAR_26;
 size_t VAR_27 = VAR_24->prime_len;
 const u8 *VAR_28, *VAR_29;
 EVP_PKEY *VAR_30;

 switch (VAR_24->ike_group) {
 case 19:
  VAR_28 = VAR_25 ? VAR_3 : VAR_15;
  VAR_29 = VAR_25 ? VAR_9 : VAR_21;
  break;
 case 20:
  VAR_28 = VAR_25 ? VAR_4 : VAR_16;
  VAR_29 = VAR_25 ? VAR_10 : VAR_22;
  break;
 case 21:
  VAR_28 = VAR_25 ? VAR_5 : VAR_17;
  VAR_29 = VAR_25 ? VAR_11 : VAR_23;
  break;
 case 28:
  VAR_28 = VAR_25 ? VAR_0 : VAR_12;
  VAR_29 = VAR_25 ? VAR_6 : VAR_18;
  break;
 case 29:
  VAR_28 = VAR_25 ? VAR_1 : VAR_13;
  VAR_29 = VAR_25 ? VAR_7 : VAR_19;
  break;
 case 30:
  VAR_28 = VAR_25 ? VAR_2 : VAR_14;
  VAR_29 = VAR_25 ? VAR_8 : VAR_20;
  break;
 default:
  return ((void*)0);
 }

 VAR_26 = FUNC_1(FUNC_2(VAR_24->name));
 if (!VAR_26)
  return ((void*)0);
 VAR_30 = FUNC_3(VAR_26, VAR_28, VAR_29, VAR_27);
 FUNC_0(VAR_26);
 return VAR_30;
}

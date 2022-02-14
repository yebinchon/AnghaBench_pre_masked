
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int br_hash_class ;
typedef int br_ec_private_key ;
typedef int br_ec_impl ;


 int VAR_0 ;
 size_t FUNC_0 (int const*,int const*,void const*,int const*,unsigned char*) ;
 size_t FUNC_1 (unsigned char*,size_t) ;
 int FUNC_2 (void*,unsigned char*,size_t) ;

size_t
FUNC_3(const br_ec_impl *VAR_1,
 const br_hash_class *VAR_2, const void *VAR_3,
 const br_ec_private_key *VAR_4, void *VAR_5)
{
 unsigned char VAR_6[(VAR_0 << 1) + 12];
 size_t VAR_7;

 VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_6);
 if (VAR_7 == 0) {
  return 0;
 }
 VAR_7 = FUNC_1(VAR_6, VAR_7);
 FUNC_2(VAR_5, VAR_6, VAR_7);
 return VAR_7;
}

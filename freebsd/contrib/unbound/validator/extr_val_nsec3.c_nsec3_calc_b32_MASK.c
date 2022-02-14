
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regional {int dummy; } ;
struct nsec3_cached_hash {size_t b32_len; int b32; int hash_len; int hash; } ;
typedef int sldns_buffer ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct regional*,scalar_t__,size_t) ;
 int FUNC_2 (int ,int ,char*,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(struct regional* VAR_0, sldns_buffer* VAR_1,
 struct nsec3_cached_hash* VAR_2)
{
 int VAR_3;
 FUNC_4(VAR_1);
 VAR_3 = FUNC_2(VAR_2->hash, VAR_2->hash_len,
  (char*)FUNC_3(VAR_1), FUNC_5(VAR_1));
 if(VAR_3 < 1) {
  FUNC_0("b32_ntop_extended_hex: error in encoding: %d", VAR_3);
  return 0;
 }
 VAR_2->b32_len = (size_t)VAR_3;
 VAR_2->b32 = FUNC_1(VAR_0, FUNC_3(VAR_1),
  VAR_2->b32_len);
 if(!VAR_2->b32)
  return 0;
 return 1;
}

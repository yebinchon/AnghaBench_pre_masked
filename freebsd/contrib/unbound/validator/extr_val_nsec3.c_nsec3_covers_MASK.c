
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {scalar_t__* dname; } ;
struct ub_packed_rrset_key {TYPE_1__ rk; } ;
struct nsec3_cached_hash {size_t hash_len; size_t b32_len; int * hash; int b32; } ;
typedef int sldns_buffer ;


 scalar_t__ FUNC_0 (scalar_t__*,int ,size_t) ;
 scalar_t__ FUNC_1 (int *,int *,size_t) ;
 int FUNC_2 (struct ub_packed_rrset_key*,int,int **,size_t*) ;
 scalar_t__ FUNC_3 (scalar_t__*,int *) ;
 int FUNC_4 (char*,size_t,int *,int ) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int
FUNC_8(uint8_t* VAR_0, struct nsec3_cached_hash* VAR_1,
 struct ub_packed_rrset_key* VAR_2, int VAR_3, sldns_buffer* VAR_4)
{
 uint8_t* VAR_5, *VAR_6;
 size_t VAR_7;
 int VAR_8;
 if(!FUNC_2(VAR_2, VAR_3, &VAR_5, &VAR_7))
  return 0;




 if(VAR_7 != VAR_1->hash_len || VAR_1->hash_len==0||VAR_1->b32_len==0||
  (size_t)*VAR_2->rk.dname != VAR_1->b32_len ||
  FUNC_3(VAR_2->rk.dname+1+
   (size_t)*VAR_2->rk.dname, VAR_0) != 0)
  return 0;


 if(FUNC_0(VAR_2->rk.dname+1, VAR_1->b32,
  VAR_1->b32_len) < 0 &&
  FUNC_1(VAR_1->hash, VAR_5, VAR_7) < 0)
  return 1;


 FUNC_6(VAR_4);
 VAR_6 = FUNC_5(VAR_4);
 VAR_8 = FUNC_4((char*)VAR_2->rk.dname+1,
  VAR_1->b32_len, VAR_6, FUNC_7(VAR_4));
 if(VAR_8<1)
  return 0;
 if((size_t)VAR_8 != VAR_1->hash_len || (size_t)VAR_8 != VAR_7)
  return 0;





 if(FUNC_1(VAR_5, VAR_6, VAR_7) <= 0 &&
  ( FUNC_1(VAR_1->hash, VAR_6, VAR_7) > 0 ||
    FUNC_1(VAR_1->hash, VAR_5, VAR_7) < 0)) {
  return 1;
 }
 return 0;
}

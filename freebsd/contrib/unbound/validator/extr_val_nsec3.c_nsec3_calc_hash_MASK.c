
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct regional {int dummy; } ;
struct nsec3_cached_hash {size_t dname_len; size_t hash_len; int * hash; int * dname; int rr; int nsec3; } ;
typedef int sldns_buffer ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,int ) ;
 size_t FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int **,size_t*) ;
 size_t FUNC_4 (int) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (struct regional*,size_t) ;
 int FUNC_7 (int,unsigned char*,int ,unsigned char*) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int *,size_t) ;

__attribute__((used)) static int
FUNC_13(struct regional* VAR_0, sldns_buffer* VAR_1,
 struct nsec3_cached_hash* VAR_2)
{
 int VAR_3 = FUNC_1(VAR_2->nsec3, VAR_2->rr);
 size_t VAR_4 = FUNC_2(VAR_2->nsec3, VAR_2->rr);
 uint8_t* VAR_5;
 size_t VAR_6, VAR_7;
 if(!FUNC_3(VAR_2->nsec3, VAR_2->rr, &VAR_5, &VAR_6))
  return -1;

 FUNC_9(VAR_1);
 FUNC_12(VAR_1, VAR_2->dname, VAR_2->dname_len);
 FUNC_5(FUNC_8(VAR_1));
 FUNC_12(VAR_1, VAR_5, VAR_6);
 FUNC_10(VAR_1);
 VAR_2->hash_len = FUNC_4(VAR_3);
 if(VAR_2->hash_len == 0) {
  FUNC_0("nsec3 hash of unknown algo %d", VAR_3);
  return -1;
 }
 VAR_2->hash = (uint8_t*)FUNC_6(VAR_0, VAR_2->hash_len);
 if(!VAR_2->hash)
  return 0;
 (void)FUNC_7(VAR_3, (unsigned char*)FUNC_8(VAR_1),
  FUNC_11(VAR_1), (unsigned char*)VAR_2->hash);
 for(VAR_7=0; VAR_7<VAR_4; VAR_7++) {
  FUNC_9(VAR_1);
  FUNC_12(VAR_1, VAR_2->hash, VAR_2->hash_len);
  FUNC_12(VAR_1, VAR_5, VAR_6);
  FUNC_10(VAR_1);
  (void)FUNC_7(VAR_3,
   (unsigned char*)FUNC_8(VAR_1),
   FUNC_11(VAR_1), (unsigned char*)VAR_2->hash);
 }
 return 1;
}

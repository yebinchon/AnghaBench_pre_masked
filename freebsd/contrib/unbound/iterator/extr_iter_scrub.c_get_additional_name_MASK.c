
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct rrset_parse {int type; } ;
struct rr_parse {int * ttl_data; } ;
typedef int sldns_buffer ;
 size_t FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 size_t FUNC_2 (int *) ;
 int FUNC_3 (int *,size_t) ;
 size_t FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(struct rrset_parse* VAR_0, struct rr_parse* VAR_1,
 uint8_t** VAR_2, size_t* VAR_3, sldns_buffer* VAR_4)
{
 size_t VAR_5 = 0;
 size_t VAR_6, VAR_7;
 switch(VAR_0->type) {
  case 134:
  case 133:
  case 132:
  case 129:
   VAR_5 = 0;
   break;
  case 131:
  case 135:
   VAR_5 = 2;
   break;
  case 128:
   VAR_5 = 6;
   break;
  case 130:

   return 0;
  default:
   return 0;
 }
 VAR_6 = FUNC_4(VAR_1->ttl_data+sizeof(uint32_t));
 if(VAR_6 < VAR_5+1)
  return 0;
 *VAR_2 = VAR_1->ttl_data+sizeof(uint32_t)+sizeof(uint16_t)+VAR_5;
 VAR_7 = FUNC_2(VAR_4);
 FUNC_3(VAR_4, (size_t)(*VAR_2 - FUNC_1(VAR_4)));
 *VAR_3 = FUNC_0(VAR_4);
 FUNC_3(VAR_4, VAR_7);
 if(*VAR_3 == 0)
  return 0;
 return 1;
}

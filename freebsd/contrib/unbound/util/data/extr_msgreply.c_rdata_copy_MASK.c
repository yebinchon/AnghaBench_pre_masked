
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
typedef int time_t ;
struct rr_parse {scalar_t__* ttl_data; scalar_t__ size; scalar_t__ outside_packet; } ;
struct packed_rrset_data {int ttl; } ;
typedef int ssize_t ;
struct TYPE_3__ {scalar_t__ _dname_count; int* _wireformat; } ;
typedef TYPE_1__ sldns_rr_descriptor ;
typedef scalar_t__ sldns_pkt_section ;
typedef int sldns_buffer ;




 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *,scalar_t__*) ;
 size_t FUNC_1 (int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,scalar_t__*,scalar_t__) ;
 int FUNC_5 (int *) ;
 scalar_t__* FUNC_6 (int *) ;
 scalar_t__* FUNC_7 (int *) ;
 size_t FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *,size_t) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (scalar_t__*) ;
 TYPE_1__* FUNC_14 (scalar_t__) ;
 int FUNC_15 (struct rr_parse*) ;

__attribute__((used)) static int
FUNC_16(sldns_buffer* VAR_5, struct packed_rrset_data* VAR_6, uint8_t* VAR_7,
 struct rr_parse* VAR_8, time_t* VAR_9, uint16_t VAR_10,
 sldns_pkt_section VAR_11)
{
 uint16_t VAR_12;
 const sldns_rr_descriptor* VAR_13;

 *VAR_9 = FUNC_13(VAR_8->ttl_data);

 if(*VAR_9 & 0x80000000U)
  *VAR_9 = 0;
 if(VAR_10 == VAR_0 && VAR_11 == VAR_1) {


  if(*VAR_9 > FUNC_15(VAR_8))
   *VAR_9 = FUNC_15(VAR_8);
  if(*VAR_9 > VAR_2)
   *VAR_9 = VAR_2;
 }
 if(*VAR_9 < VAR_4)
  *VAR_9 = VAR_4;
 if(*VAR_9 > VAR_3)
  *VAR_9 = VAR_3;
 if(*VAR_9 < VAR_6->ttl)
  VAR_6->ttl = *VAR_9;

 if(VAR_8->outside_packet) {

  FUNC_4(VAR_7, VAR_8->ttl_data+sizeof(uint32_t), VAR_8->size);
  return 1;
 }

 FUNC_11(VAR_5, (size_t)
  (VAR_8->ttl_data - FUNC_6(VAR_5) + sizeof(uint32_t)));


 VAR_12 = FUNC_2(VAR_8->size - 2);
 FUNC_4(VAR_7, &VAR_12, sizeof(uint16_t));
 VAR_7 += 2;

 VAR_12 = FUNC_9(VAR_5);
 if(FUNC_10(VAR_5) < VAR_12)
  return 0;
 VAR_13 = FUNC_14(VAR_10);
 if(VAR_12 > 0 && VAR_13 && VAR_13->_dname_count > 0) {
  int VAR_14 = (int)VAR_13->_dname_count;
  int VAR_15 = 0;
  size_t VAR_16;
  size_t VAR_17;

  while(VAR_12 > 0 && VAR_14) {
   switch(VAR_13->_wireformat[VAR_15]) {
   case 129:
    VAR_17 = FUNC_8(VAR_5);
    FUNC_0(VAR_5, VAR_7,
     FUNC_7(VAR_5));
    VAR_7 += FUNC_5(VAR_5);
    VAR_12 -= FUNC_8(VAR_5)-VAR_17;
    VAR_14--;
    VAR_16 = 0;
    break;
   case 128:
    VAR_16 = FUNC_7(VAR_5)[0] + 1;
    break;
   default:
    VAR_16 = FUNC_1(VAR_13->_wireformat[VAR_15]);
    break;
   }
   if(VAR_16) {
    FUNC_4(VAR_7, FUNC_7(VAR_5), VAR_16);
    VAR_7 += VAR_16;
    FUNC_12(VAR_5, (ssize_t)VAR_16);
    FUNC_3(VAR_16 <= VAR_12);
    VAR_12 -= VAR_16;
   }
   VAR_15++;
  }
 }

 if(VAR_12 > 0)
  FUNC_4(VAR_7, FUNC_7(VAR_5), VAR_12);

 return 1;
}

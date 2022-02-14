
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint16_t ;
struct ub_server_stats {int qEDNS_DO; int qEDNS; int qbit_CD; int qbit_AD; int qbit_Z; int qbit_RA; int qbit_RD; int qbit_TC; int qbit_AA; int qbit_QR; int qipv6; int qtls_resume; int qtls; int qtcp; int * qopcode; int qclass_big; int * qclass; int qtype_big; int * qtype; } ;
struct edns_data {int bits; scalar_t__ edns_present; } ;
struct comm_reply {int addrlen; int addr; } ;
struct comm_point {scalar_t__ type; int * ssl; int buffer; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 size_t FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 scalar_t__ FUNC_2 (int *,int ) ;
 scalar_t__ VAR_11 ;
 int FUNC_3 (int ) ;
 size_t FUNC_4 (int ,int) ;

void FUNC_5(struct ub_server_stats* VAR_12, struct comm_point* VAR_13,
 uint16_t VAR_14, uint16_t VAR_15, struct edns_data* VAR_16,
 struct comm_reply* VAR_17)
{
 uint16_t VAR_18 = FUNC_4(VAR_13->buffer, 2);
 if(VAR_14 < VAR_10)
  VAR_12->qtype[VAR_14]++;
 else VAR_12->qtype_big++;
 if(VAR_15 < VAR_9)
  VAR_12->qclass[VAR_15]++;
 else VAR_12->qclass_big++;
 VAR_12->qopcode[ FUNC_0(FUNC_3(VAR_13->buffer)) ]++;
 if(VAR_13->type != VAR_11) {
  VAR_12->qtcp++;
  if(VAR_13->ssl != ((void*)0)) {
   VAR_12->qtls++;




  }
 }
 if(VAR_17 && FUNC_2(&VAR_17->addr, VAR_17->addrlen))
  VAR_12->qipv6++;
 if( (VAR_18&VAR_3) )
  VAR_12->qbit_QR++;
 if( (VAR_18&VAR_0) )
  VAR_12->qbit_AA++;
 if( (VAR_18&VAR_6) )
  VAR_12->qbit_TC++;
 if( (VAR_18&VAR_5) )
  VAR_12->qbit_RD++;
 if( (VAR_18&VAR_4) )
  VAR_12->qbit_RA++;
 if( (VAR_18&VAR_7) )
  VAR_12->qbit_Z++;
 if( (VAR_18&VAR_1) )
  VAR_12->qbit_AD++;
 if( (VAR_18&VAR_2) )
  VAR_12->qbit_CD++;
 if(VAR_16->edns_present) {
  VAR_12->qEDNS++;
  if( (VAR_16->bits & VAR_8) )
   VAR_12->qEDNS_DO++;
 }
}

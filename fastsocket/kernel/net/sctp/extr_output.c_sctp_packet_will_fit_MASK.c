
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u16 ;
struct sctp_packet {size_t size; int ipfragok; int has_data; TYPE_1__* transport; } ;
struct sctp_chunk {scalar_t__ auth; } ;
typedef int sctp_xmit_t ;
struct TYPE_4__ {size_t pathmtu; } ;
struct TYPE_3__ {size_t pathmtu; TYPE_2__* asoc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sctp_chunk*) ;
 scalar_t__ FUNC_1 (struct sctp_packet*) ;

__attribute__((used)) static sctp_xmit_t FUNC_2(struct sctp_packet *VAR_2,
     struct sctp_chunk *VAR_3,
     u16 VAR_4)
{
 size_t VAR_5;
 size_t VAR_6;
 int VAR_7;
 sctp_xmit_t VAR_8 = VAR_0;

 VAR_5 = VAR_2->size;
 VAR_6 = ((VAR_2->transport->asoc) ?
  (VAR_2->transport->asoc->pathmtu) :
  (VAR_2->transport->pathmtu));

 VAR_7 = (VAR_5 + VAR_4 > VAR_6);


 if (VAR_7) {
  if (FUNC_1(VAR_2) || !FUNC_0(VAR_3) ||
      (!VAR_2->has_data && VAR_3->auth)) {




   VAR_2->ipfragok = 1;
  } else {
   VAR_8 = VAR_1;
  }
 }

 return VAR_8;
}

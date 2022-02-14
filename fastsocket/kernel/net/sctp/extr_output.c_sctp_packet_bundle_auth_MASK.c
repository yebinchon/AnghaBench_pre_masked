
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sctp_packet {scalar_t__ has_auth; TYPE_1__* transport; } ;
struct sctp_chunk {int auth; TYPE_2__* chunk_hdr; } ;
struct sctp_association {int dummy; } ;
typedef int sctp_xmit_t ;
struct TYPE_4__ {scalar_t__ type; } ;
struct TYPE_3__ {struct sctp_association* asoc; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct sctp_chunk* FUNC_0 (struct sctp_association*) ;
 int FUNC_1 (struct sctp_packet*,struct sctp_chunk*) ;

__attribute__((used)) static sctp_xmit_t FUNC_2(struct sctp_packet *VAR_2,
        struct sctp_chunk *VAR_3)
{
 struct sctp_association *VAR_4 = VAR_2->transport->asoc;
 struct sctp_chunk *VAR_5;
 sctp_xmit_t VAR_6 = VAR_1;


 if (!VAR_4)
  return VAR_6;




 if (VAR_3->chunk_hdr->type == VAR_0 || VAR_2->has_auth)
  return VAR_6;




 if (!VAR_3->auth)
  return VAR_6;

 VAR_5 = FUNC_0(VAR_4);
 if (!VAR_5)
  return VAR_6;

 VAR_6 = FUNC_1(VAR_2, VAR_5);

 return VAR_6;
}

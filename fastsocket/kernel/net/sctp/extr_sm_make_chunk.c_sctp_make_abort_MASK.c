
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_chunk {int transport; TYPE_1__* chunk_hdr; } ;
struct sctp_association {int dummy; } ;
typedef scalar_t__ __u8 ;
struct TYPE_2__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct sctp_chunk* FUNC_0 (struct sctp_association const*,int ,scalar_t__,size_t const) ;

struct sctp_chunk *FUNC_1(const struct sctp_association *VAR_3,
         const struct sctp_chunk *VAR_4,
         const size_t VAR_5)
{
 struct sctp_chunk *VAR_6;
 __u8 VAR_7 = 0;




 if (!VAR_3) {
  if (VAR_4 && VAR_4->chunk_hdr &&
      VAR_4->chunk_hdr->type == VAR_2)
   VAR_7 = 0;
  else
   VAR_7 = VAR_0;
 }

 VAR_6 = FUNC_0(VAR_3, VAR_1, VAR_7, VAR_5);
 if (VAR_6 && VAR_4)
  VAR_6->transport = VAR_4->transport;

 return VAR_6;
}

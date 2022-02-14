
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_fwdtsn_skip {int ssn; int stream; int new_cum_tsn; } ;
struct sctp_fwdtsn_hdr {int ssn; int stream; int new_cum_tsn; } ;
struct sctp_fwdtsn_chunk {int dummy; } ;
struct TYPE_2__ {scalar_t__ fwdtsn_hdr; } ;
struct sctp_chunk {TYPE_1__ subh; } ;
struct sctp_association {int dummy; } ;
typedef int skip ;
typedef int ftsn_hdr ;
typedef int __u32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct sctp_chunk*,int,struct sctp_fwdtsn_skip*) ;
 struct sctp_chunk* FUNC_2 (struct sctp_association const*,int ,int ,size_t) ;

struct sctp_chunk *FUNC_3(const struct sctp_association *VAR_1,
        __u32 VAR_2, size_t VAR_3,
        struct sctp_fwdtsn_skip *VAR_4)
{
 struct sctp_chunk *VAR_5 = ((void*)0);
 struct sctp_fwdtsn_chunk *VAR_6;
 struct sctp_fwdtsn_hdr VAR_7;
 struct sctp_fwdtsn_skip VAR_8;
 size_t VAR_9;
 int VAR_10;

 VAR_9 = (VAR_3 + 1) * sizeof(__u32);

 VAR_5 = FUNC_2(VAR_1, VAR_0, 0, VAR_9);

 if (!VAR_5)
  return ((void*)0);

 VAR_6 = (struct sctp_fwdtsn_chunk *)VAR_5->subh.fwdtsn_hdr;

 VAR_7.new_cum_tsn = FUNC_0(VAR_2);
 VAR_5->subh.fwdtsn_hdr =
  FUNC_1(VAR_5, sizeof(VAR_7), &VAR_7);

 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
  VAR_8.stream = VAR_4[VAR_10].stream;
  VAR_8.ssn = VAR_4[VAR_10].ssn;
  FUNC_1(VAR_5, sizeof(VAR_8), &VAR_8);
 }

 return VAR_5;
}

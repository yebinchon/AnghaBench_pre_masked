
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_sndrcvinfo {int sinfo_flags; int sinfo_ppid; int sinfo_stream; } ;
struct sctp_datahdr {void* ssn; int ppid; void* stream; scalar_t__ tsn; } ;
struct TYPE_2__ {int data_hdr; } ;
struct sctp_chunk {int sinfo; TYPE_1__ subh; } ;
struct sctp_association {int dummy; } ;
typedef int dp ;
typedef int __u8 ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int *,struct sctp_sndrcvinfo const*,int) ;
 int FUNC_2 (struct sctp_chunk*,int,struct sctp_datahdr*) ;
 struct sctp_chunk* FUNC_3 (struct sctp_association*,int ,int ,int) ;

struct sctp_chunk *FUNC_4(struct sctp_association *VAR_3,
           const struct sctp_sndrcvinfo *VAR_4,
           int VAR_5, __u8 VAR_6, __u16 VAR_7)
{
 struct sctp_chunk *VAR_8;
 struct sctp_datahdr VAR_9;
 int VAR_10;




 VAR_9.tsn = 0;
 VAR_9.stream = FUNC_0(VAR_4->sinfo_stream);
 VAR_9.ppid = VAR_4->sinfo_ppid;


 if (VAR_4->sinfo_flags & VAR_2) {
  VAR_6 |= VAR_1;
  VAR_9.ssn = 0;
 } else
  VAR_9.ssn = FUNC_0(VAR_7);

 VAR_10 = sizeof(VAR_9) + VAR_5;
 VAR_8 = FUNC_3(VAR_3, VAR_0, VAR_6, VAR_10);
 if (!VAR_8)
  goto nodata;

 VAR_8->subh.data_hdr = FUNC_2(VAR_8, sizeof(VAR_9), &VAR_9);
 FUNC_1(&VAR_8->sinfo, VAR_4, sizeof(struct sctp_sndrcvinfo));

nodata:
 return VAR_8;
}

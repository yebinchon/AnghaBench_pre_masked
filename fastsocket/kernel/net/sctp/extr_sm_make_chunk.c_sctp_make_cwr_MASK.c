
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ecn_cwr_hdr; } ;
struct sctp_chunk {int transport; TYPE_1__ subh; } ;
struct sctp_association {int dummy; } ;
struct TYPE_5__ {int lowest_tsn; } ;
typedef TYPE_2__ sctp_cwrhdr_t ;
typedef int cwr ;
typedef int __u32 ;


 int VAR_0 ;
 int FUNC_0 (int const) ;
 int FUNC_1 (struct sctp_chunk*,int,TYPE_2__*) ;
 struct sctp_chunk* FUNC_2 (struct sctp_association const*,int ,int ,int) ;

struct sctp_chunk *FUNC_3(const struct sctp_association *VAR_1,
       const __u32 VAR_2,
       const struct sctp_chunk *VAR_3)
{
 struct sctp_chunk *VAR_4;
 sctp_cwrhdr_t VAR_5;

 VAR_5.lowest_tsn = FUNC_0(VAR_2);
 VAR_4 = FUNC_2(VAR_1, VAR_0, 0,
     sizeof(sctp_cwrhdr_t));

 if (!VAR_4)
  goto nodata;

 VAR_4->subh.ecn_cwr_hdr =
  FUNC_1(VAR_4, sizeof(VAR_5), &VAR_5);
 if (VAR_3)
  VAR_4->transport = VAR_3->transport;

nodata:
 return VAR_4;
}

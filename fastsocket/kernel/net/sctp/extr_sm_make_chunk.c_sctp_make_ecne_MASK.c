
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ecne_hdr; } ;
struct sctp_chunk {TYPE_1__ subh; } ;
struct sctp_association {int dummy; } ;
struct TYPE_5__ {int lowest_tsn; } ;
typedef TYPE_2__ sctp_ecnehdr_t ;
typedef int ecne ;
typedef int __u32 ;


 int VAR_0 ;
 int FUNC_0 (int const) ;
 int FUNC_1 (struct sctp_chunk*,int,TYPE_2__*) ;
 struct sctp_chunk* FUNC_2 (struct sctp_association const*,int ,int ,int) ;

struct sctp_chunk *FUNC_3(const struct sctp_association *VAR_1,
        const __u32 VAR_2)
{
 struct sctp_chunk *VAR_3;
 sctp_ecnehdr_t VAR_4;

 VAR_4.lowest_tsn = FUNC_0(VAR_2);
 VAR_3 = FUNC_2(VAR_1, VAR_0, 0,
     sizeof(sctp_ecnehdr_t));
 if (!VAR_3)
  goto nodata;
 VAR_3->subh.ecne_hdr =
  FUNC_1(VAR_3, sizeof(VAR_4), &VAR_4);

nodata:
 return VAR_3;
}

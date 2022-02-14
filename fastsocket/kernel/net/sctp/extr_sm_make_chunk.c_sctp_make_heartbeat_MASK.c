
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_transport {int dummy; } ;
struct TYPE_2__ {int hbs_hdr; } ;
struct sctp_chunk {TYPE_1__ subh; struct sctp_transport* transport; } ;
struct sctp_association {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sctp_chunk*,size_t const,void const*) ;
 struct sctp_chunk* FUNC_1 (struct sctp_association const*,int ,int ,size_t const) ;

struct sctp_chunk *FUNC_2(const struct sctp_association *VAR_1,
      const struct sctp_transport *VAR_2,
      const void *VAR_3, const size_t VAR_4)
{
 struct sctp_chunk *VAR_5 = FUNC_1(VAR_1, VAR_0,
          0, VAR_4);

 if (!VAR_5)
  goto nodata;




 VAR_5->transport = (struct sctp_transport *) VAR_2;
 VAR_5->subh.hbs_hdr = FUNC_0(VAR_5, VAR_4, VAR_3);

nodata:
 return VAR_5;
}

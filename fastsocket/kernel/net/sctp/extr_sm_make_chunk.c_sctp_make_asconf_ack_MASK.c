
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int addip_hdr; } ;
struct sctp_chunk {TYPE_1__ subh; } ;
struct sctp_association {int dummy; } ;
struct TYPE_5__ {int serial; } ;
typedef TYPE_2__ sctp_addiphdr_t ;
typedef int asconf ;
typedef int __u32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sctp_chunk*,int,TYPE_2__*) ;
 struct sctp_chunk* FUNC_2 (struct sctp_association const*,int ,int ,int) ;

__attribute__((used)) static struct sctp_chunk *FUNC_3(const struct sctp_association *VAR_1,
            __u32 VAR_2, int VAR_3)
{
 sctp_addiphdr_t VAR_4;
 struct sctp_chunk *VAR_5;
 int VAR_6 = sizeof(VAR_4) + VAR_3;


 VAR_5 = FUNC_2(VAR_1, VAR_0, 0, VAR_6);
 if (!VAR_5)
  return ((void*)0);

 VAR_4.serial = FUNC_0(VAR_2);

 VAR_5->subh.addip_hdr =
  FUNC_1(VAR_5, sizeof(VAR_4), &VAR_4);

 return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int err_hdr; } ;
struct sctp_chunk {TYPE_1__ subh; } ;
struct TYPE_5__ {int length; int cause; } ;
typedef TYPE_2__ sctp_errhdr_t ;
typedef int __u16 ;
typedef int __be16 ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct sctp_chunk*,int,TYPE_2__*) ;

void FUNC_2(struct sctp_chunk *VAR_0, __be16 VAR_1,
        size_t VAR_2)
{
 sctp_errhdr_t VAR_3;
 __u16 VAR_4;


 VAR_3.cause = VAR_1;
 VAR_4 = sizeof(sctp_errhdr_t) + VAR_2;
 VAR_3.length = FUNC_0(VAR_4);
 VAR_0->subh.err_hdr = FUNC_1(VAR_0, sizeof(sctp_errhdr_t), &VAR_3);
}

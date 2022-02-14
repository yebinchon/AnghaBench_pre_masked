
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


union sctp_addr_param {int serial; } ;
struct TYPE_4__ {int sin_family; } ;
union sctp_addr {TYPE_1__ v4; } ;
struct TYPE_6__ {void* v; } ;
struct TYPE_5__ {void* addip_hdr; } ;
struct sctp_chunk {TYPE_3__ param_hdr; TYPE_2__ subh; } ;
struct sctp_association {int addip_serial; } ;
struct sctp_af {int (* to_addr_param ) (union sctp_addr*,union sctp_addr_param*) ;} ;
typedef union sctp_addr_param sctp_addiphdr_t ;
typedef int asconf ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (struct sctp_chunk*,int,union sctp_addr_param*) ;
 struct sctp_af* FUNC_2 (int ) ;
 struct sctp_chunk* FUNC_3 (struct sctp_association*,int ,int ,int) ;
 int FUNC_4 (union sctp_addr*,union sctp_addr_param*) ;

__attribute__((used)) static struct sctp_chunk *FUNC_5(struct sctp_association *VAR_1,
        union sctp_addr *VAR_2,
        int VAR_3)
{
 sctp_addiphdr_t VAR_4;
 struct sctp_chunk *VAR_5;
 int VAR_6 = sizeof(VAR_4) + VAR_3;
 union sctp_addr_param VAR_7;
 int VAR_8;
 struct sctp_af *VAR_9 = FUNC_2(VAR_2->v4.sin_family);

 VAR_8 = VAR_9->to_addr_param(VAR_2, &VAR_7);
 if (!VAR_8)
  return ((void*)0);
 VAR_6 += VAR_8;


 VAR_5 = FUNC_3(VAR_1, VAR_0, 0, VAR_6);
 if (!VAR_5)
  return ((void*)0);

 VAR_4.serial = FUNC_0(VAR_1->addip_serial++);

 VAR_5->subh.addip_hdr =
  FUNC_1(VAR_5, sizeof(VAR_4), &VAR_4);
 VAR_5->param_hdr.v =
  FUNC_1(VAR_5, VAR_8, &VAR_7);

 return VAR_5;
}

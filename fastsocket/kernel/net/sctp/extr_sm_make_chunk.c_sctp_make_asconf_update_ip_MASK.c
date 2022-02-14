
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int length; int type; } ;
union sctp_addr_param {int crr_id; TYPE_2__ param_hdr; } ;
struct TYPE_3__ {int sin_family; } ;
union sctp_addr {TYPE_1__ v4; } ;
struct sockaddr {int dummy; } ;
struct sctp_chunk {int dummy; } ;
struct sctp_association {int dummy; } ;
struct sctp_af {int (* to_addr_param ) (union sctp_addr*,union sctp_addr_param*) ;int sockaddr_len; } ;
typedef union sctp_addr_param sctp_addip_param_t ;
typedef int param ;
typedef int __be16 ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct sctp_chunk*,int,union sctp_addr_param*) ;
 struct sctp_af* FUNC_2 (int ) ;
 struct sctp_chunk* FUNC_3 (struct sctp_association*,union sctp_addr*,int) ;
 int FUNC_4 (union sctp_addr*,union sctp_addr_param*) ;
 int FUNC_5 (union sctp_addr*,union sctp_addr_param*) ;

struct sctp_chunk *FUNC_6(struct sctp_association *VAR_0,
           union sctp_addr *VAR_1,
           struct sockaddr *VAR_2,
           int VAR_3,
           __be16 VAR_4)
{
 sctp_addip_param_t VAR_5;
 struct sctp_chunk *VAR_6;
 union sctp_addr_param VAR_7;
 union sctp_addr *VAR_8;
 void *VAR_9;
 struct sctp_af *VAR_10;
 int VAR_11 = sizeof(VAR_5);
 int VAR_12 = 0;
 int VAR_13 = 0;
 int VAR_14;


 VAR_9 = VAR_2;
 for (VAR_14 = 0; VAR_14 < VAR_3; VAR_14++) {
  VAR_8 = (union sctp_addr *)VAR_9;
  VAR_10 = FUNC_2(VAR_8->v4.sin_family);
  VAR_12 = VAR_10->to_addr_param(VAR_8, &VAR_7);

  VAR_13 += VAR_11;
  VAR_13 += VAR_12;

  VAR_9 += VAR_10->sockaddr_len;
 }


 VAR_6 = FUNC_3(VAR_0, VAR_1, VAR_13);
 if (!VAR_6)
  return ((void*)0);


 VAR_9 = VAR_2;
 for (VAR_14 = 0; VAR_14 < VAR_3; VAR_14++) {
  VAR_8 = (union sctp_addr *)VAR_9;
  VAR_10 = FUNC_2(VAR_8->v4.sin_family);
  VAR_12 = VAR_10->to_addr_param(VAR_8, &VAR_7);
  VAR_5.param_hdr.type = VAR_4;
  VAR_5.param_hdr.length = FUNC_0(VAR_11 + VAR_12);
  VAR_5.crr_id = VAR_14;

  FUNC_1(VAR_6, VAR_11, &VAR_5);
  FUNC_1(VAR_6, VAR_12, &VAR_7);

  VAR_9 += VAR_10->sockaddr_len;
 }
 return VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union sctp_addr_param {int dummy; } sctp_addr_param ;
typedef union sctp_addr {int dummy; } sctp_addr ;
struct sctp_paramhdr {int length; int type; } ;
struct sctp_bind_addr {int dummy; } ;
struct sctp_af {int (* from_addr_param ) (union sctp_addr*,union sctp_addr_param*,int ,int ) ;} ;
typedef int gfp_t ;
typedef int __u8 ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sctp_bind_addr*,union sctp_addr*,int ,int ) ;
 int FUNC_4 (struct sctp_bind_addr*) ;
 struct sctp_af* FUNC_5 (int ) ;
 int FUNC_6 (union sctp_addr*,union sctp_addr_param*,int ,int ) ;
 scalar_t__ FUNC_7 (int) ;

int FUNC_8(struct sctp_bind_addr *VAR_2, __u8 *VAR_3,
      int VAR_4, __u16 VAR_5, gfp_t VAR_6)
{
 union sctp_addr_param *VAR_7;
 struct sctp_paramhdr *VAR_8;
 union sctp_addr VAR_9;
 int VAR_10 = 0;
 int VAR_11;
 struct sctp_af *VAR_12;


 while (VAR_4) {
  VAR_8 = (struct sctp_paramhdr *)VAR_3;
  VAR_7 = (union sctp_addr_param *)VAR_3;

  VAR_12 = FUNC_5(FUNC_2(VAR_8->type));
  if (FUNC_7(!VAR_12)) {
   VAR_10 = -VAR_0;
   FUNC_4(VAR_2);
   break;
  }

  VAR_12->from_addr_param(&VAR_9, VAR_7, FUNC_0(VAR_5), 0);
  VAR_10 = FUNC_3(VAR_2, &VAR_9, VAR_1, VAR_6);
  if (VAR_10) {

   FUNC_4(VAR_2);
   break;
  }

  VAR_11 = FUNC_1(VAR_8->length);
  VAR_4 -= VAR_11;
  VAR_3 += VAR_11;
 }

 return VAR_10;
}

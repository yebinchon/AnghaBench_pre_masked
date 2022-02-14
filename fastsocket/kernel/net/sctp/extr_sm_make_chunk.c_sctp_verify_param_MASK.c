
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union sctp_params {TYPE_1__* p; } ;
struct sctp_hmac_algo_param {int* hmac_ids; } ;
struct sctp_chunk {int dummy; } ;
struct sctp_association {int dummy; } ;
typedef int sctp_paramhdr_t ;
typedef int sctp_ierror_t ;
typedef int sctp_cid_t ;
typedef int __u16 ;
struct TYPE_2__ {int type; int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct sctp_association const*,union sctp_params,struct sctp_chunk*,struct sctp_chunk**) ;
 int FUNC_3 (struct sctp_association const*,TYPE_1__*,struct sctp_chunk*,struct sctp_chunk**) ;
 int FUNC_4 (struct sctp_association const*,union sctp_params,struct sctp_chunk*,struct sctp_chunk**) ;
 int VAR_6 ;
 int FUNC_5 (union sctp_params) ;

__attribute__((used)) static sctp_ierror_t FUNC_6(const struct sctp_association *VAR_7,
     union sctp_params VAR_8,
     sctp_cid_t VAR_9,
     struct sctp_chunk *VAR_10,
     struct sctp_chunk **VAR_11)
{
 struct sctp_hmac_algo_param *VAR_12;
 int VAR_13 = VAR_3;
 __u16 VAR_14, VAR_15 = 0;
 int VAR_16;






 switch (VAR_8.p->type) {
 case 135:
 case 134:
 case 141:
 case 130:
 case 131:
 case 138:
 case 128:
 case 140:
 case 143:
  break;

 case 129:
  if (!FUNC_5(VAR_8))
   return VAR_2;
  break;

 case 132:
  if (VAR_4)
   break;
  goto fallthrough;

 case 136:

  FUNC_2(VAR_7, VAR_8, VAR_10, VAR_11);
  VAR_13 = VAR_2;
  break;

 case 139:
  if (VAR_6)
   break;
  goto fallthrough;

 case 133:
  if (!VAR_5)
   goto fallthrough;






  if (VAR_1 !=
   FUNC_1(VAR_8.p->length) - sizeof(sctp_paramhdr_t)) {
   FUNC_3(VAR_7, VAR_8.p,
       VAR_10, VAR_11);
   VAR_13 = VAR_2;
  }
  break;

 case 142:
  if (!VAR_5)
   goto fallthrough;






  if (260 < FUNC_1(VAR_8.p->length)) {
   FUNC_3(VAR_7, VAR_8.p,
           VAR_10, VAR_11);
   VAR_13 = VAR_2;
  }
  break;

 case 137:
  if (!VAR_5)
   goto fallthrough;

  VAR_12 = (struct sctp_hmac_algo_param *)VAR_8.p;
  VAR_14 = (FUNC_1(VAR_8.p->length) - sizeof(sctp_paramhdr_t)) >> 1;





  for (VAR_16 = 0; VAR_16 < VAR_14; VAR_16++) {
   VAR_15 = FUNC_1(VAR_12->hmac_ids[VAR_16]);

   if (VAR_15 == VAR_0)
    break;
  }

  if (VAR_15 != VAR_0) {
   FUNC_3(VAR_7, VAR_8.p, VAR_10,
           VAR_11);
   VAR_13 = VAR_2;
  }
  break;
fallthrough:
 default:
  FUNC_0("Unrecognized param: %d for chunk %d.\n",
    FUNC_1(VAR_8.p->type), VAR_9);
  VAR_13 = FUNC_4(VAR_7, VAR_8, VAR_10, VAR_11);
  break;
 }
 return VAR_13;
}

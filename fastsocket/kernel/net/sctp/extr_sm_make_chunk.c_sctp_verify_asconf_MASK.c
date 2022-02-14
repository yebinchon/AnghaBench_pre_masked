
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union sctp_params {void* v; struct sctp_paramhdr* p; } ;
struct sctp_paramhdr {int type; int length; } ;
struct sctp_association {int dummy; } ;
typedef void sctp_paramhdr_t ;
struct TYPE_3__ {int length; } ;
struct TYPE_4__ {TYPE_1__ param_hdr; } ;
typedef TYPE_2__ sctp_addip_param_t ;







 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

int FUNC_2(const struct sctp_association *VAR_0,
         struct sctp_paramhdr *VAR_1, void *VAR_2,
         struct sctp_paramhdr **VAR_3) {
 sctp_addip_param_t *VAR_4;
 union sctp_params VAR_5;
 int VAR_6, VAR_7;

 VAR_5.v = (sctp_paramhdr_t *) VAR_1;
 while (VAR_5.v <= VAR_2 - sizeof(sctp_paramhdr_t)) {
  VAR_6 = FUNC_1(VAR_5.p->length);
  *VAR_3 = VAR_5.p;

  if (VAR_5.v > VAR_2 - VAR_6 ||
      VAR_6 < sizeof(sctp_paramhdr_t))
   return 0;

  switch (VAR_5.p->type) {
  case 131:
  case 130:
  case 129:
   VAR_4 = (sctp_addip_param_t *)VAR_5.v;
   VAR_7 = FUNC_1(VAR_4->param_hdr.length);
   if (VAR_7 < sizeof(sctp_addip_param_t) +
       sizeof(sctp_paramhdr_t))
    return 0;
   break;
  case 128:
  case 132:
   if (VAR_6 != sizeof(sctp_addip_param_t))
    return 0;

   break;
  default:
   break;
  }

  VAR_5.v += FUNC_0(VAR_6);
 }

 if (VAR_5.v != VAR_2)
  return 0;

 return 1;
}

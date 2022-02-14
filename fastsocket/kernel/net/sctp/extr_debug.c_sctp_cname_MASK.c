
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t chunk; } ;
typedef TYPE_1__ sctp_subtype_t ;





 size_t VAR_0 ;

 char const** VAR_1 ;

const char *FUNC_0(const sctp_subtype_t VAR_2)
{
 if (VAR_2.chunk <= VAR_0)
  return VAR_1[VAR_2.chunk];

 switch (VAR_2.chunk) {
 case 131:
  return "ASCONF";

 case 130:
  return "ASCONF_ACK";

 case 128:
  return "FWD_TSN";

 case 129:
  return "AUTH";

 default:
  break;
 }

 return "unknown chunk";
}

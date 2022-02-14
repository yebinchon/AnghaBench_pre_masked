
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_udpencaps {scalar_t__ sue_assoc_id; } ;
struct sctp_timeouts {scalar_t__ stimo_assoc_id; } ;
struct sctp_status {scalar_t__ sstat_assoc_id; } ;
struct sctp_sndinfo {scalar_t__ snd_assoc_id; } ;
struct sctp_setprim {scalar_t__ ssp_assoc_id; } ;
struct sctp_sack_info {scalar_t__ sack_assoc_id; } ;
struct sctp_rtoinfo {scalar_t__ srto_assoc_id; } ;
struct sctp_prstatus {scalar_t__ sprstat_assoc_id; } ;
struct sctp_paddrthlds {scalar_t__ spt_assoc_id; } ;
struct sctp_paddrparams {scalar_t__ spp_assoc_id; } ;
struct sctp_paddrinfo {scalar_t__ spinfo_assoc_id; } ;
struct sctp_event {scalar_t__ se_assoc_id; } ;
struct sctp_default_prinfo {scalar_t__ pr_assoc_id; } ;
struct sctp_authkeyid {scalar_t__ scact_assoc_id; } ;
struct sctp_authkey {scalar_t__ sca_assoc_id; } ;
struct sctp_authchunks {scalar_t__ gauth_assoc_id; } ;
struct sctp_assocparams {scalar_t__ sasoc_assoc_id; } ;
struct sctp_assoc_value {scalar_t__ assoc_id; } ;
typedef int socklen_t ;
typedef scalar_t__ sctp_assoc_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;






 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ,int,void*,int *) ;

int
FUNC_1(int VAR_5, sctp_assoc_t VAR_6, int VAR_7, void *VAR_8, socklen_t * VAR_9)
{
 if (VAR_8 == ((void*)0)) {
  VAR_4 = VAR_0;
  return (-1);
 }
 if ((VAR_6 == VAR_3) ||
     (VAR_6 == VAR_2)) {
  VAR_4 = VAR_0;
  return (-1);
 }
 switch (VAR_7) {
 case 130:
  ((struct sctp_rtoinfo *)VAR_8)->srto_assoc_id = VAR_6;
  break;
 case 158:
  ((struct sctp_assocparams *)VAR_8)->sasoc_assoc_id = VAR_6;
  break;
 case 152:
  ((struct sctp_assocparams *)VAR_8)->sasoc_assoc_id = VAR_6;
  break;
 case 136:
  ((struct sctp_setprim *)VAR_8)->ssp_assoc_id = VAR_6;
  break;
 case 140:
  ((struct sctp_paddrparams *)VAR_8)->spp_assoc_id = VAR_6;
  break;
 case 144:
  ((struct sctp_assoc_value *)VAR_8)->assoc_id = VAR_6;
  break;
 case 156:
  ((struct sctp_authkey *)VAR_8)->sca_assoc_id = VAR_6;
  break;
 case 157:
  ((struct sctp_authkeyid *)VAR_8)->scact_assoc_id = VAR_6;
  break;
 case 150:
  ((struct sctp_sack_info *)VAR_8)->sack_assoc_id = VAR_6;
  break;
 case 154:
  ((struct sctp_assoc_value *)VAR_8)->assoc_id = VAR_6;
  break;
 case 129:
  ((struct sctp_status *)VAR_8)->sstat_assoc_id = VAR_6;
  break;
 case 146:
  ((struct sctp_paddrinfo *)VAR_8)->spinfo_assoc_id = VAR_6;
  break;
 case 138:
  ((struct sctp_authchunks *)VAR_8)->gauth_assoc_id = VAR_6;
  break;
 case 145:
  ((struct sctp_authchunks *)VAR_8)->gauth_assoc_id = VAR_6;
  break;
 case 128:
  ((struct sctp_timeouts *)VAR_8)->stimo_assoc_id = VAR_6;
  break;
 case 147:
  ((struct sctp_event *)VAR_8)->se_assoc_id = VAR_6;
  break;
 case 151:
  ((struct sctp_sndinfo *)VAR_8)->snd_assoc_id = VAR_6;
  break;
 case 153:
  ((struct sctp_default_prinfo *)VAR_8)->pr_assoc_id = VAR_6;
  break;
 case 139:
  ((struct sctp_paddrthlds *)VAR_8)->spt_assoc_id = VAR_6;
  break;
 case 131:
  ((struct sctp_udpencaps *)VAR_8)->sue_assoc_id = VAR_6;
  break;
 case 149:
  ((struct sctp_assoc_value *)VAR_8)->assoc_id = VAR_6;
  break;
 case 133:
  ((struct sctp_assoc_value *)VAR_8)->assoc_id = VAR_6;
  break;
 case 155:
  ((struct sctp_assoc_value *)VAR_8)->assoc_id = VAR_6;
  break;
 case 159:
  ((struct sctp_assoc_value *)VAR_8)->assoc_id = VAR_6;
  break;
 case 132:
  ((struct sctp_assoc_value *)VAR_8)->assoc_id = VAR_6;
  break;
 case 141:
  ((struct sctp_assoc_value *)VAR_8)->assoc_id = VAR_6;
  break;
 case 137:
  ((struct sctp_assoc_value *)VAR_8)->assoc_id = VAR_6;
  break;
 case 143:
  ((struct sctp_assoc_value *)VAR_8)->assoc_id = VAR_6;
  break;
 case 148:
  ((struct sctp_assoc_value *)VAR_8)->assoc_id = VAR_6;
  break;
 case 134:
  ((struct sctp_prstatus *)VAR_8)->sprstat_assoc_id = VAR_6;
  break;
 case 135:
  ((struct sctp_prstatus *)VAR_8)->sprstat_assoc_id = VAR_6;
  break;
 case 142:
  ((struct sctp_assoc_value *)VAR_8)->assoc_id = VAR_6;
  break;
 default:
  break;
 }
 return (FUNC_0(VAR_5, VAR_1, VAR_7, VAR_8, VAR_9));
}

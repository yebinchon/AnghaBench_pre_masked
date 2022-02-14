
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timeval {int dummy; } ;
struct swrap_packet {int dummy; } ;
struct TYPE_2__ {unsigned long pck_snd; unsigned long pck_rcv; } ;
struct socket_info {int family; int type; TYPE_1__ io; struct sockaddr* peername; scalar_t__ myname; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef enum swrap_packet_type { ____Placeholder_swrap_packet_type } swrap_packet_type ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct swrap_packet*) ;
 char* FUNC_1 () ;
 int FUNC_2 (struct timeval*) ;
 int FUNC_3 (char const*) ;
 struct swrap_packet* FUNC_4 (struct timeval*,struct sockaddr_in const*,struct sockaddr_in const*,int ,unsigned char const*,size_t,unsigned long,unsigned long,unsigned char,int,size_t*) ;
 int FUNC_5 (int,struct swrap_packet*,size_t) ;

__attribute__((used)) static void FUNC_6(struct socket_info *VAR_2, const struct sockaddr *VAR_3,
         enum swrap_packet_type VAR_4,
         const void *VAR_5, size_t VAR_6)
{
 const struct sockaddr_in *VAR_7;
 const struct sockaddr_in *VAR_8;
 const char *VAR_9;
 unsigned long VAR_10 = 0;
 unsigned long VAR_11 = 0;
 unsigned char VAR_12 = 0;
 int VAR_13 = 0;
 struct timeval VAR_14;
 struct swrap_packet *VAR_15;
 size_t VAR_16 = 0;
 int VAR_17;

 VAR_9 = FUNC_1();
 if (!VAR_9) {
  return;
 }

 switch (VAR_2->family) {
 case 147:



  break;
 default:
  return;
 }

 switch (VAR_4) {
 case 137:
  if (VAR_2->type != VAR_1) return;

  VAR_7 = (const struct sockaddr_in *)VAR_2->myname;
  VAR_8 = (const struct sockaddr_in *)VAR_3;

  VAR_10 = VAR_2->io.pck_snd;
  VAR_11 = VAR_2->io.pck_rcv;
  VAR_12 = 0x02;

  VAR_2->io.pck_snd += 1;

  break;

 case 138:
  if (VAR_2->type != VAR_1) return;

  VAR_8 = (const struct sockaddr_in *)VAR_2->myname;
  VAR_7 = (const struct sockaddr_in *)VAR_3;

  VAR_10 = VAR_2->io.pck_rcv;
  VAR_11 = VAR_2->io.pck_snd;
  VAR_12 = 0x12;

  VAR_2->io.pck_rcv += 1;

  break;

 case 136:
  if (VAR_2->type != VAR_1) return;

  VAR_8 = (const struct sockaddr_in *)VAR_2->myname;
  VAR_7 = (const struct sockaddr_in *)VAR_3;


  VAR_10 = VAR_2->io.pck_snd - 1;
  VAR_11 = VAR_2->io.pck_rcv;
  VAR_12 = 0x02;
  VAR_13 = 1;

  break;

 case 139:
  if (VAR_2->type != VAR_1) return;

  VAR_7 = (const struct sockaddr_in *)VAR_2->myname;
  VAR_8 = (const struct sockaddr_in *)VAR_3;

  VAR_10 = VAR_2->io.pck_snd;
  VAR_11 = VAR_2->io.pck_rcv;
  VAR_12 = 0x10;

  break;

 case 143:
  if (VAR_2->type != VAR_1) return;

  VAR_8 = (const struct sockaddr_in *)VAR_2->myname;
  VAR_7 = (const struct sockaddr_in *)VAR_3;

  VAR_10 = VAR_2->io.pck_rcv;
  VAR_11 = VAR_2->io.pck_snd;
  VAR_12 = 0x02;

  VAR_2->io.pck_rcv += 1;

  break;

 case 144:
  if (VAR_2->type != VAR_1) return;

  VAR_7 = (const struct sockaddr_in *)VAR_2->myname;
  VAR_8 = (const struct sockaddr_in *)VAR_3;

  VAR_10 = VAR_2->io.pck_snd;
  VAR_11 = VAR_2->io.pck_rcv;
  VAR_12 = 0x12;

  VAR_2->io.pck_snd += 1;

  break;

 case 145:
  if (VAR_2->type != VAR_1) return;

  VAR_8 = (const struct sockaddr_in *)VAR_2->myname;
  VAR_7 = (const struct sockaddr_in *)VAR_3;

  VAR_10 = VAR_2->io.pck_rcv;
  VAR_11 = VAR_2->io.pck_snd;
  VAR_12 = 0x10;

  break;

 case 131:
  VAR_7 = (const struct sockaddr_in *)VAR_2->myname;
  VAR_8 = (const struct sockaddr_in *)VAR_2->peername;

  VAR_10 = VAR_2->io.pck_snd;
  VAR_11 = VAR_2->io.pck_rcv;
  VAR_12 = 0x18;

  VAR_2->io.pck_snd += VAR_6;

  break;

 case 128:
  VAR_8 = (const struct sockaddr_in *)VAR_2->myname;
  VAR_7 = (const struct sockaddr_in *)VAR_2->peername;

  if (VAR_2->type == VAR_0) {
   FUNC_6(VAR_2, VAR_2->peername,
       129,
             VAR_5, VAR_6);
   return;
  }

  VAR_10 = VAR_2->io.pck_rcv;
  VAR_11 = VAR_2->io.pck_snd;
  VAR_12 = 0x14;

  break;

 case 135:
  VAR_8 = (const struct sockaddr_in *)VAR_2->myname;
  VAR_7 = (const struct sockaddr_in *)VAR_2->peername;

  if (VAR_2->type == VAR_0) {
   return;
  }

  VAR_10 = VAR_2->io.pck_rcv;
  VAR_11 = VAR_2->io.pck_snd;
  VAR_12 = 0x14;

  break;

 case 134:
  VAR_8 = (const struct sockaddr_in *)VAR_2->myname;
  VAR_7 = (const struct sockaddr_in *)VAR_2->peername;

  VAR_10 = VAR_2->io.pck_rcv;
  VAR_11 = VAR_2->io.pck_snd;
  VAR_12 = 0x18;

  VAR_2->io.pck_rcv += VAR_6;

  break;

 case 132:
  VAR_8 = (const struct sockaddr_in *)VAR_2->myname;
  VAR_7 = (const struct sockaddr_in *)VAR_2->peername;

  if (VAR_2->type == VAR_0) {
   return;
  }

  VAR_10 = VAR_2->io.pck_rcv;
  VAR_11 = VAR_2->io.pck_snd;
  VAR_12 = 0x14;

  break;

 case 130:
  VAR_7 = (const struct sockaddr_in *)VAR_2->myname;
  VAR_8 = (const struct sockaddr_in *)VAR_3;

  VAR_2->io.pck_snd += VAR_6;

  break;

 case 129:
  VAR_8 = (const struct sockaddr_in *)VAR_2->myname;
  VAR_7 = (const struct sockaddr_in *)VAR_3;

  VAR_13 = 1;

  break;

 case 133:
  VAR_8 = (const struct sockaddr_in *)VAR_2->myname;
  VAR_7 = (const struct sockaddr_in *)VAR_3;

  VAR_2->io.pck_rcv += VAR_6;

  break;

 case 140:
  if (VAR_2->type != VAR_1) return;

  VAR_7 = (const struct sockaddr_in *)VAR_2->myname;
  VAR_8 = (const struct sockaddr_in *)VAR_2->peername;

  VAR_10 = VAR_2->io.pck_snd;
  VAR_11 = VAR_2->io.pck_rcv;
  VAR_12 = 0x11;

  VAR_2->io.pck_snd += 1;

  break;

 case 141:
  if (VAR_2->type != VAR_1) return;

  VAR_8 = (const struct sockaddr_in *)VAR_2->myname;
  VAR_7 = (const struct sockaddr_in *)VAR_2->peername;

  VAR_10 = VAR_2->io.pck_rcv;
  VAR_11 = VAR_2->io.pck_snd;
  VAR_12 = 0x11;

  VAR_2->io.pck_rcv += 1;

  break;

 case 142:
  if (VAR_2->type != VAR_1) return;

  VAR_7 = (const struct sockaddr_in *)VAR_2->myname;
  VAR_8 = (const struct sockaddr_in *)VAR_2->peername;

  VAR_10 = VAR_2->io.pck_snd;
  VAR_11 = VAR_2->io.pck_rcv;
  VAR_12 = 0x10;

  break;
 default:
  return;
 }

 FUNC_2(&VAR_14);

 VAR_15 = FUNC_4(&VAR_14, VAR_7, VAR_8, VAR_2->type,
       (const unsigned char *)VAR_5, VAR_6,
       VAR_10, VAR_11, VAR_12, VAR_13,
       &VAR_16);
 if (!VAR_15) {
  return;
 }

 VAR_17 = FUNC_3(VAR_9);
 if (VAR_17 != -1) {
  FUNC_5(VAR_17, VAR_15, VAR_16);
 }

 FUNC_0(VAR_15);
}

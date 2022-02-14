
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u ;
struct sockaddr_in {int sin_port; int sin_addr; } ;
struct protocol {int fd; struct interface_info* local; } ;
struct interface_info {int errors; int dead; int name; scalar_t__ noifmedia; } ;
struct iaddr {int len; int iabuf; } ;
struct hardware {int dummy; } ;
struct dhcp_packet {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct interface_info*,struct dhcp_packet*,int,int ,struct iaddr,struct hardware*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct interface_info*) ;
 int FUNC_3 (struct interface_info*) ;
 int VAR_1 ;
 int FUNC_4 (int ,int *,int) ;
 int FUNC_5 (struct interface_info*,unsigned char*,int,struct sockaddr_in*,struct hardware*) ;
 int FUNC_6 (struct protocol*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct interface_info*,struct dhcp_packet*,int,int ,struct iaddr,struct hardware*) ;
 int FUNC_9 (char*,int ,...) ;

void
FUNC_10(struct protocol *VAR_2)
{
 struct sockaddr_in VAR_3;
 struct hardware VAR_4;
 struct iaddr VAR_5;
 ssize_t VAR_6;
 union {




  unsigned char packbuf[4095];
  struct dhcp_packet packet;
 } VAR_7;
 struct interface_info *VAR_8 = VAR_2->local;

 if ((VAR_6 = FUNC_5(VAR_8, VAR_7.packbuf, sizeof(VAR_7), &VAR_3,
     &VAR_4)) == -1) {
  FUNC_9("receive_packet failed on %s: %s", VAR_8->name,
      FUNC_7(VAR_0));
  VAR_8->errors++;
  if ((!FUNC_3(VAR_8)) ||
      (VAR_8->noifmedia && VAR_8->errors > 20)) {

   FUNC_9("Interface %s no longer appears valid.",
       VAR_8->name);
   VAR_8->dead = 1;
   VAR_1 = 1;
   FUNC_1(VAR_2->fd);
   FUNC_6(VAR_2);
   FUNC_2(VAR_8);
  }
  return;
 }
 if (VAR_6 == 0)
  return;

 if (&FUNC_0) {
  VAR_5.len = 4;
  FUNC_4(VAR_5.iabuf, &VAR_3.sin_addr, VAR_5.len);

  FUNC_0)(VAR_8, &VAR_7.packet, VAR_6,
      VAR_3.sin_port, VAR_5, &VAR_4);
 }
}

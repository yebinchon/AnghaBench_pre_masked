
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct sockaddr {int dummy; } ;
struct ggd_connection {int c_sendfd; int c_recvfd; int c_path; } ;
struct g_gate_cinit {int gc_flags; } ;
typedef int in_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct ggd_connection *VAR_4, struct g_gate_cinit *VAR_5,
    struct sockaddr *VAR_6, int VAR_7)
{
 in_addr_t VAR_8;

 VAR_8 = FUNC_1(((struct sockaddr_in *)(void *)VAR_6)->sin_addr.s_addr);
 if ((VAR_5->gc_flags & VAR_1) != 0) {
  if (VAR_4->c_sendfd != -1) {
   FUNC_0(VAR_3,
       "Send socket already exists [%s, %s].", FUNC_2(VAR_8),
       VAR_4->c_path);
   return (VAR_0);
  }
  VAR_4->c_sendfd = VAR_7;
 } else {
  if (VAR_4->c_recvfd != -1) {
   FUNC_0(VAR_3,
       "Receive socket already exists [%s, %s].",
       FUNC_2(VAR_8), VAR_4->c_path);
   return (VAR_0);
  }
  VAR_4->c_recvfd = VAR_7;
 }
 FUNC_0(VAR_2, "Connection added [%s, %s].", FUNC_2(VAR_8),
     VAR_4->c_path);
 return (0);
}

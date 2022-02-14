
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct sockaddr {int dummy; } ;
struct ggd_connection {int c_sendfd; int c_recvfd; int c_flags; int * c_path; int c_birthtime; scalar_t__ c_sectorsize; scalar_t__ c_mediasize; int c_srcip; int c_token; } ;
struct g_gate_cinit {int gc_flags; int gc_token; int gc_path; } ;
typedef int in_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int *,struct ggd_connection*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int VAR_3 ;
 int FUNC_2 (struct ggd_connection*) ;
 int FUNC_3 (int ,char*,int ,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct ggd_connection* FUNC_6 (int) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static struct ggd_connection *
FUNC_9(struct g_gate_cinit *VAR_4, struct sockaddr *VAR_5, int VAR_6)
{
 struct ggd_connection *VAR_7;
 in_addr_t VAR_8;







 FUNC_1();

 VAR_7 = FUNC_6(sizeof(*VAR_7));
 if (VAR_7 == ((void*)0))
  return (((void*)0));
 VAR_7->c_path = FUNC_7(VAR_4->gc_path);
 if (VAR_7->c_path == ((void*)0)) {
  FUNC_2(VAR_7);
  return (((void*)0));
 }
 VAR_7->c_token = VAR_4->gc_token;
 VAR_8 = FUNC_4(((struct sockaddr_in *)(void *)VAR_5)->sin_addr.s_addr);
 VAR_7->c_srcip = VAR_8;
 VAR_7->c_sendfd = VAR_7->c_recvfd = -1;
 if ((VAR_4->gc_flags & VAR_0) != 0)
  VAR_7->c_sendfd = VAR_6;
 else
  VAR_7->c_recvfd = VAR_6;
 VAR_7->c_mediasize = 0;
 VAR_7->c_sectorsize = 0;
 FUNC_8(&VAR_7->c_birthtime);
 VAR_7->c_flags = VAR_4->gc_flags;
 FUNC_0(&VAR_3, VAR_7, VAR_2);
 FUNC_3(VAR_1, "Connection created [%s, %s].", FUNC_5(VAR_8),
     VAR_7->c_path);
 return (VAR_7);
}

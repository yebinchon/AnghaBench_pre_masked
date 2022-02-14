
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr {scalar_t__ sa_family; } ;
struct TYPE_3__ {int s_addr; } ;
struct TYPE_4__ {int sin_len; scalar_t__ sin_family; int sin_port; TYPE_1__ sin_addr; } ;
struct nb_ctx {scalar_t__ nb_nsname; int nb_flags; TYPE_2__ nb_ns; int nb_nmbtcpport; int nb_smbtcpport; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sockaddr*,TYPE_2__*,int) ;
 int FUNC_1 (struct sockaddr*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,struct sockaddr**,int ) ;
 int FUNC_5 (char*,int,scalar_t__) ;

int
FUNC_6(struct nb_ctx *VAR_4)
{
 struct sockaddr *VAR_5;
 int VAR_6;

 VAR_4->nb_flags &= ~VAR_3;

 if (VAR_4->nb_nsname == ((void*)0)) {
  VAR_4->nb_ns.sin_addr.s_addr = FUNC_2(VAR_2);
 } else {
  VAR_6 = FUNC_4(VAR_4->nb_nsname, &VAR_5, VAR_4->nb_smbtcpport);
  if (VAR_6) {
   FUNC_5("can't resolve %s", VAR_6, VAR_4->nb_nsname);
   return VAR_6;
  }
  if (VAR_5->sa_family != VAR_0) {
   FUNC_5("unsupported address family %d", 0, VAR_5->sa_family);
   return VAR_1;
  }
  FUNC_0(VAR_5, &VAR_4->nb_ns, sizeof(VAR_4->nb_ns));
  FUNC_1(VAR_5);
 }
 VAR_4->nb_ns.sin_port = FUNC_3(VAR_4->nb_nmbtcpport);
 VAR_4->nb_ns.sin_family = VAR_0;
 VAR_4->nb_ns.sin_len = sizeof(VAR_4->nb_ns);
 VAR_4->nb_flags |= VAR_3;
 return 0;
}

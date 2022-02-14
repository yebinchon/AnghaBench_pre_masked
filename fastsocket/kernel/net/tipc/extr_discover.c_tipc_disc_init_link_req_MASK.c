
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_media_addr {int dummy; } ;
struct link_req {int timer_intv; int timer; struct bearer* bearer; int dest; int buf; } ;
struct bearer {int dummy; } ;
typedef int Handler ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int ,unsigned long) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct link_req*) ;
 struct link_req* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,struct tipc_media_addr const*,int) ;
 int FUNC_5 (int ,int ,int ,struct bearer*) ;

struct link_req *FUNC_6(struct bearer *VAR_4,
      const struct tipc_media_addr *VAR_5,
      u32 VAR_6,
      u32 VAR_7)
{
 struct link_req *VAR_8;

 VAR_8 = FUNC_3(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return ((void*)0);

 VAR_8->buf = FUNC_5(VAR_0, VAR_7, VAR_6, VAR_4);
 if (!VAR_8->buf) {
  FUNC_2(VAR_8);
  return ((void*)0);
 }

 FUNC_4(&VAR_8->dest, VAR_5, sizeof(*VAR_5));
 VAR_8->bearer = VAR_4;
 VAR_8->timer_intv = VAR_2;
 FUNC_0(&VAR_8->timer, (Handler)VAR_3, (unsigned long)VAR_8);
 FUNC_1(&VAR_8->timer, VAR_8->timer_intv);
 return VAR_8;
}

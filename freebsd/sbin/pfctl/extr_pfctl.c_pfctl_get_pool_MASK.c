
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
struct pfioc_pooladdr {int r_action; scalar_t__ nr; int addr; scalar_t__ ticket; scalar_t__ r_num; int anchor; } ;
struct pf_pooladdr {int dummy; } ;
struct pf_pool {int list; } ;
typedef int pp ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct pf_pooladdr*,int ) ;
 int FUNC_2 (int *,struct pf_pooladdr*,int) ;
 struct pf_pooladdr* FUNC_3 (int,int) ;
 int VAR_2 ;
 int FUNC_4 (int,char*) ;
 scalar_t__ FUNC_5 (int,int ,struct pfioc_pooladdr*) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (struct pfioc_pooladdr*,int ,int) ;
 int FUNC_8 (char*) ;

int
FUNC_9(int VAR_3, struct pf_pool *VAR_4, u_int32_t VAR_5,
    u_int32_t VAR_6, int VAR_7, char *VAR_8)
{
 struct pfioc_pooladdr VAR_9;
 struct pf_pooladdr *VAR_10;
 u_int32_t VAR_11, VAR_12;

 FUNC_7(&VAR_9, 0, sizeof(VAR_9));
 FUNC_6(VAR_9.anchor, VAR_8, sizeof(VAR_9.anchor));
 VAR_9.r_action = VAR_7;
 VAR_9.r_num = VAR_5;
 VAR_9.ticket = VAR_6;
 if (FUNC_5(VAR_3, VAR_1, &VAR_9)) {
  FUNC_8("DIOCGETADDRS");
  return (-1);
 }
 VAR_12 = VAR_9.nr;
 FUNC_0(&VAR_4->list);
 for (VAR_11 = 0; VAR_11 < VAR_12; ++VAR_11) {
  VAR_9.nr = VAR_11;
  if (FUNC_5(VAR_3, VAR_0, &VAR_9)) {
   FUNC_8("DIOCGETADDR");
   return (-1);
  }
  VAR_10 = FUNC_3(1, sizeof(struct pf_pooladdr));
  if (VAR_10 == ((void*)0))
   FUNC_4(1, "calloc");
  FUNC_2(&VAR_9.addr, VAR_10, sizeof(struct pf_pooladdr));
  FUNC_1(&VAR_4->list, VAR_10, VAR_2);
 }

 return (0);
}

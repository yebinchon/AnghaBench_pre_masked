
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_2__ {int p_uid; int p_sid; } ;
struct pkt_preq {TYPE_1__ pp_page; int pp_low; } ;
typedef int netdissect_options ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pkt_preq const) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int
FUNC_4(netdissect_options *VAR_0,
        const struct pkt_preq *VAR_1, u_int VAR_2)
{
 FUNC_1((VAR_0, " wb-preq:"));
 if (VAR_2 < sizeof(*VAR_1) || !FUNC_2(*VAR_1))
  return (-1);

 FUNC_1((VAR_0, " need %u/%s:%u",
        FUNC_0(&VAR_1->pp_low),
        FUNC_3(VAR_0, &VAR_1->pp_page.p_sid),
        FUNC_0(&VAR_1->pp_page.p_uid)));
 return (0);
}

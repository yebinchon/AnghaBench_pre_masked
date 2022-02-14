
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
struct aodv_rreq6 {int rreq_type; int rreq_os; int rreq_oa; int rreq_ds; int rreq_da; int rreq_id; int rreq_hops; } ;
struct aodv_ext {int dummy; } ;
typedef int netdissect_options ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct aodv_rreq6 const) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *,struct aodv_ext const*,int) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static void
FUNC_5(netdissect_options *VAR_5, const u_char *VAR_6, u_int VAR_7)
{
 u_int VAR_8;
 const struct aodv_rreq6 *VAR_9 = (const struct aodv_rreq6 *)VAR_6;

 FUNC_2(*VAR_9);
 if (VAR_7 < sizeof(*VAR_9))
  goto trunc;
 FUNC_1((VAR_5, " v6 rreq %u %s%s%s%s%shops %u id 0x%08lx\n"
     "\tdst %s seq %lu src %s seq %lu", VAR_7,
     VAR_9->rreq_type & VAR_2 ? "[J]" : "",
     VAR_9->rreq_type & VAR_3 ? "[R]" : "",
     VAR_9->rreq_type & VAR_1 ? "[G]" : "",
     VAR_9->rreq_type & VAR_0 ? "[D]" : "",
     VAR_9->rreq_type & VAR_4 ? "[U] " : " ",
     VAR_9->rreq_hops,
     (unsigned long)FUNC_0(&VAR_9->rreq_id),
     FUNC_4(VAR_5, &VAR_9->rreq_da),
     (unsigned long)FUNC_0(&VAR_9->rreq_ds),
     FUNC_4(VAR_5, &VAR_9->rreq_oa),
     (unsigned long)FUNC_0(&VAR_9->rreq_os)));
 VAR_8 = VAR_7 - sizeof(*VAR_9);
 if (VAR_8 >= sizeof(struct aodv_ext))
  FUNC_3(VAR_5, (const struct aodv_ext *)(VAR_6 + sizeof(*VAR_9)), VAR_8);
 return;

trunc:
 FUNC_1((VAR_5, " [|rreq"));
}

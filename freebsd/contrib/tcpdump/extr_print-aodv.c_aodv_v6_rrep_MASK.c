
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
struct aodv_rrep6 {int rrep_type; int rrep_ps; int rrep_life; int rrep_oa; int rrep_ds; int rrep_da; int rrep_hops; } ;
struct aodv_ext {int dummy; } ;
typedef int netdissect_options ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct aodv_rrep6 const) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,struct aodv_ext const*,int) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static void
FUNC_5(netdissect_options *VAR_3, const u_char *VAR_4, u_int VAR_5)
{
 u_int VAR_6;
 const struct aodv_rrep6 *VAR_7 = (const struct aodv_rrep6 *)VAR_4;

 FUNC_2(*VAR_7);
 if (VAR_5 < sizeof(*VAR_7))
  goto trunc;
 FUNC_1((VAR_3, " rrep %u %s%sprefix %u hops %u\n"
    "\tdst %s dseq %lu src %s %lu ms", VAR_5,
     VAR_7->rrep_type & VAR_2 ? "[R]" : "",
     VAR_7->rrep_type & VAR_0 ? "[A] " : " ",
     VAR_7->rrep_ps & VAR_1,
     VAR_7->rrep_hops,
     FUNC_4(VAR_3, &VAR_7->rrep_da),
     (unsigned long)FUNC_0(&VAR_7->rrep_ds),
     FUNC_4(VAR_3, &VAR_7->rrep_oa),
     (unsigned long)FUNC_0(&VAR_7->rrep_life)));
 VAR_6 = VAR_5 - sizeof(*VAR_7);
 if (VAR_6 >= sizeof(struct aodv_ext))
  FUNC_3(VAR_3, (const struct aodv_ext *)(VAR_4 + sizeof(*VAR_7)), VAR_6);
 return;

trunc:
 FUNC_1((VAR_3, " [|rreq"));
}

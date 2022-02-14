
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct ip6_hdr {int ip6_plen; } ;
struct ip6_frag {int ip6f_offlg; int ip6f_ident; } ;
struct TYPE_4__ {scalar_t__ ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct ip6_frag const) ;

int
FUNC_4(netdissect_options *VAR_1, register const u_char *VAR_2, register const u_char *VAR_3)
{
 register const struct ip6_frag *VAR_4;
 register const struct ip6_hdr *VAR_5;

 VAR_4 = (const struct ip6_frag *)VAR_2;
 VAR_5 = (const struct ip6_hdr *)VAR_3;

 FUNC_3(*VAR_4);

 if (VAR_1->ndo_vflag) {
  FUNC_2((VAR_1, "frag (0x%08x:%d|%ld)",
         FUNC_1(&VAR_4->ip6f_ident),
         FUNC_0(&VAR_4->ip6f_offlg) & VAR_0,
         sizeof(struct ip6_hdr) + FUNC_0(&VAR_5->ip6_plen) -
          (long)(VAR_2 - VAR_3) - sizeof(struct ip6_frag)));
 } else {
  FUNC_2((VAR_1, "frag (%d|%ld)",
         FUNC_0(&VAR_4->ip6f_offlg) & VAR_0,
         sizeof(struct ip6_hdr) + FUNC_0(&VAR_5->ip6_plen) -
          (long)(VAR_2 - VAR_3) - sizeof(struct ip6_frag)));
 }


 if ((FUNC_0(&VAR_4->ip6f_offlg) & VAR_0) != 0)
  return -1;
 else
 {
  FUNC_2((VAR_1, " "));
  return sizeof(struct ip6_frag);
 }
trunc:
 FUNC_2((VAR_1, "[|frag]"));
 return -1;
}

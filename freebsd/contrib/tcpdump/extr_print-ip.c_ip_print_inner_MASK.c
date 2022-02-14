
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u_int ;
typedef int u_char ;
struct ip_print_demux_state {scalar_t__ advance; void* nh; scalar_t__ off; void* len; int const* cp; struct ip const* ip; } ;
struct ip {int dummy; } ;
typedef int netdissect_options ;


 int FUNC_0 (int *,struct ip_print_demux_state*) ;

void
FUNC_1(netdissect_options *VAR_0,
        const u_char *VAR_1,
        u_int VAR_2, u_int VAR_3,
        const u_char *VAR_4)
{
 struct ip_print_demux_state VAR_5;

 VAR_5.ip = (const struct ip *)VAR_4;
 VAR_5.cp = VAR_1;
 VAR_5.len = VAR_2;
 VAR_5.off = 0;
 VAR_5.nh = VAR_3;
 VAR_5.advance = 0;

 FUNC_0(VAR_0, &VAR_5);
}

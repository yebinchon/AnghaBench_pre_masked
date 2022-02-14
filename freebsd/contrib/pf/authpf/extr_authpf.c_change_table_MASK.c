
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pfrt_name; } ;
struct pfr_addr {int pfrio_esize; int pfrio_size; int pfra_net; void* pfra_af; int pfra_ip6addr; int pfra_ip4addr; struct pfr_addr* pfrio_buffer; TYPE_1__ pfrio_table; } ;
struct pfioc_table {int pfrio_esize; int pfrio_size; int pfra_net; void* pfra_af; int pfra_ip6addr; int pfra_ip4addr; struct pfioc_table* pfrio_buffer; TYPE_1__ pfrio_table; } ;
typedef int io ;
typedef int addr ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct pfr_addr*,int) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (void*,char const*,int *) ;
 scalar_t__ FUNC_2 (int ,int ,struct pfr_addr*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,char*,...) ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_6(int VAR_9, const char *VAR_10)
{
 struct pfioc_table VAR_11;
 struct pfr_addr VAR_12;

 FUNC_0(&VAR_11, sizeof(VAR_11));
 FUNC_4(VAR_11.pfrio_table.pfrt_name, VAR_8,
     sizeof(VAR_11.pfrio_table.pfrt_name));
 VAR_11.pfrio_buffer = &VAR_12;
 VAR_11.pfrio_esize = sizeof(VAR_12);
 VAR_11.pfrio_size = 1;

 FUNC_0(&VAR_12, sizeof(VAR_12));
 if (VAR_10 == ((void*)0) || !VAR_10[0])
  return (-1);
 if (FUNC_1(VAR_0, VAR_10, &VAR_12.pfra_ip4addr) == 1) {
  VAR_12.pfra_af = VAR_0;
  VAR_12.pfra_net = 32;
 } else if (FUNC_1(VAR_1, VAR_10, &VAR_12.pfra_ip6addr) == 1) {
  VAR_12.pfra_af = VAR_1;
  VAR_12.pfra_net = 128;
 } else {
  FUNC_5(VAR_5, "invalid ipsrc");
  return (-1);
 }

 if (FUNC_2(VAR_6, VAR_9 ? VAR_2 : VAR_3, &VAR_11) &&
     VAR_7 != VAR_4) {
  FUNC_5(VAR_5, "cannot %s %s from table %s: %s",
      VAR_9 ? "add" : "remove", VAR_10, VAR_8,
      FUNC_3(VAR_7));
  return (-1);
 }
 return (0);
}

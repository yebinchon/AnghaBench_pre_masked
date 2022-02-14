
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int m_len; } ;
struct m_tag {int dummy; } ;
struct ipfw_rule_ref {int info; } ;
struct ip_fw_args {int flags; struct ipfw_rule_ref rule; } ;
struct ip {int dummy; } ;
typedef int * hook_p ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int,int *,struct mbuf*) ;
 int * VAR_10 ;
 struct mbuf* FUNC_1 (struct mbuf*,int) ;
 int FUNC_2 (struct mbuf*) ;
 struct mbuf* FUNC_3 (struct mbuf*,int) ;
 struct m_tag* FUNC_4 (int ,int ,int,int) ;
 int FUNC_5 (struct mbuf*,struct m_tag*) ;
 int * FUNC_6 (int *,int ) ;

__attribute__((used)) static int
FUNC_7(struct mbuf **VAR_11, struct ip_fw_args *VAR_12, bool VAR_13)
{
 struct mbuf *VAR_14;
 hook_p VAR_15;
 int VAR_16 = 0;




 if (VAR_10 == ((void*)0) ||
    (VAR_15 = FUNC_6(VAR_10, VAR_12->rule.info)) == ((void*)0))
  return (VAR_2);






 if (VAR_13 == 0) {
  struct m_tag *VAR_17;
  struct ipfw_rule_ref *VAR_18;
  VAR_14 = *VAR_11;
  *VAR_11 = ((void*)0);

  VAR_17 = FUNC_4(VAR_7, 0, sizeof(*VAR_18),
   VAR_8|VAR_9);
  if (VAR_17 == ((void*)0)) {
   FUNC_2(VAR_14);
   return (VAR_1);
  }
  VAR_18 = (struct ipfw_rule_ref *)(VAR_17 + 1);
  *VAR_18 = VAR_12->rule;
  VAR_18->info &= VAR_6;
  VAR_18->info |= (VAR_12->flags & VAR_3) ?
      VAR_4 : VAR_5;
  FUNC_5(VAR_14, VAR_17);

 } else
  if ((VAR_14 = FUNC_1(*VAR_11, VAR_8)) == ((void*)0))
   return (VAR_1);

 if (VAR_14->m_len < sizeof(struct ip) &&
     (VAR_14 = FUNC_3(VAR_14, sizeof(struct ip))) == ((void*)0))
  return (VAR_0);

 FUNC_0(VAR_16, VAR_15, VAR_14);

 return (VAR_16);
}

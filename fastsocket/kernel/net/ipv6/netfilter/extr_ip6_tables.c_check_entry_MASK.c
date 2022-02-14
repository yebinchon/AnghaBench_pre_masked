
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ target_size; } ;
struct ip6t_entry_target {TYPE_1__ u; } ;
struct ip6t_entry {scalar_t__ target_offset; scalar_t__ next_offset; int ipv6; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct ip6t_entry*,char const*) ;
 int FUNC_1 (int *) ;
 struct ip6t_entry_target* FUNC_2 (struct ip6t_entry*) ;

__attribute__((used)) static int
FUNC_3(struct ip6t_entry *VAR_1, const char *VAR_2)
{
 struct ip6t_entry_target *VAR_3;

 if (!FUNC_1(&VAR_1->ipv6)) {
  FUNC_0("ip_tables: ip check failed %p %s.\n", VAR_1, VAR_2);
  return -VAR_0;
 }

 if (VAR_1->target_offset + sizeof(struct ip6t_entry_target) >
     VAR_1->next_offset)
  return -VAR_0;

 VAR_3 = FUNC_2(VAR_1);
 if (VAR_1->target_offset + VAR_3->u.target_size > VAR_1->next_offset)
  return -VAR_0;

 return 0;
}

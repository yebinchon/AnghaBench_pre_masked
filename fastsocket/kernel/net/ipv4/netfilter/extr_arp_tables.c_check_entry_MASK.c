
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ target_size; } ;
struct arpt_entry_target {TYPE_1__ u; } ;
struct arpt_entry {scalar_t__ target_offset; scalar_t__ next_offset; int arp; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct arpt_entry_target* FUNC_1 (struct arpt_entry*) ;
 int FUNC_2 (char*,struct arpt_entry*,char const*) ;

__attribute__((used)) static inline int FUNC_3(struct arpt_entry *VAR_1, const char *VAR_2)
{
 const struct arpt_entry_target *VAR_3;

 if (!FUNC_0(&VAR_1->arp)) {
  FUNC_2("arp_tables: arp check failed %p %s.\n", VAR_1, VAR_2);
  return -VAR_0;
 }

 if (VAR_1->target_offset + sizeof(struct arpt_entry_target) > VAR_1->next_offset)
  return -VAR_0;

 VAR_3 = FUNC_1(VAR_1);
 if (VAR_1->target_offset + VAR_3->u.target_size > VAR_1->next_offset)
  return -VAR_0;

 return 0;
}

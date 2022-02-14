
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct ck_rhs_entry_desc* descs; } ;
struct ck_rhs_map {unsigned long mask; unsigned long probe_maximum; TYPE_1__ entries; int read_mostly; } ;
struct ck_rhs_entry_desc {unsigned long probe_bound; } ;


 int FUNC_0 (unsigned long*,unsigned long) ;
 unsigned long VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned long*,unsigned long) ;

__attribute__((used)) static inline void
FUNC_3(struct ck_rhs_map *VAR_1,
    unsigned long VAR_2,
    unsigned long VAR_3)
{
 unsigned long VAR_4 = VAR_2 & VAR_1->mask;
 struct ck_rhs_entry_desc *VAR_5;

 if (VAR_3 > VAR_1->probe_maximum)
  FUNC_2(&VAR_1->probe_maximum, VAR_3);
 if (!(VAR_1->read_mostly)) {
  VAR_5 = &VAR_1->entries.descs[VAR_4];

  if (VAR_5->probe_bound < VAR_3) {
   if (VAR_3 > VAR_0)
    VAR_3 = VAR_0;

   FUNC_0(&VAR_5->probe_bound, VAR_3);
   FUNC_1();
  }
 }

 return;
}

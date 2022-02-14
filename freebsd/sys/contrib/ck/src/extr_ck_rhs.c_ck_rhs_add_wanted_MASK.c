
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ck_rhs_map {unsigned long mask; } ;
struct ck_rhs_entry_desc {scalar_t__ wanted; } ;
struct ck_rhs {struct ck_rhs_map* map; } ;


 scalar_t__ VAR_0 ;
 struct ck_rhs_entry_desc* FUNC_0 (struct ck_rhs_map*,long) ;
 long FUNC_1 (struct ck_rhs_map*,long,unsigned int) ;

__attribute__((used)) static void
FUNC_2(struct ck_rhs *VAR_1, long VAR_2, long VAR_3,
 unsigned long VAR_4)
{
 struct ck_rhs_map *VAR_5 = VAR_1->map;
 long VAR_6;
 unsigned int VAR_7 = 1;
 bool VAR_8 = 0;
 struct ck_rhs_entry_desc *VAR_9;

 VAR_6 = VAR_4 & VAR_5->mask;

 if (VAR_3 == -1)
  VAR_8 = 1;
 while (VAR_6 != VAR_2) {
  if (VAR_6 == VAR_3)
   VAR_8 = 1;
  if (VAR_8) {
   VAR_9 = FUNC_0(VAR_5, VAR_6);
   if (VAR_9->wanted < VAR_0)
    VAR_9->wanted++;
  }
  VAR_6 = FUNC_1(VAR_5, VAR_6, VAR_7);
  VAR_7++;
 }
}

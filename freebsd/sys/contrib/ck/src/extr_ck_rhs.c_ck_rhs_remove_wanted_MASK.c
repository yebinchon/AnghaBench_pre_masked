
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ck_rhs_map {int dummy; } ;
struct ck_rhs_entry_desc {scalar_t__ wanted; } ;
struct ck_rhs {struct ck_rhs_map* map; } ;


 scalar_t__ VAR_0 ;
 struct ck_rhs_entry_desc* FUNC_0 (struct ck_rhs_map*,long) ;
 long FUNC_1 (struct ck_rhs_map*,long,int) ;
 int FUNC_2 (struct ck_rhs_map*,long) ;

__attribute__((used)) static unsigned long
FUNC_3(struct ck_rhs *VAR_1, long VAR_2, long VAR_3)
{
 struct ck_rhs_map *VAR_4 = VAR_1->map;
 int VAR_5 = FUNC_2(VAR_4, VAR_2);
 bool VAR_6 = 1;
 struct ck_rhs_entry_desc *VAR_7;

 while (VAR_5 > 1) {
  VAR_5--;
  VAR_2 = FUNC_1(VAR_4, VAR_2, VAR_5);
  if (VAR_2 == VAR_3)
   VAR_6 = 0;
  if (VAR_6) {
   VAR_7 = FUNC_0(VAR_4, VAR_2);
   if (VAR_7->wanted != VAR_0)
    VAR_7->wanted--;
  }
 }
 return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct clknode {int enable_cnt; int flags; scalar_t__ parent_cnt; char* name; struct clknode* parent; scalar_t__ freq; } ;


 int FUNC_0 (struct clknode*,scalar_t__,scalar_t__*,int,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct clknode*,scalar_t__*) ;
 int FUNC_3 (struct clknode*,scalar_t__) ;
 int FUNC_4 (char*,char*,...) ;

int
FUNC_5(struct clknode *VAR_4, uint64_t VAR_5, int VAR_6,
    int VAR_7)
{
 int VAR_8, VAR_9;
 uint64_t VAR_10;


 FUNC_1();


 if (VAR_4->freq == VAR_5)
  return (0);

 VAR_10 = 0;







 if ((VAR_6 & VAR_1) == 0 &&
     VAR_4->enable_cnt > 1 &&
     VAR_4->enable_cnt > VAR_7 &&
     (VAR_4->flags & VAR_0) == 0) {
  return (VAR_2);
 }


 if (VAR_4->parent_cnt > 0) {
  VAR_8 = FUNC_2(VAR_4->parent, &VAR_10);
  if (VAR_8 != 0) {
   return (VAR_8);
  }
 }


 VAR_8 = FUNC_0(VAR_4, VAR_10, &VAR_5, VAR_6, &VAR_9);
 if (VAR_8 != 0) {
  FUNC_4("Cannot set frequency for clk: %s, error: %d\n",
      VAR_4->name, VAR_8);
  if ((VAR_6 & VAR_1) == 0)
   FUNC_3(VAR_4, VAR_10);
  return (VAR_8);
 }

 if (VAR_9) {

  if ((VAR_6 & VAR_1) == 0) {
   VAR_4->freq = VAR_5;

   if (VAR_4->parent_cnt > 0) {
    VAR_8 = FUNC_2(VAR_4->parent,
        &VAR_10);
    if (VAR_8 != 0) {
     return (VAR_8);
    }
   }
   FUNC_3(VAR_4, VAR_10);
  }
 } else if (VAR_4->parent != ((void*)0)) {

  VAR_8 = FUNC_5(VAR_4->parent, VAR_5, VAR_6, VAR_7);
 } else {

  FUNC_4("Cannot set frequency for clk: %s, end of chain\n",
      VAR_4->name);
  VAR_8 = VAR_3;
 }

 return (VAR_8);
}

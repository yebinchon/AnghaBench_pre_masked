
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hlist_head {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int FUNC_1 (unsigned long) ;
 struct hlist_head* FUNC_2 (unsigned long,int) ;

__attribute__((used)) static struct hlist_head *FUNC_3(int VAR_3)
{
 unsigned long VAR_4 = VAR_3 * sizeof(struct hlist_head);

 if (VAR_4 <= VAR_1) {
  return FUNC_2(VAR_4, VAR_0);
 } else {
  return (struct hlist_head *)
   FUNC_0(VAR_0 | VAR_2, FUNC_1(VAR_4));
 }
}

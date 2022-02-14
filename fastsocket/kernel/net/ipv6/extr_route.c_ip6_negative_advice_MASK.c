
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt6_info {int rt6i_flags; } ;
struct dst_entry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dst_entry*) ;
 int FUNC_1 (struct rt6_info*) ;

__attribute__((used)) static struct dst_entry *FUNC_2(struct dst_entry *VAR_1)
{
 struct rt6_info *VAR_2 = (struct rt6_info *) VAR_1;

 if (VAR_2) {
  if (VAR_2->rt6i_flags & VAR_0)
   FUNC_1(VAR_2);
  else
   FUNC_0(VAR_1);
 }
 return ((void*)0);
}

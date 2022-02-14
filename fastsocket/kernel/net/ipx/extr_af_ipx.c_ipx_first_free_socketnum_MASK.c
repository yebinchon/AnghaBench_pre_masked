
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipx_interface {unsigned short if_sknum; int if_sklist_lock; } ;
typedef int __be16 ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 scalar_t__ FUNC_0 (struct ipx_interface*,int ) ;
 int FUNC_1 (unsigned short) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static __be16 FUNC_4(struct ipx_interface *VAR_2)
{
 unsigned short VAR_3 = VAR_2->if_sknum;

 FUNC_2(&VAR_2->if_sklist_lock);

 if (VAR_3 < VAR_1)
  VAR_3 = VAR_1;

 while (FUNC_0(VAR_2, FUNC_1(VAR_3)))
  if (VAR_3 > VAR_0)
   VAR_3 = VAR_1;
  else
   VAR_3++;

 FUNC_3(&VAR_2->if_sklist_lock);
 VAR_2->if_sknum = VAR_3;

 return FUNC_1(VAR_3);
}

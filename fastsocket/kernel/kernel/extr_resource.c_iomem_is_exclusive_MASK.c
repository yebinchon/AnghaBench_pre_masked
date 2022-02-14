
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct resource {int start; int end; int flags; struct resource* child; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct resource VAR_4 ;
 struct resource* FUNC_0 (int *,struct resource*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_3(u64 VAR_7)
{
 struct resource *VAR_8 = &VAR_4;
 int VAR_9 = 0;
 loff_t VAR_10;
 int VAR_11 = VAR_3;

 if (!VAR_6)
  return 0;

 VAR_7 = VAR_7 & VAR_2;

 FUNC_1(&VAR_5);
 for (VAR_8 = VAR_8->child; VAR_8 ; VAR_8 = FUNC_0(((void*)0), VAR_8, &VAR_10)) {




  if (VAR_8->start >= VAR_7 + VAR_11)
   break;
  if (VAR_8->end < VAR_7)
   continue;
  if (VAR_8->flags & VAR_0 &&
       VAR_8->flags & VAR_1) {
   VAR_9 = 1;
   break;
  }
 }
 FUNC_2(&VAR_5);

 return VAR_9;
}

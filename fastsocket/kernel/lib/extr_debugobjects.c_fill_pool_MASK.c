
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct debug_obj {int node; } ;
typedef int gfp_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *) ;
 struct debug_obj* FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(void)
{
 gfp_t VAR_8 = VAR_0 | VAR_2 | VAR_3;
 struct debug_obj *VAR_9;
 unsigned long VAR_10;

 if (FUNC_2(VAR_6 >= VAR_1))
  return VAR_6;

 if (FUNC_5(!VAR_4))
  return VAR_6;

 while (VAR_6 < VAR_1) {

  VAR_9 = FUNC_1(VAR_4, VAR_8);
  if (!VAR_9)
   return VAR_6;

  FUNC_3(&VAR_7, VAR_10);
  FUNC_0(&VAR_9->node, &VAR_5);
  VAR_6++;
  FUNC_4(&VAR_7, VAR_10);
 }
 return VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsocket {scalar_t__ type; int state; int opts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct rsocket*) ;
 int VAR_5 ;
 struct rsocket* FUNC_1 (int *,int) ;
 int VAR_6 ;
 int FUNC_2 (struct rsocket*) ;
 int FUNC_3 (int *,struct rsocket*,int ) ;
 int FUNC_4 (int,int ) ;
 int VAR_7 ;

int FUNC_5(int VAR_8)
{
 struct rsocket *VAR_9;

 VAR_9 = FUNC_1(&VAR_5, VAR_8);
 if (!VAR_9)
  return VAR_0;
 if (VAR_9->type == VAR_4) {
  if (VAR_9->state & VAR_6)
   FUNC_4(VAR_8, VAR_3);
  else if (VAR_9->opts & VAR_1)
   FUNC_3(&VAR_7, VAR_9, VAR_2);
 } else {
  FUNC_0(VAR_9);
 }

 FUNC_2(VAR_9);
 return 0;
}

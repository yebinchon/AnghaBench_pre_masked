
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsocket {scalar_t__ state; int cm_id; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 struct rsocket* FUNC_1 (int *,int) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ VAR_2 ;

int FUNC_3(int VAR_3, int VAR_4)
{
 struct rsocket *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(&VAR_1, VAR_3);
 if (!VAR_5)
  return FUNC_0(VAR_0);

 if (VAR_5->state != VAR_2) {
  VAR_6 = FUNC_2(VAR_5->cm_id, VAR_4);
  if (!VAR_6)
   VAR_5->state = VAR_2;
 } else {
  VAR_6 = 0;
 }
 return VAR_6;
}

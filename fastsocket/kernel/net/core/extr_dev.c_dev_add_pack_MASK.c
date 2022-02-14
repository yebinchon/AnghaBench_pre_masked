
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packet_type {scalar_t__ type; int list; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct packet_type *VAR_5)
{
 int VAR_6;

 FUNC_3(&VAR_4);
 if (VAR_5->type == FUNC_0(VAR_0))
  FUNC_1(&VAR_5->list, &VAR_2);
 else {
  VAR_6 = FUNC_2(VAR_5->type) & VAR_1;
  FUNC_1(&VAR_5->list, &VAR_3[VAR_6]);
 }
 FUNC_4(&VAR_4);
}

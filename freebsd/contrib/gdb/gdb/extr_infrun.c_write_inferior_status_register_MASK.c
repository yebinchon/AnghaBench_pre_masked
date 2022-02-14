
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inferior_status {int registers; } ;
typedef int LONGEST ;


 int FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ,int,void*) ;
 int FUNC_3 (void*,int,int ) ;

void
FUNC_4 (struct inferior_status *VAR_0, int VAR_1,
    LONGEST VAR_2)
{
  int VAR_3 = FUNC_0 (VAR_1);
  void *VAR_4 = FUNC_1 (VAR_3);
  FUNC_3 (VAR_4, VAR_3, VAR_2);
  FUNC_2 (VAR_0->registers, VAR_1, VAR_4);
}

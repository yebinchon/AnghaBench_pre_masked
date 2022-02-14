
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intr_info {int member_0; char* member_1; int member_2; int member_3; } ;
typedef int adapter_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ,int,struct intr_info*,int *) ;

__attribute__((used)) static void FUNC_2(adapter_t *VAR_1)
{
 static struct intr_info VAR_2[] = {
  { 0x1ff, "MPS parity error", -1, 1 },
  { 0 }
 };

 if (FUNC_1(VAR_1, VAR_0, 0xffffffff,
      VAR_2, ((void*)0)))
  FUNC_0(VAR_1);
}

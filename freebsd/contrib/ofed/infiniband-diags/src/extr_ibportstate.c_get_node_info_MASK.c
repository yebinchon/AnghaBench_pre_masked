
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ib_portid_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int *,int ,int ,int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(ib_portid_t * VAR_4, uint8_t * VAR_5)
{
 int VAR_6;

 if (!FUNC_2(VAR_5, VAR_4, VAR_0, 0, 0, VAR_3))
  FUNC_0("smp query nodeinfo failed");

 VAR_6 = FUNC_1(VAR_5, 0, VAR_2);
 if (VAR_6 == VAR_1)
  return 1;
 else
  return 0;
}

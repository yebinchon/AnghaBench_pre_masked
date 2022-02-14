
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptid_t ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int,int ) ;

__attribute__((used)) static void
FUNC_3 (CORE_ADDR VAR_3, ptid_t VAR_4)
{
  FUNC_2 (VAR_0, VAR_3, VAR_4);


  if (VAR_2)
    {
      CORE_ADDR VAR_5 = FUNC_1 (VAR_1, VAR_4);
      if (FUNC_0 (VAR_3))
 FUNC_2 (VAR_1, VAR_5 | 0x20, VAR_4);
      else
 FUNC_2 (VAR_1, VAR_5 & ~(CORE_ADDR) 0x20, VAR_4);
    }
}

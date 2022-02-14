
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ CORE_ADDR ;


 int FUNC_0 (scalar_t__,scalar_t__,int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static CORE_ADDR
FUNC_3 (CORE_ADDR VAR_1)
{
  if (!FUNC_2 (VAR_0))
    {

      return VAR_1;
    }
  else
    {
      CORE_ADDR VAR_2;



      VAR_2 = FUNC_1 (VAR_0,
                                                           VAR_1);




      if (VAR_2 != VAR_1)
 FUNC_0 (VAR_1, VAR_2, 0, 0);

      return VAR_2;
    }
}

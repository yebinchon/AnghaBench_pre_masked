
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int t_inst ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,char**,scalar_t__*,int *) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*,char*,int) ;

__attribute__((used)) static CORE_ADDR
FUNC_5 (CORE_ADDR VAR_2)
{
  char *VAR_3;
  CORE_ADDR VAR_4;


  if (FUNC_0 (VAR_2, &VAR_3, &VAR_4, ((void*)0)) == 0)
    return 0;



  if (FUNC_3 (VAR_3, "__mips16_ret_sf") == 0
      || FUNC_3 (VAR_3, "__mips16_ret_df") == 0)
    return FUNC_2 (VAR_1);

  if (FUNC_4 (VAR_3, "__mips16_call_stub_", 19) == 0)
    {


      if (VAR_3[19] >= '0' && VAR_3[19] <= '9')
 return FUNC_2 (2);





      else if (VAR_3[19] == 's' || VAR_3[19] == 'd')
 {
   if (VAR_2 == VAR_4)
     {
       CORE_ADDR VAR_5 = FUNC_2 (2);
       t_inst VAR_6;
       int VAR_7;


       if (FUNC_0 (VAR_5, &VAR_3, ((void*)0), ((void*)0)) ==
    0)
  return VAR_5;
       if (FUNC_4 (VAR_3, "__fn_stub_", 10) != 0
    && FUNC_3 (VAR_3, "etext") != 0
    && FUNC_3 (VAR_3, "_etext") != 0)
  return VAR_5;




       for (VAR_7 = 0, VAR_2 = 0; VAR_7 < 20; VAR_7++, VAR_5 += VAR_0)
  {
    VAR_6 = FUNC_1 (VAR_5);
    if ((VAR_6 & 0xffff0000) == 0x3c010000)
      VAR_2 = (VAR_6 << 16) & 0xffff0000;
    else if ((VAR_6 & 0xffff0000) == 0x24210000)
      return VAR_2 | (VAR_6 & 0xffff);
  }


       return VAR_5;
     }
   else


     return FUNC_2 (18);
 }
    }
  return 0;
}

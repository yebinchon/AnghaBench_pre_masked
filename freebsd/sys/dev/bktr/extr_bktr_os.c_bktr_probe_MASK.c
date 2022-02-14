
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;




 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,char*) ;
 unsigned int FUNC_3 (int ) ;
 unsigned int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5( device_t VAR_3 )
{
 unsigned int VAR_4 = FUNC_3(VAR_3);
        unsigned int VAR_5 = FUNC_4(VAR_3);

 if (FUNC_1(VAR_4) == VAR_2)
 {
  switch (FUNC_0(VAR_4)) {
  case 131:
   if (VAR_5 == 0x12)
    FUNC_2(VAR_3, "BrookTree 848A");
   else
    FUNC_2(VAR_3, "BrookTree 848");
   return VAR_0;
  case 130:
   FUNC_2(VAR_3, "BrookTree 849A");
   return VAR_0;
  case 129:
   FUNC_2(VAR_3, "BrookTree 878");
   return VAR_0;
  case 128:
   FUNC_2(VAR_3, "BrookTree 879");
   return VAR_0;
  }
 }

        return VAR_1;
}

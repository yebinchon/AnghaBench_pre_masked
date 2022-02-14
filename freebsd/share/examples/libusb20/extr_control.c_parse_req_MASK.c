
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int bmRequestType; void* wLength; void* wIndex; void* wValue; int bRequest; } ;


 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (char*) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 void* FUNC_2 (char*,int ,int ) ;

__attribute__((used)) static int
FUNC_3(int VAR_2, char **VAR_3)
{
  int VAR_4;
  uint8_t VAR_5 = 0;

  for (VAR_4 = 0; VAR_2 != 0 && VAR_4 <= 6; VAR_2--, VAR_4++)
    switch (VAR_4)
      {
      case 0:

 if (*VAR_3[VAR_4] == 'i')
   VAR_5 |= 0x80;
 else if (*VAR_3[VAR_4] == 'o')
            ;
 else
   {
     FUNC_0(VAR_1, "request direction must be \"in\" or \"out\" (got %s)\n",
      VAR_3[VAR_4]);
     return -1;
   }
 break;

      case 1:

 if (*VAR_3[VAR_4] == 's')
            ;
 else if (*VAR_3[VAR_4] == 'c')
   VAR_5 |= 0x20;
 else if (*VAR_3[VAR_4] == 'v')
   VAR_5 |= 0x40;
 else
   {
     FUNC_0(VAR_1,
      "request type must be one of \"standard\", \"class\", or \"vendor\" (got %s)\n",
      VAR_3[VAR_4]);
     return -1;
   }
 break;

      case 2:

 if (*VAR_3[VAR_4] == 'd')
            ;
 else if (*VAR_3[VAR_4] == 'i')
   VAR_5 |= 1;
 else if (*VAR_3[VAR_4] == 'e')
   VAR_5 |= 2;
 else if (*VAR_3[VAR_4] == 'o')
   VAR_5 |= 3;
 else
   {
     FUNC_0(VAR_1,
      "recipient must be one of \"device\", \"interface\", \"endpoint\", or \"other\" (got %s)\n",
      VAR_3[VAR_4]);
     return -1;
   }
 VAR_0.bmRequestType = VAR_5;
 break;

      case 3:
 VAR_0.bRequest = FUNC_1(VAR_3[VAR_4]);
 break;

      case 4:
 VAR_0.wValue = FUNC_2(VAR_3[VAR_4], 0, 0);
 break;

      case 5:
 VAR_0.wIndex = FUNC_2(VAR_3[VAR_4], 0, 0);
 break;

      case 6:
 VAR_0.wLength = FUNC_2(VAR_3[VAR_4], 0, 0);
 break;
      }

  return VAR_2;
}

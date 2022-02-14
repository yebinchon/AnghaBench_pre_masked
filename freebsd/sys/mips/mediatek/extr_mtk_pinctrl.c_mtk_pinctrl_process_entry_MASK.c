
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct mtk_pin_group {int funcnum; int mask; int offset; int sysc_reg; TYPE_1__* functions; int * name; } ;
typedef int device_t ;
struct TYPE_2__ {int value; int * name; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int *,char const*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1, struct mtk_pin_group *VAR_2,
    const char *VAR_3, char *VAR_4)
{
 uint32_t VAR_5;
 int VAR_6 = 0, VAR_7, VAR_8;

 for (VAR_7 = 0; VAR_2[VAR_7].name != ((void*)0); VAR_7++) {
                if (FUNC_2(VAR_2[VAR_7].name, VAR_3) == 0) {
   VAR_6 = 1;
                        break;
  }
        }

 if (!VAR_6)
  return (VAR_0);

        for (VAR_8 = 0; VAR_8 < VAR_2[VAR_7].funcnum; VAR_8++) {
                if (FUNC_2(VAR_2[VAR_7].functions[VAR_8].name, VAR_4) == 0) {
                        VAR_5 = FUNC_0(VAR_2[VAR_7].sysc_reg);
                        VAR_5 &= ~(VAR_2[VAR_7].mask << VAR_2[VAR_7].offset);
                        VAR_5 |= (VAR_2[VAR_7].functions[VAR_8].value << VAR_2[VAR_7].offset);
                        FUNC_1(VAR_2[VAR_7].sysc_reg, VAR_5);
                        return (0);
  }
 }

 return (VAR_0);
}

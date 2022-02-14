
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct octeon_device {int dummy; } ;
struct lio_console {char* leftover; int (* print ) (struct octeon_device*,int ,char*,char*) ;} ;
typedef size_t int32_t ;


 size_t FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (struct octeon_device*,int ,char*,char*) ;
 int FUNC_3 (struct octeon_device*,int ,char*,char*) ;

__attribute__((used)) static void
FUNC_4(struct octeon_device *VAR_0, struct lio_console *VAR_1,
   size_t VAR_2, char *VAR_3,
   int32_t VAR_4)
{
 size_t VAR_5;
 int32_t VAR_6;
 char *VAR_7;

 VAR_7 = VAR_3;
 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {

  if (VAR_3[VAR_6] == '\n') {
   VAR_3[VAR_6] = '\0';







   if (VAR_1->leftover[0] &&
       (VAR_7 != VAR_1->leftover)) {
    if (VAR_1->print)
     (*VAR_1->print)(VAR_0,
         (uint32_t)VAR_2,
       VAR_1->leftover,VAR_7);
    VAR_1->leftover[0] = '\0';
   } else {
    if (VAR_1->print)
     (*VAR_1->print)(VAR_0,
         (uint32_t)VAR_2,
         VAR_7, ((void*)0));
   }

   VAR_7 = &VAR_3[VAR_6 + 1];
  }
 }


 if (VAR_7 != &VAR_3[VAR_4]) {
  VAR_3[VAR_4] = '\0';
  VAR_5 = FUNC_0(VAR_1->leftover);
  FUNC_1(&VAR_1->leftover[VAR_5], VAR_7,
   sizeof(VAR_1->leftover) - VAR_5);
 }
}

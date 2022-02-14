
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct vm {int dummy; } ;
struct vatpit {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct vatpit*) ;
 int FUNC_1 (struct vatpit*) ;
 scalar_t__ FUNC_2 (struct vatpit*,int) ;
 struct vatpit* FUNC_3 (struct vm*) ;

int
FUNC_4(struct vm *VAR_1, int VAR_2, bool VAR_3, int VAR_4, int VAR_5,
    uint32_t *VAR_6)
{
 struct vatpit *VAR_7;

 VAR_7 = FUNC_3(VAR_1);

 if (VAR_3) {
   FUNC_0(VAR_7);
   if (FUNC_2(VAR_7, 2))
    *VAR_6 = VAR_0;
   else
    *VAR_6 = 0;

   FUNC_1(VAR_7);
 }

 return (0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct libworker {int base; } ;






 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct libworker*,int *,int ) ;
 int FUNC_4 (struct libworker*,int *,int ) ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static void
FUNC_6(struct libworker* VAR_0, uint8_t* VAR_1, uint32_t VAR_2)
{
 switch(FUNC_1(VAR_1, VAR_2)) {
  default:
  case 131:
   FUNC_5("unknown command for bg worker %d",
    (int)FUNC_1(VAR_1, VAR_2));


  case 128:
   FUNC_2(VAR_1);
   FUNC_0(VAR_0->base);
   break;
  case 129:
   FUNC_4(VAR_0, VAR_1, VAR_2);
   break;
  case 130:
   FUNC_3(VAR_0, VAR_1, VAR_2);
   break;
 }
}

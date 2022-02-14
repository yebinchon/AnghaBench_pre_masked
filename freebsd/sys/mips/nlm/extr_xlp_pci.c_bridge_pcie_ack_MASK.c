
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int VAR_0 ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_7(int VAR_1, void *VAR_2)
{
 uint32_t VAR_3,VAR_4;
 uint64_t VAR_5;

 VAR_3 = FUNC_4();
 VAR_4 = VAR_0;

 switch (VAR_1) {
  case 131:
   VAR_5 = FUNC_5(FUNC_0(VAR_3));
   break;
  case 130:
   VAR_5 = FUNC_5(FUNC_1(VAR_3));
   break;
  case 129:
   VAR_5 = FUNC_5(FUNC_2(VAR_3));
   break;
  case 128:
   VAR_5 = FUNC_5(FUNC_3(VAR_3));
   break;
  default:
   return;
 }

 FUNC_6(VAR_5, VAR_4, 0xFFFFFFFF);
 return;
}

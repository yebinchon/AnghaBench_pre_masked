
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct ifnet {int if_index; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (struct ifnet*) ;
 struct ifnet* FUNC_4 (char*) ;

__attribute__((used)) static uint16_t
FUNC_5(char *VAR_1)
{
 struct ifnet *VAR_2;
 uint16_t VAR_3;

 if (VAR_1 == ((void*)0))
  return (0);
 FUNC_1(FUNC_2(VAR_0));
 VAR_2 = FUNC_4(VAR_1);
 FUNC_0();
 if (VAR_2 == ((void*)0))
  return (0);
 VAR_3 = VAR_2->if_index;
 FUNC_3(VAR_2);
 return (VAR_3);
}

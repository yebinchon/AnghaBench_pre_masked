
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ifnet {int dummy; } ;
typedef int caddr_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ifnet** VAR_4 ;
 int FUNC_3 (struct ifnet**,int ) ;
 struct ifnet** FUNC_4 (int,int ,int) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static void *
FUNC_6(void)
{
 int VAR_5;
 u_int VAR_6;
 struct ifnet **VAR_7;
 void *VAR_8;

 VAR_8 = ((void*)0);
 FUNC_1();
 VAR_5 = VAR_3;
 FUNC_2();
 VAR_6 = (VAR_5 << 1) * sizeof(*VAR_7);
 VAR_7 = FUNC_4(VAR_6, VAR_0, VAR_1 | VAR_2);
 FUNC_0();
 if (VAR_3 != VAR_5) {
  FUNC_3(VAR_7, VAR_0);
  return (((void*)0));
 }
 if (VAR_4 != ((void*)0)) {
  FUNC_5((caddr_t)VAR_7, (caddr_t)VAR_4, VAR_6/2);
  VAR_8 = VAR_4;
 }
 VAR_3 <<= 1;
 VAR_4 = VAR_7;
 return (VAR_8);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int (* if_ioctl ) (struct ifnet*,int ,int ) ;int if_vnet; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct ifnet*,char*,int) ;
 int FUNC_3 (struct ifnet*,int ,int ) ;

__attribute__((used)) static void
FUNC_4(void *VAR_1, int VAR_2)
{
 struct ifnet *VAR_3;

 VAR_3 = VAR_1;




 FUNC_1(VAR_3->if_vnet);
 (void )(*VAR_3->if_ioctl)(VAR_3, VAR_0, 0);
 FUNC_0();
}

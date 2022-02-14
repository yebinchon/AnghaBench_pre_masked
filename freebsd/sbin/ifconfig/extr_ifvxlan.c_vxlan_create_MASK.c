
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifreq {scalar_t__ ifr_data; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int,int ,struct ifreq*) ;
 int VAR_1 ;
 int FUNC_2 () ;

__attribute__((used)) static void
FUNC_3(int VAR_2, struct ifreq *VAR_3)
{

 FUNC_2();

 VAR_3->ifr_data = (caddr_t) &VAR_1;
 if (FUNC_1(VAR_2, VAR_0, VAR_3) < 0)
  FUNC_0(1, "SIOCIFCREATE2");
}

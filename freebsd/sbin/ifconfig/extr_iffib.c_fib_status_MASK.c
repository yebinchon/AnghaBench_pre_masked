
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifreq {scalar_t__ ifr_fib; int ifr_name; } ;
typedef int ifr ;
typedef int caddr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int ,int ) ;
 int FUNC_1 (struct ifreq*,int ,int) ;
 int VAR_3 ;
 int FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_4(int VAR_4)
{
 struct ifreq VAR_5;

 FUNC_1(&VAR_5, 0, sizeof(VAR_5));
 FUNC_3(VAR_5.ifr_name, VAR_3, sizeof(VAR_5.ifr_name));
 if (FUNC_0(VAR_4, VAR_1, (caddr_t)&VAR_5) == 0 &&
     VAR_5.ifr_fib != VAR_0)
  FUNC_2("\tfib: %u\n", VAR_5.ifr_fib);

 FUNC_1(&VAR_5, 0, sizeof(VAR_5));
 FUNC_3(VAR_5.ifr_name, VAR_3, sizeof(VAR_5.ifr_name));
 if (FUNC_0(VAR_4, VAR_2, (caddr_t)&VAR_5) == 0 &&
     VAR_5.ifr_fib != VAR_0)
  FUNC_2("\ttunnelfib: %u\n", VAR_5.ifr_fib);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * sa_data; int sa_family; scalar_t__ sa_len; } ;
struct ifreq {TYPE_1__ ifr_addr; } ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int,int ,int ) ;
 int FUNC_3 (char*,int *,scalar_t__) ;

void
FUNC_4(void)
{
 struct ifreq VAR_7;

 if (VAR_3 != ((void*)0)) {
  FUNC_1((char *)VAR_3);
  VAR_3 = ((void*)0);
 }

 if (VAR_2 == -1)
  return;




 VAR_7.ifr_addr.sa_family = VAR_0;
 FUNC_3((char *)&VAR_7.ifr_addr.sa_data[0], &VAR_5[0], VAR_4);
 if (FUNC_2(VAR_2, VAR_6, (caddr_t)&VAR_7) < 0)
  (void) FUNC_2(VAR_2, VAR_1, (caddr_t)0);

 (void) FUNC_0(VAR_2);
 VAR_2 = -1;
}

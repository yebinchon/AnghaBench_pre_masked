
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifreq {scalar_t__ ifr_data; } ;
typedef scalar_t__ caddr_t ;
struct TYPE_2__ {scalar_t__ vlr_tag; char* vlr_parent; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,int ,scalar_t__) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static void
FUNC_2(int VAR_3, struct ifreq *VAR_4)
{
 if (VAR_2.vlr_tag != VAR_0 && VAR_2.vlr_parent[0] != '\0') {
  VAR_4->ifr_data = (caddr_t) &VAR_2;
  if (FUNC_1(VAR_3, VAR_1, (caddr_t)VAR_4) == -1)
   FUNC_0(1, "SIOCSETVLAN");
 }
}

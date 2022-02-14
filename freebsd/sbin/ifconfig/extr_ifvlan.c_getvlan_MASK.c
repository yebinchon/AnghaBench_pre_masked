
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlanreq {int dummy; } ;
struct ifreq {scalar_t__ ifr_data; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_2(int VAR_1, struct ifreq *VAR_2, struct vlanreq *VAR_3)
{
 FUNC_0((char *)VAR_3, sizeof(*VAR_3));
 VAR_2->ifr_data = (caddr_t)VAR_3;

 return FUNC_1(VAR_1, VAR_0, (caddr_t)VAR_2);
}

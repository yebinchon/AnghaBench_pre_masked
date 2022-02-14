
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifreq {int dummy; } ;
struct ifconf {int ifc_len; int * ifc_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int,int ,struct ifconf*) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_4(void)
{
 int VAR_4, VAR_5;
 struct ifconf VAR_6;

 VAR_4 = FUNC_3(VAR_0, VAR_3, 0);
 if (VAR_4 == -1)
  FUNC_1(VAR_1, "socket");

 VAR_6.ifc_len = 0;
 VAR_6.ifc_buf = ((void*)0);

 VAR_5 = FUNC_2(VAR_4, VAR_2, &VAR_6);
 if (VAR_5 == -1)
  FUNC_1(VAR_1, "ioctl");

 FUNC_0(VAR_4);

 return VAR_6.ifc_len / sizeof(struct ifreq);
}

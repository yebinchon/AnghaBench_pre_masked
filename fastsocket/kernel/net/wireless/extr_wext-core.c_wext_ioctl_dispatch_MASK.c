
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wext_ioctl_func ;
struct net {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct ifreq {int ifr_name; } ;


 int FUNC_0 (struct net*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (struct net*,struct ifreq*,unsigned int,struct iw_request_info*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct net *VAR_0, struct ifreq *VAR_1,
          unsigned int VAR_2, struct iw_request_info *VAR_3,
          wext_ioctl_func VAR_4,
          wext_ioctl_func VAR_5)
{
 int VAR_6 = FUNC_3(VAR_2);

 if (VAR_6)
  return VAR_6;

 FUNC_0(VAR_0, VAR_1->ifr_name);
 FUNC_1();
 VAR_6 = FUNC_4(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 FUNC_2();

 return VAR_6;
}

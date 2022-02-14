
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_mc_list {int loaded; scalar_t__ crcount; int lock; int multiaddr; struct in_device* interface; } ;
struct in_device {scalar_t__ mr_qrv; scalar_t__ dead; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct in_device*) ;
 scalar_t__ FUNC_1 (struct in_device*) ;
 int FUNC_2 (struct in_device*) ;
 int FUNC_3 (struct ip_mc_list*,int ) ;
 int FUNC_4 (struct in_device*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct ip_mc_list *VAR_3)
{
 struct in_device *VAR_4 = VAR_3->interface;

 if (VAR_3->loaded == 0) {
  VAR_3->loaded = 1;
  FUNC_4(VAR_4, VAR_3->multiaddr);
 }
}

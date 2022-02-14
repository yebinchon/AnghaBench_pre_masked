
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct net_device* FUNC_0 (struct net*,char const*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,char const*) ;

void FUNC_6(struct net *VAR_3, const char *VAR_4)
{
 struct net_device *VAR_5;
 int VAR_6;

 FUNC_3(&VAR_2);
 VAR_5 = FUNC_0(VAR_3, VAR_4);
 FUNC_4(&VAR_2);

 VAR_6 = !VAR_5;
 if (VAR_6 && FUNC_1(VAR_0))
  VAR_6 = FUNC_5("netdev-%s", VAR_4);
 if (VAR_6 && FUNC_1(VAR_1)) {
  if (!FUNC_5("%s", VAR_4))
   FUNC_2("Loading kernel module for a network device "
"with CAP_SYS_MODULE (deprecated).  Use CAP_NET_ADMIN and alias netdev-%s "
"instead\n", VAR_4);
 }
}

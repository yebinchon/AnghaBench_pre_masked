
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int name; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,int *) ;
 int FUNC_1 (struct net_device*) ;
 int VAR_1 ;
 int FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (struct net_device*) ;
 struct net_device* FUNC_4 (struct net*,char const*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int ,char) ;
 int FUNC_9 (struct net_device*) ;

int FUNC_10(struct net *VAR_2, const char *VAR_3)
{
 struct net_device *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_4(VAR_2, VAR_3);
 if (!VAR_4)
  return -VAR_0;

 FUNC_6();
 if (FUNC_8(VAR_4->name, '%')) {
  VAR_5 = FUNC_2(VAR_4, VAR_4->name);
  if (VAR_5 < 0)
   goto out_free;
 }

 FUNC_0(VAR_4, &VAR_1);

 VAR_5 = FUNC_5(VAR_4);
 if (VAR_5)
  goto out_free;

 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5)
  FUNC_9(VAR_4);
 out:
 FUNC_7();
 return VAR_5;

out_free:
 FUNC_3(VAR_4);
 goto out;
}

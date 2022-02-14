
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {scalar_t__ type; int sk; int state; } ;
struct netlink_sock {struct module* module; } ;
struct net {int dummy; } ;
struct mutex {int dummy; } ;
struct module {int dummy; } ;
struct TYPE_2__ {struct mutex* cb_mutex; struct module* module; scalar_t__ registered; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct net*,struct socket*,struct mutex*,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct module*) ;
 int FUNC_4 () ;
 int VAR_7 ;
 int FUNC_5 () ;
 TYPE_1__* VAR_8 ;
 struct netlink_sock* FUNC_6 (int ) ;
 int FUNC_7 (char*,int ,int) ;
 int FUNC_8 (struct net*,int *,int) ;
 scalar_t__ FUNC_9 (struct module*) ;

__attribute__((used)) static int FUNC_10(struct net *VAR_9, struct socket *VAR_10, int VAR_11,
     int VAR_12)
{
 struct module *VAR_13 = ((void*)0);
 struct mutex *VAR_14;
 struct netlink_sock *VAR_15;
 int VAR_16 = 0;

 VAR_10->state = VAR_6;

 if (VAR_10->type != VAR_5 && VAR_10->type != VAR_4)
  return -VAR_1;

 if (VAR_11 < 0 || VAR_11 >= VAR_2)
  return -VAR_0;

 FUNC_4();







 if (VAR_8[VAR_11].registered &&
     FUNC_9(VAR_8[VAR_11].module))
  VAR_13 = VAR_8[VAR_11].module;
 else
  VAR_16 = -VAR_0;
 VAR_14 = VAR_8[VAR_11].cb_mutex;
 FUNC_5();

 if (VAR_16 < 0)
  goto out;

 VAR_16 = FUNC_0(VAR_9, VAR_10, VAR_14, VAR_11);
 if (VAR_16 < 0)
  goto out_module;

 FUNC_1();
 FUNC_8(VAR_9, &VAR_7, 1);
 FUNC_2();

 VAR_15 = FUNC_6(VAR_10->sk);
 VAR_15->module = VAR_13;
out:
 return VAR_16;

out_module:
 FUNC_3(VAR_13);
 goto out;
}

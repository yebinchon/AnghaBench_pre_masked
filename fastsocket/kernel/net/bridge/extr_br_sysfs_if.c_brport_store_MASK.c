
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_bridge_port {TYPE_1__* br; scalar_t__ dev; } ;
struct kobject {int dummy; } ;
struct brport_attribute {size_t (* store ) (struct net_bridge_port*,unsigned long) ;} ;
struct attribute {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ) ;
 size_t FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 unsigned long FUNC_4 (char const*,char**,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 size_t FUNC_7 (struct net_bridge_port*,unsigned long) ;
 struct net_bridge_port* FUNC_8 (struct kobject*) ;
 struct brport_attribute* FUNC_9 (struct attribute*) ;

__attribute__((used)) static ssize_t FUNC_10(struct kobject * VAR_3,
       struct attribute * VAR_4,
       const char * VAR_5, size_t VAR_6)
{
 struct brport_attribute * VAR_7 = FUNC_9(VAR_4);
 struct net_bridge_port * VAR_8 = FUNC_8(VAR_3);
 ssize_t VAR_9 = -VAR_1;
 char *VAR_10;
 unsigned long VAR_11;

 if (!FUNC_0(VAR_0))
  return -VAR_2;

 VAR_11 = FUNC_4(VAR_5, &VAR_10, 0);
 if (VAR_10 != VAR_5) {
  if (!FUNC_2())
   return FUNC_1();
  if (VAR_8->dev && VAR_8->br && VAR_7->store) {
   FUNC_5(&VAR_8->br->lock);
   VAR_9 = VAR_7->store(VAR_8, VAR_11);
   FUNC_6(&VAR_8->br->lock);
   if (VAR_9 == 0)
    VAR_9 = VAR_6;
  }
  FUNC_3();
 }
 return VAR_9;
}

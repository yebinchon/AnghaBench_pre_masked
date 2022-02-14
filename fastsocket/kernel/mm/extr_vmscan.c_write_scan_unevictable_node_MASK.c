
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zone {int dummy; } ;
struct sysdev_attribute {int dummy; } ;
struct sys_device {int id; } ;
typedef int ssize_t ;
struct TYPE_2__ {struct zone* node_zones; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (struct zone*) ;
 int FUNC_2 (struct zone*) ;
 unsigned long FUNC_3 (char const*,int,unsigned long*) ;

__attribute__((used)) static ssize_t FUNC_4(struct sys_device *VAR_1,
        struct sysdev_attribute *VAR_2,
     const char *VAR_3, size_t VAR_4)
{
 struct zone *VAR_5 = FUNC_0(VAR_1->id)->node_zones;
 struct zone *VAR_6;
 unsigned long VAR_7;
 unsigned long VAR_8 = FUNC_3(VAR_3, 10, &VAR_7);

 if (!VAR_8)
  return 1;

 for (VAR_6 = VAR_5; VAR_6 - VAR_5 < VAR_0; ++VAR_6) {
  if (!FUNC_1(VAR_6))
   continue;
  FUNC_2(VAR_6);
 }
 return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rfkill {int lock; int state; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (char*,char*,int) ;
 struct rfkill* FUNC_3 (struct device*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0,
     struct device_attribute *VAR_1,
     char *VAR_2)
{
 struct rfkill *VAR_3 = FUNC_3(VAR_0);
 unsigned long VAR_4;
 u32 VAR_5;

 FUNC_0(&VAR_3->lock, VAR_4);
 VAR_5 = VAR_3->state;
 FUNC_1(&VAR_3->lock, VAR_4);

 return FUNC_2(VAR_2, "%d\n", FUNC_4(VAR_5));
}

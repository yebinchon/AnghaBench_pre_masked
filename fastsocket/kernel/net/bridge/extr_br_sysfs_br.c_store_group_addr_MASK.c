
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_bridge {int* group_addr; int lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char const*,char*,int*,int*,int*,int*,int*,int*) ;
 struct net_bridge* FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_3,
    struct device_attribute *VAR_4,
    const char *VAR_5, size_t VAR_6)
{
 struct net_bridge *VAR_7 = FUNC_5(VAR_3);
 u8 VAR_8[6];
 int VAR_9;

 if (!FUNC_0(VAR_0))
  return -VAR_2;

 if (FUNC_4(VAR_5, "%hhx:%hhx:%hhx:%hhx:%hhx:%hhx",
     &VAR_8[0], &VAR_8[1], &VAR_8[2],
     &VAR_8[3], &VAR_8[4], &VAR_8[5]) != 6)
  return -VAR_1;

 if (!FUNC_1(VAR_8))
  return -VAR_1;

 if (VAR_8[5] == 1
     || VAR_8[5] == 2
     || VAR_8[5] == 3)
  return -VAR_1;

 FUNC_2(&VAR_7->lock);
 for (VAR_9 = 0; VAR_9 < 6; VAR_9++)
  VAR_7->group_addr[VAR_9] = VAR_8[VAR_9];
 FUNC_3(&VAR_7->lock);
 return VAR_6;
}

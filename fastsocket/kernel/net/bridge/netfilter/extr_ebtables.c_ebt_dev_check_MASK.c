
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {char* name; } ;



__attribute__((used)) static inline int FUNC_0(char *VAR_0, const struct net_device *VAR_1)
{
 int VAR_2 = 0;
 const char *VAR_3;

 if (*VAR_0 == '\0')
  return 0;
 if (!VAR_1)
  return 1;
 VAR_3 = VAR_1->name;

 while (VAR_0[VAR_2] != '\0' && VAR_0[VAR_2] != 1 && VAR_0[VAR_2] == VAR_3[VAR_2])
  VAR_2++;
 return (VAR_3[VAR_2] != VAR_0[VAR_2] && VAR_0[VAR_2] != 1);
}

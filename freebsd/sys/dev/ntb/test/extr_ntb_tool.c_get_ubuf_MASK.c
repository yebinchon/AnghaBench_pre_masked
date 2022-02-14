
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_req {size_t newlen; } ;


 int VAR_0 ;
 int FUNC_0 (struct sysctl_req*,char*,size_t) ;
 size_t VAR_1 ;

__attribute__((used)) static inline int
FUNC_1(struct sysctl_req *VAR_2, char *VAR_3)
{
 int VAR_4;

 if (VAR_2->newlen >= VAR_1)
  return (VAR_0);

 VAR_4 = FUNC_0(VAR_2, VAR_3, VAR_2->newlen);
 if (VAR_4)
  return (VAR_4);
 VAR_3[VAR_2->newlen] = '\0';

 return (0);
}

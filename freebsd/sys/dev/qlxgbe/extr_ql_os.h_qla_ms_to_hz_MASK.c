
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; int tv_usec; } ;


 int FUNC_0 (struct timeval*) ;

__attribute__((used)) static __inline int FUNC_1(int VAR_0)
{
 int VAR_1;

 struct timeval VAR_2;

 VAR_2.tv_sec = VAR_0 / 1000;
 VAR_2.tv_usec = (VAR_0 % 1000) * 1000;

 VAR_1 = FUNC_0(&VAR_2);

 if (VAR_1 < 0)
  VAR_1 = 0x7fffffff;
 if (!VAR_1)
  VAR_1 = 1;

 return (VAR_1);
}

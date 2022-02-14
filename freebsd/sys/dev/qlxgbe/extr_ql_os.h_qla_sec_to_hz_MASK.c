
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; scalar_t__ tv_usec; } ;


 int FUNC_0 (struct timeval*) ;

__attribute__((used)) static __inline int FUNC_1(int VAR_0)
{
 struct timeval VAR_1;

 VAR_1.tv_sec = VAR_0;
 VAR_1.tv_usec = 0;

 return (FUNC_0(&VAR_1));
}

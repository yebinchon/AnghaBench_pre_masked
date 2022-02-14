
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
struct timespec {int dummy; } ;


 int FUNC_0 (struct timeval*,struct timespec const*) ;
 int FUNC_1 (struct timeval*) ;

__attribute__((used)) static inline int
FUNC_2(const struct timespec *VAR_0)
{
 struct timeval VAR_1;

 FUNC_0(&VAR_1, VAR_0);
 return FUNC_1(&VAR_1);
}

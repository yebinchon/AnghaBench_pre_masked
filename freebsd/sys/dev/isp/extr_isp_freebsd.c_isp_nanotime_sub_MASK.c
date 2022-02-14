
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct timespec {int dummy; } ;


 scalar_t__ FUNC_0 (struct timespec*) ;
 int FUNC_1 (struct timespec*,struct timespec*,struct timespec*) ;

uint64_t
FUNC_2(struct timespec *VAR_0, struct timespec *VAR_1)
{
 uint64_t VAR_2;
 struct timespec VAR_3;

 FUNC_1(VAR_0, VAR_1, &VAR_3);
 VAR_2 = FUNC_0(&VAR_3);
 if (VAR_2 == 0)
  VAR_2++;
 return (VAR_2);
}

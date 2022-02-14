
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
struct timespec {int dummy; } ;


 int FUNC_0 (struct timeval*,struct timespec*) ;
 int FUNC_1 (int,struct timespec*) ;
 int FUNC_2 (struct timeval*) ;

__attribute__((used)) static int
FUNC_3(int VAR_0)
{
 struct timeval VAR_1;
 struct timespec VAR_2;

 FUNC_1(VAR_0, &VAR_2);
 FUNC_0(&VAR_1, &VAR_2);
 return (FUNC_2(&VAR_1));
}

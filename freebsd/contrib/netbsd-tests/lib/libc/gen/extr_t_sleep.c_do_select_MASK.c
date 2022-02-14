
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
struct timespec {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct timeval*,struct timespec*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int *,int *,int *,struct timeval*) ;

int
FUNC_2(struct timespec *VAR_2, struct timespec *VAR_3)
{
 int VAR_4;
 struct timeval VAR_5;

 FUNC_0(&VAR_5, VAR_2);
 if (FUNC_1(0, ((void*)0), ((void*)0), ((void*)0), &VAR_5) == -1)
  VAR_4 = (VAR_1 == VAR_0 ? 0 : VAR_1);
 else
  VAR_4 = 0;
 return VAR_4;
}

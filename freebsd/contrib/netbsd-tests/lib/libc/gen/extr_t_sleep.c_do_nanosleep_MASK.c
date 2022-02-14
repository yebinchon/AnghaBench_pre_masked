
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct timespec*,struct timespec*) ;

int
FUNC_1(struct timespec *VAR_2, struct timespec *VAR_3)
{
 int VAR_4;

 if (FUNC_0(VAR_2, VAR_3) == -1)
  VAR_4 = (VAR_1 == VAR_0 ? 0 : VAR_1);
 else
  VAR_4 = 0;
 return VAR_4;
}

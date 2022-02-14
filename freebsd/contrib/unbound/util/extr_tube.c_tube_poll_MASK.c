
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int t ;
struct tube {int sr; } ;
struct timeval {int dummy; } ;


 int FUNC_0 (struct timeval*,int ,int) ;
 int FUNC_1 (int ,struct timeval*) ;

int FUNC_2(struct tube* VAR_0)
{
 struct timeval VAR_1;
 FUNC_0(&VAR_1, 0, sizeof(VAR_1));
 return FUNC_1(VAR_0->sr, &VAR_1);
}

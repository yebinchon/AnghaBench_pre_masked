
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct TYPE_2__ {int sa; } ;
struct logininfo {TYPE_1__ hostaddr; } ;


 int FUNC_0 (int *,struct sockaddr const*,unsigned int) ;

void
FUNC_1(struct logininfo *VAR_0, const struct sockaddr *VAR_1,
    const unsigned int VAR_2)
{
 unsigned int VAR_3 = VAR_2;


 if (sizeof(VAR_0->hostaddr) < VAR_2)
  VAR_3 = sizeof(VAR_0->hostaddr);

 FUNC_0(&VAR_0->hostaddr.sa, VAR_1, VAR_3);
}

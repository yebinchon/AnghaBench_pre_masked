
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_consumer {TYPE_1__* provider; } ;
typedef int off_t ;
struct TYPE_2__ {int sectorsize; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 void* FUNC_1 (struct g_consumer*,int,int,int *) ;

int
FUNC_2(void *VAR_1, off_t VAR_2, void **VAR_3, int VAR_4)
{
 struct g_consumer *VAR_5;

 FUNC_0(*VAR_3 == ((void*)0),
     ("g_use_g_read_data: non-NULL *bufp %p\n", *VAR_3));

 VAR_5 = (struct g_consumer *)VAR_1;






 if (VAR_2 % VAR_5->provider->sectorsize != 0)
  return (VAR_0);
 *VAR_3 = FUNC_1(VAR_5, VAR_2, VAR_4, ((void*)0));
 if (*VAR_3 == ((void*)0))
  return (VAR_0);
 return (0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
struct thread {int dummy; } ;
struct g_provider {TYPE_1__* geom; } ;
struct g_geom {int (* ioctl ) (TYPE_2__*,int ,void*,int,struct thread*) ;} ;
struct g_consumer {TYPE_2__* provider; } ;
struct TYPE_4__ {struct g_geom* geom; } ;
struct TYPE_3__ {int consumer; } ;


 int VAR_0 ;
 struct g_consumer* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,int ,void*,int,struct thread*) ;

__attribute__((used)) static int
FUNC_2(struct g_provider *VAR_1, u_long VAR_2, void *VAR_3, int VAR_4,
    struct thread *VAR_5)
{
 struct g_consumer *VAR_6;
 struct g_geom *VAR_7;

 VAR_6 = FUNC_0(&VAR_1->geom->consumer);
 if (VAR_6 == ((void*)0))
  return (VAR_0);
 VAR_7 = VAR_6->provider->geom;
 if (VAR_7->ioctl == ((void*)0))
  return (VAR_0);
 return (VAR_7->ioctl(VAR_6->provider, VAR_2, VAR_3, VAR_4, VAR_5));
}

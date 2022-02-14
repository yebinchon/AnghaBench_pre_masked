
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct thread {int dummy; } ;
struct g_provider {TYPE_1__* geom; } ;
struct g_part_table {int dummy; } ;
struct TYPE_2__ {struct g_part_table* softc; } ;


 int FUNC_0 (struct g_part_table*,struct g_provider*,int ,void*,int,struct thread*) ;

__attribute__((used)) static int
FUNC_1(struct g_provider *VAR_0, u_long VAR_1, void *VAR_2, int VAR_3, struct thread *VAR_4)
{
 struct g_part_table *VAR_5;

 VAR_5 = VAR_0->geom->softc;
 return FUNC_0(VAR_5, VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}

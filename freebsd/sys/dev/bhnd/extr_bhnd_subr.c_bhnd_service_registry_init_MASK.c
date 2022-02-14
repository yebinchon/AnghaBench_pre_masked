
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_service_registry {int lock; int entries; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int *,int ) ;

int
FUNC_2(struct bhnd_service_registry *VAR_1)
{
 FUNC_0(&VAR_1->entries);
 FUNC_1(&VAR_1->lock, "bhnd_service_registry lock", ((void*)0), VAR_0);

 return (0);
}

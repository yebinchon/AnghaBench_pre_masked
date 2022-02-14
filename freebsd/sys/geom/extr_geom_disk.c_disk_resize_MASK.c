
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct disk {int * d_geom; scalar_t__ d_destroyed; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct disk*,int,int *) ;

int
FUNC_1(struct disk *VAR_1, int VAR_2)
{

 if (VAR_1->d_destroyed || VAR_1->d_geom == ((void*)0))
  return (0);

 return (FUNC_0(VAR_0, VAR_1, VAR_2, ((void*)0)));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcma_sport {int sp_maps; scalar_t__ sp_num_maps; int sp_type; int sp_num; } ;
typedef int bhnd_port_type ;
typedef int bcma_pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct bcma_sport* FUNC_1 (int,int ,int ) ;

struct bcma_sport *
FUNC_2(bcma_pid_t VAR_2, bhnd_port_type VAR_3)
{
 struct bcma_sport *VAR_4;

 VAR_4 = FUNC_1(sizeof(struct bcma_sport), VAR_0, VAR_1);
 if (VAR_4 == ((void*)0))
  return ((void*)0);

 VAR_4->sp_num = VAR_2;
 VAR_4->sp_type = VAR_3;
 VAR_4->sp_num_maps = 0;
 FUNC_0(&VAR_4->sp_maps);

 return VAR_4;
}

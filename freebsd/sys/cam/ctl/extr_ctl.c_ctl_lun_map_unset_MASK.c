
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct ctl_port {size_t* lun_map; size_t lun_map_size; int status; int targ_lun_arg; int (* lun_disable ) (int ,size_t) ;} ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct ctl_port*) ;
 int FUNC_1 (int ,size_t) ;

int
FUNC_2(struct ctl_port *VAR_2, uint32_t VAR_3)
{
 uint32_t VAR_4;

 if (VAR_2->lun_map == ((void*)0) || VAR_3 >= VAR_2->lun_map_size)
  return (0);
 VAR_4 = VAR_2->lun_map[VAR_3];
 VAR_2->lun_map[VAR_3] = VAR_1;
 if ((VAR_2->status & VAR_0) && VAR_4 != VAR_1) {
  if (VAR_2->lun_disable != ((void*)0))
   VAR_2->lun_disable(VAR_2->targ_lun_arg, VAR_3);
  FUNC_0(VAR_2);
 }
 return (0);
}

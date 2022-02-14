
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct ctl_port {size_t* lun_map; size_t lun_map_size; int status; int targ_lun_arg; int (* lun_enable ) (int ,size_t) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct ctl_port*) ;
 int FUNC_1 (struct ctl_port*) ;
 int FUNC_2 (int ,size_t) ;

int
FUNC_3(struct ctl_port *VAR_3, uint32_t VAR_4, uint32_t VAR_5)
{
 int VAR_6;
 uint32_t VAR_7;

 if (VAR_3->lun_map == ((void*)0)) {
  VAR_6 = FUNC_1(VAR_3);
  if (VAR_6 != 0)
   return (VAR_6);
 }
 if (VAR_4 >= VAR_3->lun_map_size)
  return (VAR_1);
 VAR_7 = VAR_3->lun_map[VAR_4];
 VAR_3->lun_map[VAR_4] = VAR_5;
 if ((VAR_3->status & VAR_0) && VAR_7 == VAR_2) {
  if (VAR_3->lun_enable != ((void*)0))
   VAR_3->lun_enable(VAR_3->targ_lun_arg, VAR_4);
  FUNC_0(VAR_3);
 }
 return (0);
}

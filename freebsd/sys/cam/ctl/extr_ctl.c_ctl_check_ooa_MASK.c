
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ctl_io {int io_hdr; } ;
struct ctl_lun {int lun_lock; } ;
typedef scalar_t__ ctl_action ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ,int ) ;
 scalar_t__ FUNC_1 (struct ctl_lun*,union ctl_io*,union ctl_io*) ;
 int VAR_2 ;
 int FUNC_2 (int *,int ) ;
 int VAR_3 ;

__attribute__((used)) static ctl_action
FUNC_3(struct ctl_lun *VAR_4, union ctl_io *VAR_5,
       union ctl_io **VAR_6)
{
 union ctl_io *VAR_7;
 ctl_action VAR_8;

 FUNC_2(&VAR_4->lun_lock, VAR_1);







 for (VAR_7 = *VAR_6; VAR_7 != ((void*)0);
      VAR_7 = (union ctl_io *)FUNC_0(&VAR_7->io_hdr, VAR_2,
      VAR_3)){
  VAR_8 = FUNC_1(VAR_4, VAR_5, VAR_7);
  if (VAR_8 != VAR_0) {
   *VAR_6 = VAR_7;
   return (VAR_8);
  }
 }

 *VAR_6 = ((void*)0);
 return (VAR_0);
}

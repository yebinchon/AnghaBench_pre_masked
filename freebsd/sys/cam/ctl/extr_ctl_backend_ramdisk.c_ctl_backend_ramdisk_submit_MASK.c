
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union ctl_io {int scsiio; } ;
struct ctl_lba_len_flags {int flags; } ;
struct TYPE_2__ {scalar_t__ len; } ;


 struct ctl_lba_len_flags* FUNC_0 (union ctl_io*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (union ctl_io*) ;
 int FUNC_2 (union ctl_io*) ;
 int FUNC_3 (union ctl_io*) ;
 int FUNC_4 (union ctl_io*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(union ctl_io *VAR_3)
{
 struct ctl_lba_len_flags *VAR_4 = FUNC_0(VAR_3);

 if (VAR_4->flags & VAR_1) {
  FUNC_5(&VAR_3->scsiio);
  FUNC_4(VAR_3);
  return (VAR_2);
 }
 FUNC_1(VAR_3)->len = 0;
 if (VAR_4->flags & VAR_0)
  FUNC_2(VAR_3);
 else
  FUNC_3(VAR_3);
 return (VAR_2);
}

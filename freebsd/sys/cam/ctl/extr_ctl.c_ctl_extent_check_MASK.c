
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
union ctl_io {TYPE_1__ io_hdr; } ;
typedef int uint64_t ;
typedef int ctl_action ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ,int) ;
 int FUNC_1 (union ctl_io*,int ,int ) ;
 scalar_t__ FUNC_2 (union ctl_io*,int *,int *) ;

__attribute__((used)) static ctl_action
FUNC_3(union ctl_io *VAR_3, union ctl_io *VAR_4, bool VAR_5)
{
 uint64_t VAR_6, VAR_7;
 uint64_t VAR_8, VAR_9;
 int VAR_10;

 if (FUNC_2(VAR_4, &VAR_7, &VAR_9) != 0)
  return (VAR_0);

 VAR_10 = FUNC_1(VAR_3, VAR_7, VAR_9);
 if (VAR_10 != VAR_0)
  return (VAR_10);

 if (FUNC_2(VAR_3, &VAR_6, &VAR_8) != 0)
  return (VAR_0);

 if (VAR_3->io_hdr.flags & VAR_1)
  VAR_5 = VAR_2;
 return (FUNC_0(VAR_6, VAR_8, VAR_7, VAR_9, VAR_5));
}

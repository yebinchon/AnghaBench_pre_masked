
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
union ctl_io {TYPE_1__ io_hdr; } ;
typedef scalar_t__ uint64_t ;
typedef int ctl_action ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (union ctl_io*,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static ctl_action
FUNC_1(union ctl_io *VAR_4, union ctl_io *VAR_5)
{
 uint64_t VAR_6, VAR_7;
 uint64_t VAR_8, VAR_9;

 if (VAR_4->io_hdr.flags & VAR_3)
  return (VAR_2);
 if (FUNC_0(VAR_4, &VAR_6, &VAR_8) != 0)
  return (VAR_1);
 if (FUNC_0(VAR_5, &VAR_7, &VAR_9) != 0)
  return (VAR_1);

 if (VAR_6 + VAR_8 == VAR_7)
  return (VAR_0);
 return (VAR_2);
}

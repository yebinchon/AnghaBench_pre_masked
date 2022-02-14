
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ index; } ;
struct cam_ed {TYPE_1__ devq_entry; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static __inline int
FUNC_0(struct cam_ed *VAR_1)
{
 return (VAR_1->devq_entry.index != VAR_0);
}

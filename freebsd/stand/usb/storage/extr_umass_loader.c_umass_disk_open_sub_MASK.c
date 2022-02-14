
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct disk_devdesc {int dummy; } ;
struct TYPE_2__ {int device; } ;


 int VAR_0 ;
 int FUNC_0 (struct disk_devdesc*,int,scalar_t__) ;
 TYPE_1__ VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static int
FUNC_2(struct disk_devdesc *VAR_2)
{
 uint32_t VAR_3;
 uint32_t VAR_4;

 if (FUNC_1(VAR_1.device, 0, &VAR_3, &VAR_4) != 0)
  return (VAR_0);

 return (FUNC_0(VAR_2, ((uint64_t)VAR_3 + 1) * (uint64_t)VAR_4, VAR_4));
}

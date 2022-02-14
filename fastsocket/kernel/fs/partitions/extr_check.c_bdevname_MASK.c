
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct block_device {TYPE_1__* bd_part; int bd_disk; } ;
struct TYPE_2__ {int partno; } ;


 char const* FUNC_0 (int ,int ,char*) ;

const char *FUNC_1(struct block_device *VAR_0, char *VAR_1)
{
 return FUNC_0(VAR_0->bd_disk, VAR_0->bd_part->partno, VAR_1);
}

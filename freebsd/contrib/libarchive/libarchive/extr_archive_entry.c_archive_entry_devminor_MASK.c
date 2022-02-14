
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int aest_dev; int aest_devminor; scalar_t__ aest_dev_is_broken_down; } ;
struct archive_entry {TYPE_1__ ae_stat; } ;
typedef int dev_t ;


 int FUNC_0 (int ) ;

dev_t
FUNC_1(struct archive_entry *VAR_0)
{
 if (VAR_0->ae_stat.aest_dev_is_broken_down)
  return (VAR_0->ae_stat.aest_devminor);
 else
  return FUNC_0(VAR_0->ae_stat.aest_dev);
}

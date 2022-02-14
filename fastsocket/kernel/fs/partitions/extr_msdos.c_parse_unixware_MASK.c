
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct unixware_slice {scalar_t__ s_label; int nr_sects; int start_sect; } ;
struct TYPE_2__ {struct unixware_slice* v_slice; int v_magic; } ;
struct unixware_disklabel {TYPE_1__ vtoc; int d_magic; } ;
struct parsed_partitions {scalar_t__ next; scalar_t__ limit; int name; } ;
struct block_device {int dummy; } ;
typedef scalar_t__ sector_t ;
typedef int Sector ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct parsed_partitions*,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (struct block_device*,scalar_t__,int *) ;

__attribute__((used)) static void
FUNC_5(struct parsed_partitions *VAR_4, struct block_device *VAR_5,
  sector_t VAR_6, sector_t VAR_7, int VAR_8)
{
}

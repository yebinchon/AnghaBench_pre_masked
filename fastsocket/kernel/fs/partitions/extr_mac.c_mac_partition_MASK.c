
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parsed_partitions {TYPE_1__* parts; } ;
struct mac_partition {scalar_t__ name; scalar_t__ type; scalar_t__ processor; int status; int block_count; int start_block; int signature; int map_count; } ;
struct mac_driver_desc {int block_size; int signature; } ;
struct block_device {int bd_dev; } ;
struct TYPE_2__ {int flags; } ;
typedef int Sector ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int,int) ;
 int VAR_4 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct parsed_partitions*,int,unsigned int,unsigned int) ;
 unsigned char* FUNC_8 (struct block_device*,int,int *) ;
 scalar_t__ FUNC_9 (scalar_t__,char*) ;
 scalar_t__ FUNC_10 (scalar_t__,char*) ;
 int FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__,char*,int) ;

int FUNC_13(struct parsed_partitions *VAR_5, struct block_device *VAR_6)
{
 Sector VAR_7;
 unsigned char *VAR_8;
 int VAR_9, VAR_10;
 unsigned VAR_11;




 struct mac_partition *VAR_12;
 struct mac_driver_desc *VAR_13;


 VAR_13 = (struct mac_driver_desc *) FUNC_8(VAR_6, 0, &VAR_7);
 if (!VAR_13)
  return -1;
 if (FUNC_0(VAR_13->signature) != VAR_1) {
  FUNC_6(VAR_7);
  return 0;
 }
 VAR_11 = FUNC_0(VAR_13->block_size);
 FUNC_6(VAR_7);
 VAR_8 = FUNC_8(VAR_6, VAR_11/512, &VAR_7);
 if (!VAR_8)
  return -1;
 VAR_12 = (struct mac_partition *) (VAR_8 + VAR_11%512);
 if (FUNC_0(VAR_12->signature) != VAR_2) {
  FUNC_6(VAR_7);
  return 0;
 }
 VAR_10 = FUNC_1(VAR_12->map_count);
 if (VAR_10 < 0 || VAR_10 >= VAR_0) {
  FUNC_6(VAR_7);
  return 0;
 }
 FUNC_5(" [mac]");
 for (VAR_9 = 1; VAR_9 <= VAR_10; ++VAR_9) {
  int VAR_14 = VAR_9 * VAR_11;
  FUNC_6(VAR_7);
  VAR_8 = FUNC_8(VAR_6, VAR_14/512, &VAR_7);
  if (!VAR_8)
   return -1;
  VAR_12 = (struct mac_partition *) (VAR_8 + VAR_14%512);
  if (FUNC_0(VAR_12->signature) != VAR_2)
   break;
  FUNC_7(VAR_5, VAR_9,
   FUNC_1(VAR_12->start_block) * (VAR_11/512),
   FUNC_1(VAR_12->block_count) * (VAR_11/512));

  if (!FUNC_12(VAR_12->type, "Linux_RAID", 10))
   VAR_5->parts[VAR_9].flags = 1;
 }





 FUNC_6(VAR_7);
 FUNC_5("\n");
 return 1;
}

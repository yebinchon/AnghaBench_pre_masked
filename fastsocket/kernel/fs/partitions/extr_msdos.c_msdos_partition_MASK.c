
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct partition {int boot_ind; } ;
struct parsed_partitions {int next; TYPE_1__* parts; } ;
struct fat_boot_sector {int media; scalar_t__ fats; scalar_t__ reserved; } ;
struct block_device {int dummy; } ;
typedef int sector_t ;
struct TYPE_4__ {unsigned char id; int (* parse ) (struct parsed_partitions*,struct block_device*,int,int,int) ;} ;
struct TYPE_3__ {int flags; } ;
typedef int Sector ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char FUNC_0 (struct partition*) ;
 scalar_t__ FUNC_1 (unsigned char*,struct block_device*) ;
 int FUNC_2 (struct block_device*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct partition*) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (unsigned char*) ;
 int FUNC_8 (struct partition*) ;
 int FUNC_9 (struct parsed_partitions*,struct block_device*,int,int) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct parsed_partitions*,int,int,int) ;
 unsigned char* FUNC_13 (struct block_device*,int ,int *) ;
 int FUNC_14 (struct partition*) ;
 int FUNC_15 (struct parsed_partitions*,struct block_device*,int,int,int) ;
 TYPE_2__* VAR_4 ;

int FUNC_16(struct parsed_partitions *VAR_5, struct block_device *VAR_6)
{
 sector_t VAR_7 = FUNC_2(VAR_6) / 512;
 Sector VAR_8;
 unsigned char *VAR_9;
 struct partition *VAR_10;
 struct fat_boot_sector *VAR_11;
 int VAR_12;

 VAR_9 = FUNC_13(VAR_6, 0, &VAR_8);
 if (!VAR_9)
  return -1;
 if (!FUNC_7(VAR_9 + 510)) {
  FUNC_11(VAR_8);
  return 0;
 }

 if (FUNC_1(VAR_9, VAR_6)) {
  FUNC_11(VAR_8);
  FUNC_10( " [AIX]");
  return 0;
 }







 VAR_10 = (struct partition *) (VAR_9 + 0x1be);
 for (VAR_12 = 1; VAR_12 <= 4; VAR_12++, VAR_10++) {
  if (VAR_10->boot_ind != 0 && VAR_10->boot_ind != 0x80) {





   VAR_11 = (struct fat_boot_sector *) VAR_9;
   if (VAR_12 == 1 && VAR_11->reserved && VAR_11->fats
    && FUNC_3(VAR_11->media)) {
    FUNC_10("\n");
    FUNC_11(VAR_8);
    return 1;
   } else {
    FUNC_11(VAR_8);
    return 0;
   }
  }
 }
 VAR_10 = (struct partition *) (VAR_9 + 0x1be);







 VAR_5->next = 5;
 for (VAR_12 = 1 ; VAR_12 <= 4 ; VAR_12++, VAR_10++) {
  sector_t VAR_13 = FUNC_14(VAR_10)*VAR_7;
  sector_t VAR_14 = FUNC_8(VAR_10)*VAR_7;
  if (!VAR_14)
   continue;
  if (FUNC_4(VAR_10)) {






   sector_t VAR_15 = 2;
   VAR_15 = FUNC_6(VAR_14, FUNC_5(VAR_7, VAR_15));
   FUNC_12(VAR_5, VAR_12, VAR_13, VAR_15);

   FUNC_10(" <");
   FUNC_9(VAR_5, VAR_6, VAR_13, VAR_14);
   FUNC_10(" >");
   continue;
  }
  FUNC_12(VAR_5, VAR_12, VAR_13, VAR_14);
  if (FUNC_0(VAR_10) == VAR_3)
   VAR_5->parts[VAR_12].flags = 1;
  if (FUNC_0(VAR_10) == VAR_0)
   FUNC_10("[DM]");
  if (FUNC_0(VAR_10) == VAR_2)
   FUNC_10("[EZD]");
 }

 FUNC_10("\n");


 VAR_10 = (struct partition *) (0x1be + VAR_9);
 for (VAR_12 = 1 ; VAR_12 <= 4 ; VAR_12++, VAR_10++) {
  unsigned char VAR_16 = FUNC_0(VAR_10);
  int VAR_17;

  if (!FUNC_8(VAR_10))
   continue;

  for (VAR_17 = 0; VAR_4[VAR_17].parse && VAR_16 != VAR_4[VAR_17].id; VAR_17++)
   ;

  if (!VAR_4[VAR_17].parse)
   continue;
  VAR_4[VAR_17].parse(VAR_5, VAR_6, FUNC_14(VAR_10)*VAR_7,
      FUNC_8(VAR_10)*VAR_7, VAR_12);
 }
 FUNC_11(VAR_8);
 return 1;
}

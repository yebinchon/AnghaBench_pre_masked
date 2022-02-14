
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct partition {int dummy; } ;
struct parsed_partitions {size_t next; size_t limit; TYPE_1__* parts; } ;
struct block_device {int dummy; } ;
typedef scalar_t__ sector_t ;
struct TYPE_2__ {int flags; } ;
typedef int Sector ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct partition*) ;
 int FUNC_1 (struct block_device*) ;
 scalar_t__ FUNC_2 (struct partition*) ;
 int FUNC_3 (unsigned char*) ;
 scalar_t__ FUNC_4 (struct partition*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct parsed_partitions*,size_t,scalar_t__,scalar_t__) ;
 unsigned char* FUNC_7 (struct block_device*,scalar_t__,int *) ;
 scalar_t__ FUNC_8 (struct partition*) ;

__attribute__((used)) static void
FUNC_9(struct parsed_partitions *VAR_2, struct block_device *VAR_3,
   sector_t VAR_4, sector_t VAR_5)
{
 struct partition *VAR_6;
 Sector VAR_7;
 unsigned char *VAR_8;
 sector_t VAR_9, VAR_10;
 sector_t VAR_11 = FUNC_1(VAR_3) / 512;
 int VAR_12 = 0;

 int VAR_13;

 VAR_9 = VAR_4;
 VAR_10 = VAR_5;

 while (1) {
  if (++VAR_12 > 100)
   return;
  if (VAR_2->next == VAR_2->limit)
   return;
  VAR_8 = FUNC_7(VAR_3, VAR_9, &VAR_7);
  if (!VAR_8)
   return;

  if (!FUNC_3(VAR_8 + 510))
   goto done;

  VAR_6 = (struct partition *) (VAR_8 + 0x1be);
  for (VAR_13=0; VAR_13<4; VAR_13++, VAR_6++) {
   sector_t VAR_14, VAR_15, VAR_16;
   if (!FUNC_4(VAR_6) || FUNC_2(VAR_6))
    continue;



   VAR_14 = FUNC_8(VAR_6)*VAR_11;
   VAR_15 = FUNC_4(VAR_6)*VAR_11;
   VAR_16 = VAR_9 + VAR_14;
   if (VAR_13 >= 2) {
    if (VAR_14 + VAR_15 > VAR_10)
     continue;
    if (VAR_16 < VAR_4)
     continue;
    if (VAR_16 + VAR_15 > VAR_4 + VAR_5)
     continue;
   }

   FUNC_6(VAR_2, VAR_2->next, VAR_16, VAR_15);
   if (FUNC_0(VAR_6) == VAR_1)
    VAR_2->parts[VAR_2->next].flags = VAR_0;
   VAR_12 = 0;
   if (++VAR_2->next == VAR_2->limit)
    goto done;
  }







  VAR_6 -= 4;
  for (VAR_13=0; VAR_13<4; VAR_13++, VAR_6++)
   if (FUNC_4(VAR_6) && FUNC_2(VAR_6))
    break;
  if (VAR_13 == 4)
   goto done;

  VAR_9 = VAR_4 + FUNC_8(VAR_6) * VAR_11;
  VAR_10 = FUNC_4(VAR_6) * VAR_11;
  FUNC_5(VAR_7);
 }
done:
 FUNC_5(VAR_7);
}

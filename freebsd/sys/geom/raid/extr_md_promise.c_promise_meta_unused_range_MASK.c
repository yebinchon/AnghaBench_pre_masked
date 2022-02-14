
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct promise_raid_conf {int disk_offset; int disk_sectors; scalar_t__ disk_sectors_high; scalar_t__ disk_offset_high; } ;
typedef int off_t ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static int
FUNC_1(struct promise_raid_conf **VAR_0, int VAR_1,
    off_t VAR_2, off_t *VAR_3, off_t *VAR_4)
{
 off_t VAR_5, VAR_6, VAR_7;
 int VAR_8, VAR_9;

 VAR_2 -= 131072;
 *VAR_3 = 0;
 *VAR_4 = 0;
 VAR_5 = 0;
 VAR_6 = VAR_2;
 VAR_8 = 0;
 while (1) {
  for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
   VAR_7 = ((off_t)VAR_0[VAR_9]->disk_offset_high << 32) +
       VAR_0[VAR_9]->disk_offset;
   if (VAR_7 >= VAR_5)
    VAR_6 = FUNC_0(VAR_6, VAR_7 - VAR_5);
  }
  if (VAR_6 > *VAR_4) {
   *VAR_3 = VAR_5;
   *VAR_4 = VAR_6;
  }
  if (VAR_8 >= VAR_1)
   break;
  VAR_5 = ((off_t)VAR_0[VAR_8]->disk_offset_high << 32) +
       VAR_0[VAR_8]->disk_offset +
      ((off_t)VAR_0[VAR_8]->disk_sectors_high << 32) +
       VAR_0[VAR_8]->disk_sectors;
  VAR_6 = VAR_2 - VAR_5;
  VAR_8++;
 }
 return ((*VAR_4 > 0) ? 1 : 0);
}

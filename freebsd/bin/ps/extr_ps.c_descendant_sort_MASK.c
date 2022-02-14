
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int level; char* prefix; } ;
struct TYPE_9__ {TYPE_2__ ki_d; TYPE_1__* ki_p; } ;
struct TYPE_7__ {scalar_t__ ki_pid; scalar_t__ ki_ppid; } ;
typedef TYPE_3__ KINFO ;


 int FUNC_0 (unsigned char*) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*,TYPE_3__*,int) ;
 int FUNC_3 (unsigned char*,char,int) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int,char*) ;

__attribute__((used)) static void
FUNC_6(KINFO *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
 unsigned char *VAR_10;
 KINFO VAR_11;





 VAR_9 = 0;
 VAR_4 = 0;
 while (VAR_9 < VAR_1) {
  if (VAR_0[VAR_9].ki_d.level) {
   VAR_9++;
   continue;
  }
  for (VAR_7 = 1; VAR_9 + VAR_7 < VAR_1; VAR_7++)
   if (!VAR_0[VAR_9 + VAR_7].ki_d.level)
    break;

  for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
   if (VAR_0[VAR_2].ki_p->ki_pid == VAR_0[VAR_9].ki_p->ki_pid)
    continue;
   if (VAR_0[VAR_2].ki_p->ki_pid == VAR_0[VAR_9].ki_p->ki_ppid)
    break;
  }

  if (VAR_2 == VAR_1) {
   VAR_9 += VAR_7;
   continue;
  }

  for (VAR_6 = 1; VAR_2 + VAR_6 < VAR_1; VAR_6++)
   if (VAR_0[VAR_2 + VAR_6].ki_d.level <= VAR_0[VAR_2].ki_d.level)
    break;

  for (VAR_5 = VAR_9; VAR_5 < VAR_9 + VAR_7; VAR_5++) {
   VAR_0[VAR_5].ki_d.level += VAR_0[VAR_2].ki_d.level + 1;
   if (VAR_4 < VAR_0[VAR_5].ki_d.level)
    VAR_4 = VAR_0[VAR_5].ki_d.level;
  }

  while (VAR_7) {
   if (VAR_9 < VAR_2) {
    VAR_11 = VAR_0[VAR_9];
    FUNC_2(VAR_0 + VAR_9, VAR_0 + VAR_9 + 1,
        (VAR_2 - VAR_9 + VAR_6 - 1) * sizeof *VAR_0);
    VAR_0[VAR_2 + VAR_6 - 1] = VAR_11;
    VAR_7--;
    VAR_2--;
    VAR_6++;
   } else if (VAR_9 != VAR_2 + VAR_6) {
    VAR_11 = VAR_0[VAR_9];
    FUNC_2(VAR_0 + VAR_2 + VAR_6 + 1, VAR_0 + VAR_2 + VAR_6,
        (VAR_9 - VAR_2 - VAR_6) * sizeof *VAR_0);
    VAR_0[VAR_2 + VAR_6] = VAR_11;
    VAR_6++;
    VAR_7--;
    VAR_9++;
   } else {
    VAR_6 += VAR_7;
    VAR_9 += VAR_7;
    VAR_7 = 0;
   }
  }
 }





 VAR_10 = FUNC_1((VAR_4 + 7) / 8);
 FUNC_3(VAR_10, '\0', (VAR_4 + 7) / 8);
 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  if ((VAR_3 = VAR_0[VAR_9].ki_d.level) == 0) {
   VAR_0[VAR_9].ki_d.prefix = ((void*)0);
   continue;
  }
  if ((VAR_0[VAR_9].ki_d.prefix = FUNC_1(VAR_3 * 2 + 1)) == ((void*)0))
   FUNC_5(1, "malloc failed");
  for (VAR_5 = 0; VAR_5 < VAR_3 - 2; VAR_5++) {
   VAR_0[VAR_9].ki_d.prefix[VAR_5 * 2] =
       VAR_10[VAR_5 / 8] & 1 << (VAR_5 % 8) ? '|' : ' ';
   VAR_0[VAR_9].ki_d.prefix[VAR_5 * 2 + 1] = ' ';
  }
  if (VAR_5 == VAR_3 - 2) {

   for (VAR_8 = 0, VAR_2 = VAR_9 + 1; VAR_2 < VAR_1; VAR_2++) {
    if (VAR_0[VAR_2].ki_d.level > VAR_3)
     continue;
    if (VAR_0[VAR_2].ki_d.level == VAR_3)
     VAR_8 = 1;
    break;
   }
   if (VAR_8)
    VAR_10[VAR_5 / 8] |= 1 << (VAR_5 % 8);
   else
    VAR_10[VAR_5 / 8] &= ~(1 << (VAR_5 % 8));
   VAR_0[VAR_9].ki_d.prefix[VAR_5 * 2] = VAR_8 ? '|' : '`';
   VAR_0[VAR_9].ki_d.prefix[VAR_5 * 2 + 1] = '-';
   VAR_5++;
  }
  FUNC_4(VAR_0[VAR_9].ki_d.prefix + VAR_5 * 2, "- ");
 }
 FUNC_0(VAR_10);
}

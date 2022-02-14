
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct activemap {int am_nextents; int am_syncmap; int am_diskmap; int am_memmap; } ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (char*,...) ;

void
FUNC_2(const struct activemap *VAR_0)
{
 int VAR_1;

 FUNC_1("M: ");
 for (VAR_1 = 0; VAR_1 < VAR_0->am_nextents; VAR_1++)
  FUNC_1("%d", FUNC_0(VAR_0->am_memmap, VAR_1) ? 1 : 0);
 FUNC_1("\n");
 FUNC_1("D: ");
 for (VAR_1 = 0; VAR_1 < VAR_0->am_nextents; VAR_1++)
  FUNC_1("%d", FUNC_0(VAR_0->am_diskmap, VAR_1) ? 1 : 0);
 FUNC_1("\n");
 FUNC_1("S: ");
 for (VAR_1 = 0; VAR_1 < VAR_0->am_nextents; VAR_1++)
  FUNC_1("%d", FUNC_0(VAR_0->am_syncmap, VAR_1) ? 1 : 0);
 FUNC_1("\n");
}

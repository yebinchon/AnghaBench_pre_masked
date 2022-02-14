
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,...) ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_1()
{
 FUNC_0("parameters extracted from in-core disklabel are:\n");
 FUNC_0("cylinders=%d heads=%d sectors/track=%d (%d blks/cyl)\n\n"
   ,VAR_0,VAR_6,VAR_7,VAR_1);
 if (VAR_2 > 1023 || VAR_4 > 255 || VAR_5 > 63)
  FUNC_0("Figures below won't work with BIOS for partitions not in cyl 1\n");
 FUNC_0("parameters to be used for BIOS calculations are:\n");
 FUNC_0("cylinders=%d heads=%d sectors/track=%d (%d blks/cyl)\n\n"
  ,VAR_2,VAR_4,VAR_5,VAR_3);
}

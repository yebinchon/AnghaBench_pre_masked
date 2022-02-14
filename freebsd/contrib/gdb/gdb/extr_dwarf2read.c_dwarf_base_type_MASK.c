
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct objfile {int dummy; } ;
struct dwarf2_cu {struct objfile* objfile; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct type* FUNC_0 (struct objfile*,int ,struct dwarf2_cu*) ;

__attribute__((used)) static struct type *
FUNC_1 (int VAR_12, int VAR_13, struct dwarf2_cu *VAR_14)
{
  struct objfile *VAR_15 = VAR_14->objfile;



  struct type *VAR_16;
  switch (VAR_12)
    {
    case 135:
      VAR_16 = FUNC_0 (VAR_15, VAR_11, VAR_14);
      return VAR_16;
    case 134:
      VAR_16 = FUNC_0 (VAR_15, VAR_0, VAR_14);
      return VAR_16;
    case 133:
      if (VAR_13 == 16)
 {
   VAR_16 = FUNC_0 (VAR_15, VAR_2, VAR_14);
 }
      else
 {
   VAR_16 = FUNC_0 (VAR_15, VAR_1, VAR_14);
 }
      return VAR_16;
    case 132:
      if (VAR_13 == 8)
 {
   VAR_16 = FUNC_0 (VAR_15, VAR_3, VAR_14);
 }
      else
 {
   VAR_16 = FUNC_0 (VAR_15, VAR_4, VAR_14);
 }
      return VAR_16;
    case 131:
      switch (VAR_13)
 {
 case 1:
   VAR_16 = FUNC_0 (VAR_15, VAR_5, VAR_14);
   break;
 case 2:
   VAR_16 = FUNC_0 (VAR_15, VAR_7, VAR_14);
   break;
 default:
 case 4:
   VAR_16 = FUNC_0 (VAR_15, VAR_6, VAR_14);
   break;
 }
      return VAR_16;
    case 130:
      VAR_16 = FUNC_0 (VAR_15, VAR_5, VAR_14);
      return VAR_16;
    case 129:
      switch (VAR_13)
 {
 case 1:
   VAR_16 = FUNC_0 (VAR_15, VAR_8, VAR_14);
   break;
 case 2:
   VAR_16 = FUNC_0 (VAR_15, VAR_10, VAR_14);
   break;
 default:
 case 4:
   VAR_16 = FUNC_0 (VAR_15, VAR_9, VAR_14);
   break;
 }
      return VAR_16;
    case 128:
      VAR_16 = FUNC_0 (VAR_15, VAR_8, VAR_14);
      return VAR_16;
    default:
      VAR_16 = FUNC_0 (VAR_15, VAR_6, VAR_14);
      return VAR_16;
    }
}

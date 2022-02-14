
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_lprops {int free; int dirty; } ;





__attribute__((used)) static int FUNC_0(struct ubifs_lprops *VAR_0, int VAR_1)
{
 switch (VAR_1) {
 case 128:
  return VAR_0->free;
 case 129:
  return VAR_0->free + VAR_0->dirty;
 default:
  return VAR_0->dirty;
 }
}

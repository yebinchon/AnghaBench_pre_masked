
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
__attribute__((used)) static int
FUNC_0(int VAR_1)
{
 static struct {
  int flag;
  int fst_flag;
 } VAR_2[] = {
  { 155, 132 },
  { 154, 128 },
  { 153, 141 },
  { 152, 140 },
  { 151, 139 },
  { 150, 138 },
  { 149, 137 },
  { 148, 136 },
  { 147, 135 },
  { 146, 134 },
  { 145, 133 },
  { 144, 131 },
  { 143, 130 },
  { 142, 129 }
 };

 int VAR_3;
 unsigned int VAR_4;

 VAR_3 = 0;
 for (VAR_4 = 0; VAR_4 < (sizeof(VAR_2) / sizeof(*VAR_2)); VAR_4++)
  if (VAR_1 & VAR_2[VAR_4].flag)
   VAR_3 |= VAR_2[VAR_4].fst_flag;
 return (VAR_3);
}

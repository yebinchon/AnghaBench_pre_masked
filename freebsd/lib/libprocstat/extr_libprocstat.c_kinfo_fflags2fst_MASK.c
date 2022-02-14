
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
__attribute__((used)) static int
FUNC_0(int VAR_1)
{
 static struct {
  int kf_flag;
  int fst_flag;
 } VAR_2[] = {
  { 157, 142 },
  { 156, 141 },
  { 155, 140 },
  { 154, 139 },
  { 153, 138 },
  { 152, 137 },
  { 151, 136 },
  { 150, 130 },
  { 149, 135 },
  { 148, 134 },
  { 147, 133 },
  { 146, 132 },
  { 145, 131 },
  { 144, 129 },
  { 143, 128 }
 };

 unsigned int VAR_3;
 int VAR_4;

 VAR_4 = 0;
 for (VAR_3 = 0; VAR_3 < (sizeof(VAR_2) / sizeof(*VAR_2)); VAR_3++)
  if ((VAR_1 & VAR_2[VAR_3].kf_flag) != 0)
   VAR_4 |= VAR_2[VAR_3].fst_flag;
 return (VAR_4);
}

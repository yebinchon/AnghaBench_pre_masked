
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
__attribute__((used)) static int
FUNC_0(int VAR_1)
{
 static struct {
  int kf_type;
  int fst_type;
 } VAR_2[] = {
  { 148, 134 },
  { 155, 141 },
  { 154, 140 },
  { 153, 139 },
  { 152, 138 },
  { 151, 137 },
  { 150, 136 },
  { 149, 135 },
  { 147, 133 },
  { 146, 132 },
  { 145, 131 },
  { 144, 130 },
  { 142, 128 },
  { 143, 129 }
 };

 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < (sizeof(VAR_2) / sizeof(*VAR_2)); VAR_3++)
  if (VAR_2[VAR_3].kf_type == VAR_1)
   break;
 if (VAR_3 == (sizeof(VAR_2) / sizeof(*VAR_2)))
  return (129);
 return (VAR_2[VAR_3].fst_type);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 int VAR_1 ;
__attribute__((used)) static int
FUNC_0(int VAR_2)
{
 static struct {
  int kf_vtype;
  int fst_vtype;
 } VAR_3[] = {
  { 145, 136 },
  { 144, 135 },
  { 143, 134 },
  { 142, 133 },
  { 141, 132 },
  { 140, 131 },
  { 139, 130 },
  { 138, 129 },
  { 137, 128 }
 };

 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < (sizeof(VAR_3) / sizeof(*VAR_3)); VAR_4++)
  if (VAR_3[VAR_4].kf_vtype == VAR_2)
   break;
 if (VAR_4 == (sizeof(VAR_3) / sizeof(*VAR_3)))
  return (VAR_1);
 return (VAR_3[VAR_4].fst_vtype);
}

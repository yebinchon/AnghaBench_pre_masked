
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
__attribute__((used)) static int
FUNC_0(int VAR_2)
{
 static struct {
  int vtype;
  int fst_vtype;
 } VAR_3[] = {
  { 136, 145 },
  { 135, 144 },
  { 134, 143 },
  { 133, 142 },
  { 132, 141 },
  { 131, 140 },
  { 130, 139 },
  { 129, 138 },
  { 128, 137 }
 };

 unsigned int VAR_4, VAR_5;

 VAR_5 = VAR_1;
 for (VAR_4 = 0; VAR_4 < (sizeof(VAR_3) / sizeof(*VAR_3)); VAR_4++) {
  if (VAR_2 == VAR_3[VAR_4].vtype) {
   VAR_5 = VAR_3[VAR_4].fst_vtype;
   break;
  }
 }
 return (VAR_5);
}

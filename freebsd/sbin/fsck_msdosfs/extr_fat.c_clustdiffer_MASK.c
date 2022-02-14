
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef scalar_t__ cl_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int,char*,...) ;
 int FUNC_1 (char*,scalar_t__,scalar_t__,...) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static int
FUNC_3(cl_t VAR_6, cl_t *VAR_7, cl_t *VAR_8, u_int VAR_9)
{
 if (*VAR_7 == VAR_1 || *VAR_7 >= VAR_2) {
  if (*VAR_8 == VAR_1 || *VAR_8 >= VAR_2) {
   if ((*VAR_7 != VAR_1 && *VAR_7 < VAR_0
        && *VAR_8 != VAR_1 && *VAR_8 < VAR_0)
       || (*VAR_7 > VAR_0 && *VAR_8 > VAR_0)) {
    FUNC_1("Cluster %u is marked %s with different indicators\n",
          VAR_6, FUNC_2(*VAR_7));
    if (FUNC_0(1, "Fix")) {
     *VAR_8 = *VAR_7;
     return VAR_5;
    }
    return VAR_4;
   }
   FUNC_1("Cluster %u is marked %s in FAT 0, %s in FAT %u\n",
         VAR_6, FUNC_2(*VAR_7), FUNC_2(*VAR_8), VAR_9);
   if (FUNC_0(0, "Use FAT 0's entry")) {
    *VAR_8 = *VAR_7;
    return VAR_5;
   }
   if (FUNC_0(0, "Use FAT %u's entry", VAR_9)) {
    *VAR_7 = *VAR_8;
    return VAR_5;
   }
   return VAR_4;
  }
  FUNC_1("Cluster %u is marked %s in FAT 0, but continues with cluster %u in FAT %d\n",
        VAR_6, FUNC_2(*VAR_7), *VAR_8, VAR_9);
  if (FUNC_0(0, "Use continuation from FAT %u", VAR_9)) {
   *VAR_7 = *VAR_8;
   return VAR_5;
  }
  if (FUNC_0(0, "Use mark from FAT 0")) {
   *VAR_8 = *VAR_7;
   return VAR_5;
  }
  return VAR_4;
 }
 if (*VAR_8 == VAR_1 || *VAR_8 >= VAR_2) {
  FUNC_1("Cluster %u continues with cluster %u in FAT 0, but is marked %s in FAT %u\n",
        VAR_6, *VAR_7, FUNC_2(*VAR_8), VAR_9);
  if (FUNC_0(0, "Use continuation from FAT 0")) {
   *VAR_8 = *VAR_7;
   return VAR_5;
  }
  if (FUNC_0(0, "Use mark from FAT %d", VAR_9)) {
   *VAR_7 = *VAR_8;
   return VAR_5;
  }
  return VAR_3;
 }
 FUNC_1("Cluster %u continues with cluster %u in FAT 0, but with cluster %u in FAT %u\n",
       VAR_6, *VAR_7, *VAR_8, VAR_9);
 if (FUNC_0(0, "Use continuation from FAT 0")) {
  *VAR_8 = *VAR_7;
  return VAR_5;
 }
 if (FUNC_0(0, "Use continuation from FAT %u", VAR_9)) {
  *VAR_7 = *VAR_8;
  return VAR_5;
 }
 return VAR_3;
}

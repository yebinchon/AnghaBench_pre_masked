
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct bootblock {int ClustMask; int NumClusters; int NumBad; int NumFree; } ;
typedef int cl_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,int,int ,char*,int) ;

__attribute__((used)) static int
FUNC_2(struct bootblock *VAR_9, u_int VAR_10, cl_t VAR_11, cl_t *VAR_12)
{
 if (*VAR_12 >= (VAR_5&VAR_9->ClustMask))
  *VAR_12 |= ~VAR_9->ClustMask;
 if (*VAR_12 == VAR_4) {
  VAR_9->NumFree++;
  return VAR_8;
 }
 if (*VAR_12 == VAR_0) {
  VAR_9->NumBad++;
  return VAR_8;
 }
 if (*VAR_12 < VAR_3
     || (*VAR_12 >= VAR_9->NumClusters && *VAR_12 < VAR_2)) {
  FUNC_1("Cluster %u in FAT %d continues with %s cluster number %u\n",
        VAR_11, VAR_10,
        *VAR_12 < VAR_5 ? "out of range" : "reserved",
        *VAR_12&VAR_9->ClustMask);
  if (FUNC_0(0, "Truncate")) {
   *VAR_12 = VAR_1;
   return VAR_7;
  }
  return VAR_6;
 }
 return VAR_8;
}

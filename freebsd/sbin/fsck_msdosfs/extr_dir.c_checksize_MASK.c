
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef scalar_t__ u_char ;
struct fatEntry {int length; size_t next; } ;
struct dosDirEntry {size_t head; int size; } ;
struct bootblock {size_t NumClusters; int ClusterSize; } ;
typedef size_t cl_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int,char*) ;
 int FUNC_1 (struct bootblock*,struct fatEntry*,size_t) ;
 int FUNC_2 (struct dosDirEntry*) ;
 int FUNC_3 (char*,int ,...) ;

__attribute__((used)) static int
FUNC_4(struct bootblock *VAR_7, struct fatEntry *VAR_8, u_char *VAR_9,
    struct dosDirEntry *VAR_10)
{



 u_int32_t VAR_11;

 if (VAR_10->head == VAR_2)
  VAR_11 = 0;
 else {
  if (VAR_10->head < VAR_1 || VAR_10->head >= VAR_7->NumClusters)
   return VAR_4;
  VAR_11 = VAR_8[VAR_10->head].length * VAR_7->ClusterSize;
 }
 if (VAR_11 < VAR_10->size) {
  FUNC_3("size of %s is %u, should at most be %u\n",
        FUNC_2(VAR_10), VAR_10->size, VAR_11);
  if (FUNC_0(1, "Truncate")) {
   VAR_10->size = VAR_11;
   VAR_9[28] = (u_char)VAR_11;
   VAR_9[29] = (u_char)(VAR_11 >> 8);
   VAR_9[30] = (u_char)(VAR_11 >> 16);
   VAR_9[31] = (u_char)(VAR_11 >> 24);
   return VAR_3;
  } else
   return VAR_4;
 } else if (VAR_11 - VAR_10->size >= VAR_7->ClusterSize) {
  FUNC_3("%s has too many clusters allocated\n",
        FUNC_2(VAR_10));
  if (FUNC_0(1, "Drop superfluous clusters")) {
   cl_t VAR_12;
   u_int32_t VAR_13, VAR_14;

   for (VAR_12 = VAR_10->head, VAR_14 = VAR_13 = 0;
       (VAR_13 += VAR_7->ClusterSize) < VAR_10->size; VAR_14++)
    VAR_12 = VAR_8[VAR_12].next;
   FUNC_1(VAR_7, VAR_8, VAR_8[VAR_12].next);
   VAR_8[VAR_12].next = VAR_0;
   VAR_8[VAR_10->head].length = VAR_14;
   return VAR_5;
  } else
   return VAR_4;
 }
 return VAR_6;
}

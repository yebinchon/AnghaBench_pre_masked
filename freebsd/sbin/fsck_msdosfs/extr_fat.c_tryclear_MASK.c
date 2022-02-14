
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct fatEntry {size_t next; scalar_t__ length; } ;
struct bootblock {size_t NumClusters; } ;
typedef size_t cl_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct bootblock*,struct fatEntry*,size_t) ;

int
FUNC_2(struct bootblock *VAR_4, struct fatEntry *VAR_5, cl_t VAR_6, cl_t *VAR_7)
{
 if (FUNC_0(0, "Clear chain starting at %u", VAR_6)) {
  FUNC_1(VAR_4, VAR_5, VAR_6);
  return VAR_3;
 } else if (FUNC_0(0, "Truncate")) {
  uint32_t VAR_8;
  cl_t VAR_9;

  for (VAR_9 = VAR_6, VAR_8 = 0;
      VAR_9 >= VAR_1 && VAR_9 < VAR_4->NumClusters;
      VAR_9 = VAR_5[VAR_9].next, VAR_8++)
   continue;
  *VAR_7 = VAR_0;
  VAR_5[VAR_6].length = VAR_8;
  return VAR_3;
 } else
  return VAR_2;
}

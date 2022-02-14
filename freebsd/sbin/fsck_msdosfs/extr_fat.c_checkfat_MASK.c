
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct fatEntry {size_t head; size_t next; scalar_t__ length; } ;
struct bootblock {size_t NumClusters; } ;
typedef size_t cl_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,char*,size_t) ;
 int FUNC_1 (struct bootblock*,struct fatEntry*,size_t) ;
 int FUNC_2 (char*,size_t,size_t,...) ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (struct bootblock*,struct fatEntry*,size_t,size_t*) ;

int
FUNC_5(struct bootblock *VAR_7, struct fatEntry *VAR_8)
{
 cl_t VAR_9, VAR_10, VAR_11, VAR_12;
 u_int VAR_13;
 int VAR_14 = 0;
 int VAR_15;




 for (VAR_9 = VAR_2; VAR_9 < VAR_7->NumClusters; VAR_9++) {

  if (VAR_8[VAR_9].head != 0
      || VAR_8[VAR_9].next == VAR_3
      || VAR_8[VAR_9].next == VAR_0)
   continue;


  for (VAR_13 = 0, VAR_10 = VAR_9;
       VAR_10 >= VAR_2 && VAR_10 < VAR_7->NumClusters &&
       VAR_8[VAR_10].head != VAR_9;
       VAR_10 = VAR_8[VAR_10].next) {
   VAR_8[VAR_10].head = VAR_9;
   VAR_13++;
  }


  VAR_8[VAR_9].length = VAR_8[VAR_9].next == VAR_3 ? 0 : VAR_13;
 }






 for (VAR_9 = VAR_2; VAR_9 < VAR_7->NumClusters; VAR_9++) {

  if (VAR_8[VAR_9].head != VAR_9)
   continue;


  for (VAR_13 = VAR_8[VAR_9].length, VAR_10 = VAR_9;
       (VAR_12 = VAR_8[VAR_10].next) >= VAR_2 && VAR_12 < VAR_7->NumClusters;
       VAR_10 = VAR_12)
   if (VAR_8[VAR_12].head != VAR_9 || VAR_13-- < 2)
    break;
  if (VAR_12 >= VAR_1)
   continue;

  if (VAR_12 == VAR_3 || VAR_12 >= VAR_4) {
   FUNC_2("Cluster chain starting at %u ends with cluster marked %s\n",
         VAR_9, FUNC_3(VAR_12));
clear:
   VAR_14 |= FUNC_4(VAR_7, VAR_8, VAR_9, &VAR_8[VAR_10].next);
   continue;
  }
  if (VAR_12 < VAR_2 || VAR_12 >= VAR_7->NumClusters) {
   FUNC_2("Cluster chain starting at %u ends with cluster out of range (%u)\n",
       VAR_9, VAR_12);
   goto clear;
  }
  if (VAR_9 == VAR_8[VAR_12].head) {
   FUNC_2("Cluster chain starting at %u loops at cluster %u\n",
       VAR_9, VAR_10);
   goto clear;
  }
  FUNC_2("Cluster chains starting at %u and %u are linked at cluster %u\n",
        VAR_9, VAR_8[VAR_12].head, VAR_12);
  VAR_15 = FUNC_4(VAR_7, VAR_8, VAR_9, &VAR_8[VAR_10].next);
  if (FUNC_0(0, "Clear chain starting at %u", VAR_11 = VAR_8[VAR_12].head)) {
   if (VAR_15 == VAR_5) {



    for (VAR_10 = VAR_12;
         VAR_10 >= VAR_2 && VAR_10 < VAR_7->NumClusters;
         VAR_10 = VAR_8[VAR_10].next) {
     if (VAR_11 != VAR_8[VAR_10].head) {



      VAR_9--;
      break;
     }
     VAR_8[VAR_10].head = VAR_9;
    }
   }
   FUNC_1(VAR_7, VAR_8, VAR_11);
   VAR_15 |= VAR_6;
  }
  VAR_14 |= VAR_15;
 }

 return VAR_14;
}

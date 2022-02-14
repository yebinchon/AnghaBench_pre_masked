
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct fatEntry {size_t head; int flags; } ;
struct bootblock {int bpbRootDirEnts; int bpbSecPerClust; int bpbBytesPerSec; int flags; size_t bpbRootClust; size_t NumClusters; } ;
struct TYPE_4__ {size_t head; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_0 (int,int) ;
 int * VAR_5 ;
 int * VAR_6 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (size_t) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 TYPE_1__* FUNC_4 () ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*,...) ;
 TYPE_1__* VAR_7 ;

int
FUNC_7(struct bootblock *VAR_8, struct fatEntry *VAR_9)
{
 int VAR_10, VAR_11;
 int VAR_12 = VAR_4;
 size_t VAR_13;

 VAR_10 = VAR_8->bpbRootDirEnts * 32;
 VAR_11 = VAR_8->bpbSecPerClust * VAR_8->bpbBytesPerSec;

 if ((VAR_5 = FUNC_2(VAR_13 = FUNC_0(VAR_10, VAR_11))) == ((void*)0)) {
  FUNC_5("No space for directory buffer (%zu)", VAR_13);
  return VAR_3;
 }

 if ((VAR_6 = FUNC_2(VAR_13 = VAR_11)) == ((void*)0)) {
  FUNC_1(VAR_5);
  FUNC_5("No space for directory delbuf (%zu)", VAR_13);
  return VAR_3;
 }

 if ((VAR_7 = FUNC_4()) == ((void*)0)) {
  FUNC_1(VAR_5);
  FUNC_1(VAR_6);
  FUNC_5("No space for directory entry");
  return VAR_3;
 }

 FUNC_3(VAR_7, 0, sizeof *VAR_7);
 if (VAR_8->flags & VAR_1) {
  if (VAR_8->bpbRootClust < VAR_0 ||
      VAR_8->bpbRootClust >= VAR_8->NumClusters) {
   FUNC_6("Root directory starts with cluster out of range(%u)",
          VAR_8->bpbRootClust);
   return VAR_3;
  }
  if (VAR_9[VAR_8->bpbRootClust].head != VAR_8->bpbRootClust) {
   FUNC_6("Root directory doesn't start a cluster chain");
   return VAR_3;
  }

  VAR_9[VAR_8->bpbRootClust].flags |= VAR_2;
  VAR_7->head = VAR_8->bpbRootClust;
 }

 return VAR_12;
}

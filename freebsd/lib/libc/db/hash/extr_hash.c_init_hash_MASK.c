
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct stat {int st_blksize; } ;
struct TYPE_8__ {int bsize; int nelem; scalar_t__ lorder; scalar_t__ hash; scalar_t__ ffactor; } ;
struct TYPE_7__ {scalar_t__ LORDER; int BSIZE; int BSHIFT; scalar_t__ hash; scalar_t__ FFACTOR; int BITMAPS; int SPARES; int DSIZE; int SSHIFT; int SGSIZE; scalar_t__ NKEYS; } ;
typedef TYPE_1__ HTAB ;
typedef TYPE_2__ HASHINFO ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 void* FUNC_0 (int) ;
 int VAR_12 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int ,int ,int) ;
 scalar_t__ FUNC_3 (char const*,struct stat*) ;

__attribute__((used)) static HTAB *
FUNC_4(HTAB *VAR_13, const char *VAR_14, const HASHINFO *VAR_15)
{
 struct stat VAR_16;
 int VAR_17;

 VAR_17 = 1;
 VAR_13->NKEYS = 0;
 VAR_13->LORDER = VAR_1;
 VAR_13->BSIZE = VAR_3;
 VAR_13->BSHIFT = VAR_2;
 VAR_13->SGSIZE = VAR_6;
 VAR_13->SSHIFT = VAR_7;
 VAR_13->DSIZE = VAR_4;
 VAR_13->FFACTOR = VAR_5;
 VAR_13->hash = VAR_11;
 FUNC_2(VAR_13->SPARES, 0, sizeof(VAR_13->SPARES));
 FUNC_2(VAR_13->BITMAPS, 0, sizeof (VAR_13->BITMAPS));


 if (VAR_14 != ((void*)0)) {
  if (FUNC_3(VAR_14, &VAR_16))
   return (((void*)0));
  VAR_13->BSIZE = VAR_16.st_blksize;
  if (VAR_13->BSIZE > VAR_10)
   VAR_13->BSIZE = VAR_10;
  VAR_13->BSHIFT = FUNC_0(VAR_13->BSIZE);
 }

 if (VAR_15) {
  if (VAR_15->bsize) {

   VAR_13->BSHIFT = FUNC_0(VAR_15->bsize);
   VAR_13->BSIZE = 1 << VAR_13->BSHIFT;
   if (VAR_13->BSIZE > VAR_10) {
    VAR_12 = VAR_8;
    return (((void*)0));
   }
  }
  if (VAR_15->ffactor)
   VAR_13->FFACTOR = VAR_15->ffactor;
  if (VAR_15->hash)
   VAR_13->hash = VAR_15->hash;
  if (VAR_15->nelem)
   VAR_17 = VAR_15->nelem;
  if (VAR_15->lorder) {
   if (VAR_15->lorder != VAR_0 &&
       VAR_15->lorder != VAR_9) {
    VAR_12 = VAR_8;
    return (((void*)0));
   }
   VAR_13->LORDER = VAR_15->lorder;
  }
 }

 if (FUNC_1(VAR_13, VAR_17))
  return (((void*)0));
 else
  return (VAR_13);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uintmax_t ;
typedef int uint64_t ;
typedef size_t uint32_t ;
typedef int u_int ;
struct g_uzip_softc {int nblocks; struct g_uzip_blk* toc; TYPE_1__* dcp; int blksz; } ;
struct g_uzip_blk {int offset; int blen; int last; int padded; } ;
struct g_provider {int mediasize; } ;
struct g_geom {int name; } ;
struct cloop_header {int dummy; } ;
typedef int intmax_t ;
struct TYPE_2__ {int max_blen; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct g_uzip_softc*,size_t) ;
 int FUNC_1 (struct g_uzip_softc*,size_t) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,size_t,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int,char*) ;

__attribute__((used)) static int
FUNC_5(struct g_uzip_softc *VAR_5, struct g_provider *VAR_6,
    struct g_geom *VAR_7)
{
 uint32_t VAR_8, VAR_9, VAR_10;
 uint64_t VAR_11, VAR_12;
 struct g_uzip_blk *VAR_13;

 VAR_12 = sizeof(struct cloop_header) +
     (VAR_5->nblocks + 1) * sizeof(uint64_t);
 VAR_11 = VAR_5->toc[0].offset - 1;
 VAR_13 = &VAR_5->toc[0];
 for (VAR_8 = 0; VAR_8 < VAR_5->nblocks; VAR_8++) {

  if ((VAR_5->toc[VAR_8].offset < VAR_12) ||
      (VAR_5->toc[VAR_8].offset > VAR_6->mediasize)) {
   goto error_offset;
  }
  FUNC_3(VAR_3, VAR_8, ("%s: cluster #%u "
      "offset=%ju max_offset=%ju\n", VAR_7->name,
      (u_int)VAR_8, (uintmax_t)VAR_5->toc[VAR_8].offset,
      (uintmax_t)VAR_11));
  VAR_10 = VAR_0;
  if (VAR_5->toc[VAR_8].offset < VAR_11) {





   for (VAR_9 = 0; VAR_9 <= VAR_8; VAR_9++) {
                                if (VAR_5->toc[VAR_9].offset == VAR_5->toc[VAR_8].offset &&
        !FUNC_1(VAR_5, VAR_9)) {
                                        break;
                                }
                                if (VAR_9 != VAR_8) {
     continue;
    }
    FUNC_2(VAR_1, ("%s: cannot match "
        "backref'ed offset at cluster #%u\n",
        VAR_7->name, VAR_8));
    return (-1);
   }
   VAR_5->toc[VAR_8].blen = VAR_5->toc[VAR_9].blen;
   VAR_10 = VAR_9;
  } else {
   VAR_13 = &VAR_5->toc[VAR_8];





   for (VAR_9 = VAR_8 + 1; VAR_9 < VAR_5->nblocks + 1; VAR_9++) {
    if (VAR_5->toc[VAR_9].offset > VAR_11) {
     break;
    }
   }
   VAR_5->toc[VAR_8].blen = VAR_5->toc[VAR_9].offset -
       VAR_5->toc[VAR_8].offset;
   if (FUNC_0(VAR_5, VAR_8) > VAR_6->mediasize) {
    FUNC_2(VAR_1, ("%s: cluster #%u "
        "extends past media boundary (%ju > %ju)\n",
        VAR_7->name, (u_int)VAR_8,
        (uintmax_t)FUNC_0(VAR_5, VAR_8),
        (intmax_t)VAR_6->mediasize));
    return (-1);
   }
   FUNC_4(VAR_11 <= VAR_5->toc[VAR_8].offset, (
       "%s: max_offset is incorrect: %ju",
       VAR_7->name, (uintmax_t)VAR_11));
   VAR_11 = FUNC_0(VAR_5, VAR_8) - 1;
  }
  FUNC_3(VAR_4, VAR_8, ("%s: cluster #%u, original %u "
      "bytes, in %u bytes", VAR_7->name, VAR_8, VAR_5->blksz,
      VAR_5->toc[VAR_8].blen));
  if (VAR_10 != VAR_0) {
   FUNC_3(VAR_4, VAR_8, (" (->#%u)",
       (u_int)VAR_10));
  }
  FUNC_3(VAR_4, VAR_8, ("\n"));
 }
 VAR_13->last = 1;

 for (VAR_8 = 0; VAR_8 < VAR_5->nblocks; VAR_8++) {
  if (VAR_5->toc[VAR_8].blen > VAR_5->dcp->max_blen) {
   if (VAR_5->toc[VAR_8].last == 0) {
    FUNC_2(VAR_1, ("%s: cluster #%u "
        "length (%ju) exceeds "
        "max_blen (%ju)\n", VAR_7->name, VAR_8,
        (uintmax_t)VAR_5->toc[VAR_8].blen,
        (uintmax_t)VAR_5->dcp->max_blen));
    return (-1);
   }
   FUNC_2(VAR_2, ("%s: cluster #%u extra "
       "padding is detected, trimmed to %ju\n",
       VAR_7->name, VAR_8, (uintmax_t)VAR_5->dcp->max_blen));
       VAR_5->toc[VAR_8].blen = VAR_5->dcp->max_blen;
   VAR_5->toc[VAR_8].padded = 1;
  }
 }
 return (0);

error_offset:
 FUNC_2(VAR_1, ("%s: cluster #%u: invalid offset %ju, "
     "min_offset=%ju mediasize=%jd\n", VAR_7->name, (u_int)VAR_8,
     VAR_5->toc[VAR_8].offset, VAR_12, VAR_6->mediasize));
 return (-1);
}

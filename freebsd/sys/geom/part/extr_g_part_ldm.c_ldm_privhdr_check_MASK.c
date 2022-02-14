
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uintmax_t ;
typedef int uint64_t ;
typedef int u_char ;
struct ldm_privhdr {int start; int size; int db_offset; int db_size; int* th_offset; int conf_size; int log_size; } ;
struct TYPE_5__ {int db_offset; } ;
struct ldm_db {TYPE_2__ ph; } ;
struct g_provider {int mediasize; int sectorsize; int name; TYPE_1__* geom; } ;
struct g_consumer {struct g_provider* provider; } ;
typedef int hdr ;
struct TYPE_4__ {int consumer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int ,...) ;
 int FUNC_1 (int *,int) ;
 int VAR_3 ;
 struct g_consumer* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int* VAR_4 ;
 int FUNC_4 (struct g_consumer*,struct ldm_privhdr*,int *) ;
 int * FUNC_5 (struct g_consumer*,int,int*) ;
 scalar_t__ FUNC_6 (TYPE_2__*,struct ldm_privhdr*,int) ;
 int FUNC_7 (TYPE_2__*,struct ldm_privhdr*,int) ;
 int FUNC_8 (int*) ;

__attribute__((used)) static int
FUNC_9(struct ldm_db *VAR_5, struct g_consumer *VAR_6, int VAR_7)
{
 struct g_consumer *VAR_8;
 struct g_provider *VAR_9;
 struct ldm_privhdr VAR_10;
 uint64_t VAR_11, VAR_12;
 int VAR_13, VAR_14, VAR_15;
 u_char *VAR_16;

 VAR_9 = VAR_6->provider;
 if (VAR_7) {





  VAR_8 = FUNC_2(&VAR_9->geom->consumer);
  VAR_12 =
      VAR_8->provider->mediasize / VAR_8->provider->sectorsize - 1;
 } else
  VAR_12 = VAR_9->mediasize / VAR_9->sectorsize - 1;
 for (VAR_14 = 0, VAR_15 = VAR_7; VAR_15 < FUNC_8(VAR_4); VAR_15++) {
  VAR_11 = VAR_4[VAR_15];




  if (!VAR_7)
   VAR_11 += VAR_5->ph.db_offset;
  if (VAR_15 == VAR_3) {





   VAR_5->ph.db_offset = VAR_12 - VAR_2;
  }
  VAR_16 = FUNC_5(VAR_6, VAR_11 * VAR_9->sectorsize, &VAR_13);
  if (VAR_16 == ((void*)0)) {
   FUNC_0(1, "%s: failed to read private header "
       "%d at LBA %ju", VAR_9->name, VAR_15, (uintmax_t)VAR_11);
   continue;
  }
  VAR_13 = FUNC_4(VAR_6, &VAR_10, VAR_16);
  if (VAR_13 != 0) {
   FUNC_0(1, "%s: failed to parse private "
       "header %d", VAR_9->name, VAR_15);
   FUNC_1(VAR_16, VAR_9->sectorsize);
   FUNC_3(VAR_16);
   continue;
  }
  FUNC_3(VAR_16);
  if (VAR_10.start > VAR_12 ||
      VAR_10.start + VAR_10.size - 1 > VAR_12 ||
      (VAR_10.start + VAR_10.size - 1 > VAR_10.db_offset && !VAR_7) ||
      VAR_10.db_size != VAR_2 ||
      VAR_10.db_offset + VAR_2 - 1 > VAR_12 ||
      VAR_10.th_offset[0] >= VAR_2 ||
      VAR_10.th_offset[1] >= VAR_2 ||
      VAR_10.conf_size + VAR_10.log_size >= VAR_2) {
   FUNC_0(1, "%s: invalid values in the "
       "private header %d", VAR_9->name, VAR_15);
   FUNC_0(2, "%s: start: %jd, size: %jd, "
       "db_offset: %jd, db_size: %jd, th_offset0: %jd, "
       "th_offset1: %jd, conf_size: %jd, log_size: %jd, "
       "last: %jd", VAR_9->name, VAR_10.start, VAR_10.size,
       VAR_10.db_offset, VAR_10.db_size, VAR_10.th_offset[0],
       VAR_10.th_offset[1], VAR_10.conf_size, VAR_10.log_size,
       VAR_12);
   continue;
  }
  if (VAR_14 != 0 && FUNC_6(&VAR_5->ph, &VAR_10, sizeof(VAR_10)) != 0) {
   FUNC_0(0, "%s: private headers are not equal",
       VAR_9->name);
   if (VAR_15 > 1) {




    FUNC_0(0, "%s: refuse LDM metadata",
        VAR_9->name);
    return (VAR_0);
   }





   VAR_14 = 0;
  }
  if (VAR_14 == 0)
   FUNC_7(&VAR_5->ph, &VAR_10, sizeof(VAR_10));
  VAR_14 = 1;
 }
 if (VAR_14 == 0) {
  FUNC_0(1, "%s: valid LDM private header not found",
      VAR_9->name);
  return (VAR_1);
 }
 return (0);
}

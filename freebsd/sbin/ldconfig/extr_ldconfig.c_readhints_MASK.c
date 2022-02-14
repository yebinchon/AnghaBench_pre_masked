
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shlib_list {struct shlib_list* next; int ndewey; int dewey; void* path; void* name; } ;
struct hints_header {scalar_t__ hh_version; long hh_ehints; int hh_strtab; int hh_dirlist; int hh_nbucket; int hh_hashtab; long hh_strtab_sz; scalar_t__ hh_magic; } ;
struct hints_bucket {long hi_namex; long hi_pathx; int hi_ndewey; int hi_dewey; } ;


 scalar_t__ FUNC_0 (struct hints_header) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 long VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int,char*,int ) ;
 int FUNC_6 (struct hints_bucket*) ;
 int VAR_7 ;
 struct hints_bucket* FUNC_7 (int) ;
 int FUNC_8 (struct hints_bucket*,char*,int) ;
 void* FUNC_9 (int ,long,int ,int ,int,int ) ;
 int FUNC_10 (void*,long) ;
 int FUNC_11 (int ,int ,int ) ;
 scalar_t__ VAR_8 ;
 struct shlib_list** VAR_9 ;
 void* FUNC_12 (char*) ;
 int FUNC_13 (char*,int ) ;
 int FUNC_14 (char*,long,...) ;
 scalar_t__ FUNC_15 (int) ;

__attribute__((used)) static int
FUNC_16(void)
{
 int VAR_10;
 void *VAR_11;
 long VAR_12;
 long VAR_13;
 struct hints_header *VAR_14;
 struct hints_bucket *VAR_15;
 char *VAR_16;
 struct shlib_list *VAR_17;
 int VAR_18;

 if ((VAR_10 = FUNC_11(VAR_7, VAR_4, 0)) == -1) {
  FUNC_13("%s", VAR_7);
  return -1;
 }

 VAR_13 = VAR_5;
 VAR_11 = FUNC_9(0, VAR_13, VAR_6, VAR_3, VAR_10, 0);

 if (VAR_11 == VAR_2) {
  FUNC_13("%s", VAR_7);
  return -1;
 }

 VAR_14 = (struct hints_header *)VAR_11;
 if (FUNC_0(*VAR_14)) {
  FUNC_14("%s: bad magic: %lo", VAR_7,
   (unsigned long)VAR_14->hh_magic);
  return -1;
 }

 if (VAR_14->hh_version != VAR_0 &&
     VAR_14->hh_version != VAR_1) {
  FUNC_14("unsupported version: %ld", (long)VAR_14->hh_version);
  return -1;
 }

 if (VAR_14->hh_ehints > VAR_13) {
  VAR_12 = VAR_14->hh_ehints;
  FUNC_10(VAR_11, VAR_13);
  VAR_11 = FUNC_9(0, VAR_12, VAR_6, VAR_3, VAR_10, 0);
  if (VAR_11 == VAR_2) {
   FUNC_13("%s", VAR_7);
   return -1;
  }
  VAR_14 = (struct hints_header *)VAR_11;
 }
 FUNC_3(VAR_10);

 VAR_16 = (char *)VAR_11 + VAR_14->hh_strtab;

 if (VAR_14->hh_version >= VAR_1)
  FUNC_1(VAR_16 + VAR_14->hh_dirlist);
 else if (VAR_8)
  FUNC_5(1, "%s too old and does not contain the search path",
   VAR_7);

 if (VAR_8)
  return 0;

 VAR_15 = FUNC_7(sizeof(*VAR_15) * VAR_14->hh_nbucket);
 if (VAR_15 == ((void*)0))
  FUNC_4(1, "readhints");
 FUNC_8(VAR_15, (char *)VAR_11 + VAR_14->hh_hashtab,
  sizeof(*VAR_15) * VAR_14->hh_nbucket);


 for (VAR_18 = 0; VAR_18 < VAR_14->hh_nbucket; VAR_18++) {
  struct hints_bucket *VAR_19 = &VAR_15[VAR_18];


  if (VAR_19->hi_namex >= VAR_14->hh_strtab_sz) {
   FUNC_14("bad name index: %#x", VAR_19->hi_namex);
   FUNC_6(VAR_15);
   return -1;
  }
  if (VAR_19->hi_pathx >= VAR_14->hh_strtab_sz) {
   FUNC_14("bad path index: %#x", VAR_19->hi_pathx);
   FUNC_6(VAR_15);
   return -1;
  }


  VAR_17 = (struct shlib_list *)FUNC_15(sizeof *VAR_17);
  VAR_17->name = FUNC_12(VAR_16 + VAR_19->hi_namex);
  VAR_17->path = FUNC_12(VAR_16 + VAR_19->hi_pathx);
  FUNC_2(VAR_19->hi_dewey, VAR_17->dewey, sizeof(VAR_17->dewey));
  VAR_17->ndewey = VAR_19->hi_ndewey;
  VAR_17->next = ((void*)0);

  *VAR_9 = VAR_17;
  VAR_9 = &VAR_17->next;
 }

 FUNC_6(VAR_15);
 return 0;
}

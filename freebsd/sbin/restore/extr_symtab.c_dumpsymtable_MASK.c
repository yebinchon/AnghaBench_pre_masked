
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symtableheader {long volno; size_t maxino; size_t entrytblsize; long stringsize; int ntrec; int dumpdate; int dumptime; } ;
struct entry {char* e_name; scalar_t__ e_index; struct entry* e_next; struct entry* e_entries; struct entry* e_sibling; struct entry* e_links; struct entry* e_parent; int e_namlen; } ;
typedef size_t ino_t ;
struct TYPE_2__ {scalar_t__ e_index; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__** VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (char*,char*) ;
 int FUNC_6 (int ,char*,char*) ;
 int FUNC_7 (char*,int,int,int *) ;
 struct entry* FUNC_8 (size_t) ;
 size_t VAR_7 ;
 int FUNC_9 (struct entry*,struct entry*,long) ;
 int VAR_8 ;
 int FUNC_10 (char*,char*) ;
 int VAR_9 ;
 int VAR_10 ;
 char* FUNC_11 (int ) ;
 int FUNC_12 (int ,char*) ;

void
FUNC_13(char *VAR_11, long VAR_12)
{
 struct entry *VAR_13, *VAR_14;
 ino_t VAR_15;
 struct entry VAR_16, *VAR_17;
 long VAR_18 = 1, VAR_19 = 0;
 FILE *VAR_20;
 struct symtableheader VAR_21;

 FUNC_12(VAR_10, "Checkpointing the restore\n");
 if (VAR_0)
  return;
 if ((VAR_20 = FUNC_5(VAR_11, "w")) == ((void*)0)) {
  FUNC_6(VAR_9, "fopen: %s\n", FUNC_11(VAR_6));
  FUNC_10("cannot create save file %s for symbol table\n",
   VAR_11);
  FUNC_2(1);
 }
 FUNC_1(VAR_20);




 for (VAR_15 = VAR_1; VAR_15 <= VAR_7; VAR_15++) {
  for (VAR_13 = FUNC_8(VAR_15); VAR_13 != ((void*)0); VAR_13 = VAR_13->e_links) {
   VAR_13->e_index = VAR_18++;
   (void) FUNC_7(VAR_13->e_name, sizeof(char),
          (int)FUNC_0(VAR_13->e_namlen), VAR_20);
  }
 }



 VAR_14 = &VAR_16;
 VAR_19 = 0;
 for (VAR_15 = VAR_1; VAR_15 <= VAR_7; VAR_15++) {
  for (VAR_13 = FUNC_8(VAR_15); VAR_13 != ((void*)0); VAR_13 = VAR_13->e_links) {
   FUNC_9(VAR_14, VAR_13, (long)sizeof(struct entry));
   VAR_14->e_name = (char *)VAR_19;
   VAR_19 += FUNC_0(VAR_13->e_namlen);
   VAR_14->e_parent = (struct entry *)VAR_13->e_parent->e_index;
   if (VAR_13->e_links != ((void*)0))
    VAR_14->e_links =
     (struct entry *)VAR_13->e_links->e_index;
   if (VAR_13->e_sibling != ((void*)0))
    VAR_14->e_sibling =
     (struct entry *)VAR_13->e_sibling->e_index;
   if (VAR_13->e_entries != ((void*)0))
    VAR_14->e_entries =
     (struct entry *)VAR_13->e_entries->e_index;
   if (VAR_13->e_next != ((void*)0))
    VAR_14->e_next =
     (struct entry *)VAR_13->e_next->e_index;
   (void) FUNC_7((char *)VAR_14, sizeof(struct entry), 1, VAR_20);
  }
 }



 for (VAR_15 = 0; VAR_15 < VAR_5; VAR_15++) {
  if (VAR_4[VAR_15] == ((void*)0))
   VAR_17 = ((void*)0);
  else
   VAR_17 = (struct entry *)VAR_4[VAR_15]->e_index;
  (void) FUNC_7((char *)&VAR_17, sizeof(struct entry *), 1, VAR_20);
 }
 VAR_21.volno = VAR_12;
 VAR_21.maxino = VAR_7;
 VAR_21.entrytblsize = VAR_5;
 VAR_21.stringsize = VAR_19;
 VAR_21.dumptime = VAR_3;
 VAR_21.dumpdate = VAR_2;
 VAR_21.ntrec = VAR_8;
 (void) FUNC_7((char *)&VAR_21, sizeof(struct symtableheader), 1, VAR_20);
 if (FUNC_4(VAR_20)) {
  FUNC_6(VAR_9, "fwrite: %s\n", FUNC_11(VAR_6));
  FUNC_10("output error to file %s writing symbol table\n",
   VAR_11);
 }
 (void) FUNC_3(VAR_20);
}

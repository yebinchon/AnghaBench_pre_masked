
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symtableheader {int maxino; int entrytblsize; int stringsize; int volno; int ntrec; int dumpdate; int dumptime; } ;
struct stat {int st_size; } ;
struct entry {char* e_name; struct entry* e_next; struct entry* e_entries; struct entry* e_links; struct entry* e_sibling; struct entry* e_parent; int e_flags; } ;
struct TYPE_2__ {int action; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct entry* FUNC_0 (char*,int ,int ) ;
 int VAR_6 ;
 void* FUNC_1 (int,unsigned int) ;
 int FUNC_2 (int) ;
 int VAR_7 ;
 TYPE_1__ VAR_8 ;
 int FUNC_3 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 struct entry** VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (int ,char*,...) ;
 scalar_t__ FUNC_5 (int,struct stat*) ;
 int FUNC_6 (int ) ;
 int VAR_14 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,int ,int ) ;
 int FUNC_9 (char*,...) ;
 scalar_t__ FUNC_10 (int,char*,int) ;
 int VAR_15 ;
 int VAR_16 ;
 char* FUNC_11 (int ) ;
 int FUNC_12 (int ,char*) ;

void
FUNC_13(char *VAR_17)
{
 char *VAR_18;
 long VAR_19;
 struct entry *VAR_20;
 struct entry *VAR_21, *VAR_22;
 struct symtableheader VAR_23;
 struct stat VAR_24;
 long VAR_25;
 int VAR_26;

 FUNC_12(VAR_16, "Initialize symbol table.\n");
 if (VAR_17 == ((void*)0)) {
  VAR_12 = VAR_14 / VAR_0;
  VAR_11 = FUNC_1((unsigned)VAR_12, sizeof(struct entry *));
  if (VAR_11 == ((void*)0))
   FUNC_9("no memory for entry table\n");
  VAR_20 = FUNC_0(".", VAR_5, VAR_2);
  VAR_20->e_flags |= VAR_1;
  return;
 }
 if ((VAR_26 = FUNC_8(VAR_17, VAR_3, 0)) < 0) {
  FUNC_4(VAR_15, "open: %s\n", FUNC_11(VAR_13));
  FUNC_9("cannot open symbol table file %s\n", VAR_17);
 }
 if (FUNC_5(VAR_26, &VAR_24) < 0) {
  FUNC_4(VAR_15, "stat: %s\n", FUNC_11(VAR_13));
  FUNC_9("cannot stat symbol table file %s\n", VAR_17);
 }
 VAR_19 = VAR_24.st_size - sizeof(struct symtableheader);
 VAR_18 = FUNC_1(sizeof(char), (unsigned)VAR_19);
 if (VAR_18 == ((void*)0))
  FUNC_9("cannot allocate space for symbol table\n");
 if (FUNC_10(VAR_26, VAR_18, (int)VAR_19) < 0 ||
     FUNC_10(VAR_26, (char *)&VAR_23, sizeof(struct symtableheader)) < 0) {
  FUNC_4(VAR_15, "read: %s\n", FUNC_11(VAR_13));
  FUNC_9("cannot read symbol table file %s\n", VAR_17);
 }
 (void)FUNC_2(VAR_26);
 switch (VAR_7) {
 case 'r':




  if (VAR_23.dumpdate != VAR_10) {
   if (VAR_23.dumpdate < VAR_10)
    FUNC_4(VAR_15, "Incremental tape too low\n");
   else
    FUNC_4(VAR_15, "Incremental tape too high\n");
   FUNC_3(1);
  }
  break;
 case 'R':



  VAR_8.action = VAR_4;
  VAR_10 = VAR_23.dumptime;
  VAR_9 = VAR_23.dumpdate;
  if (!VAR_6)
   FUNC_7(VAR_23.ntrec);
  FUNC_6(VAR_23.volno);
  break;
 default:
  FUNC_9("initsymtable called from command %c\n", VAR_7);
  break;
 }
 VAR_14 = VAR_23.maxino;
 VAR_12 = VAR_23.entrytblsize;
 VAR_11 = (struct entry **)
  (VAR_18 + VAR_19 - (VAR_12 * sizeof(struct entry *)));
 VAR_21 = (struct entry *)(VAR_18 + VAR_23.stringsize - sizeof(struct entry));
 VAR_22 = (struct entry *)VAR_11;
 for (VAR_25 = 0; VAR_25 < VAR_12; VAR_25++) {
  if (VAR_11[VAR_25] == ((void*)0))
   continue;
  VAR_11[VAR_25] = &VAR_21[(long)VAR_11[VAR_25]];
 }
 for (VAR_20 = &VAR_21[1]; VAR_20 < VAR_22; VAR_20++) {
  VAR_20->e_name = VAR_18 + (long)VAR_20->e_name;
  VAR_20->e_parent = &VAR_21[(long)VAR_20->e_parent];
  if (VAR_20->e_sibling != ((void*)0))
   VAR_20->e_sibling = &VAR_21[(long)VAR_20->e_sibling];
  if (VAR_20->e_links != ((void*)0))
   VAR_20->e_links = &VAR_21[(long)VAR_20->e_links];
  if (VAR_20->e_entries != ((void*)0))
   VAR_20->e_entries = &VAR_21[(long)VAR_20->e_entries];
  if (VAR_20->e_next != ((void*)0))
   VAR_20->e_next = &VAR_21[(long)VAR_20->e_next];
 }
}

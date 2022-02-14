
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtree_option {char const* value; struct mtree_option* next; } ;
struct mtree_entry {char* name; int * options; struct mtree_entry* next_dup; int rbnode; scalar_t__ full; struct mtree_entry* next; scalar_t__ used; } ;
struct mtree {int rbtree; struct mtree_entry* entries; } ;
struct archive_read {int archive; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct archive_read*,int **,char const*,int) ;
 int FUNC_3 (int *,int ,char*) ;
 int VAR_2 ;
 void* FUNC_4 (size_t) ;
 int FUNC_5 (char*,char const*,size_t) ;
 int FUNC_6 (char*,struct mtree_entry*) ;
 int FUNC_7 (int **,char const*,size_t) ;
 char* FUNC_8 (char const*,char) ;
 size_t FUNC_9 (char const*,char*) ;
 int FUNC_10 (char const*) ;
 int FUNC_11 (char const*,char*) ;

__attribute__((used)) static int
FUNC_12(struct archive_read *VAR_3, struct mtree *VAR_4,
    struct mtree_option **VAR_5, const char *VAR_6, ssize_t VAR_7,
    struct mtree_entry **VAR_8, int VAR_9)
{
 struct mtree_entry *VAR_10;
 struct mtree_option *VAR_11;
 const char *VAR_12, *VAR_13, *VAR_14, *VAR_15;
 size_t VAR_16, VAR_17;
 int VAR_18, VAR_19;

 if ((VAR_10 = FUNC_4(sizeof(*VAR_10))) == ((void*)0)) {
  FUNC_3(&VAR_3->archive, VAR_2, "Can't allocate memory");
  return (VAR_0);
 }
 VAR_10->next = ((void*)0);
 VAR_10->options = ((void*)0);
 VAR_10->name = ((void*)0);
 VAR_10->used = 0;
 VAR_10->full = 0;


 if (*VAR_8 == ((void*)0))
  VAR_4->entries = VAR_10;
 else
  (*VAR_8)->next = VAR_10;
 *VAR_8 = VAR_10;

 if (VAR_9) {


  while (VAR_7 > 0) {
   char VAR_20 = VAR_6[VAR_7 - 1];
   if (VAR_20 == '\r'
       || VAR_20 == '\n'
       || VAR_20 == '\t'
       || VAR_20 == ' ') {
    VAR_7--;
   } else {
    break;
   }
  }

  VAR_14 = VAR_6;
  for (VAR_19 = 0; VAR_19 < VAR_7; VAR_19++) {
   if (VAR_6[VAR_19] == '\r'
       || VAR_6[VAR_19] == '\n'
       || VAR_6[VAR_19] == '\t'
       || VAR_6[VAR_19] == ' ') {
    VAR_14 = VAR_6 + VAR_19 + 1;
   }
  }
  VAR_16 = VAR_6 + VAR_7 - VAR_14;
  VAR_15 = VAR_14;
 } else {

  VAR_16 = FUNC_9(VAR_6, " \t\r\n");
  VAR_14 = VAR_6;
  VAR_6 += VAR_16;
  VAR_15 = VAR_6 + VAR_7;
 }



 if ((VAR_10->name = FUNC_4(VAR_16 + 1)) == ((void*)0)) {
  FUNC_3(&VAR_3->archive, VAR_2, "Can't allocate memory");
  return (VAR_0);
 }

 FUNC_5(VAR_10->name, VAR_14, VAR_16);
 VAR_10->name[VAR_16] = '\0';
 FUNC_6(VAR_10->name, VAR_10);

 VAR_10->next_dup = ((void*)0);
 if (VAR_10->full) {
  if (!FUNC_1(&VAR_4->rbtree, &VAR_10->rbnode)) {
   struct mtree_entry *VAR_21;
   VAR_21 = (struct mtree_entry *)FUNC_0(
       &VAR_4->rbtree, VAR_10->name);
   while (VAR_21->next_dup)
    VAR_21 = VAR_21->next_dup;
   VAR_21->next_dup = VAR_10;
  }
 }

 for (VAR_11 = *VAR_5; VAR_11 != ((void*)0); VAR_11 = VAR_11->next) {
  VAR_18 = FUNC_2(VAR_3, &VAR_10->options, VAR_11->value,
      FUNC_10(VAR_11->value));
  if (VAR_18 != VAR_1)
   return (VAR_18);
 }

 for (;;) {
  VAR_12 = VAR_6 + FUNC_11(VAR_6, " \t\r\n");
  if (*VAR_12 == '\0')
   return (VAR_1);
  if (VAR_12 >= VAR_15)
   return (VAR_1);
  VAR_6 = VAR_12;
  VAR_12 = VAR_6 + FUNC_9(VAR_6, " \t\r\n");
  VAR_13 = FUNC_8(VAR_6, '=');
  if (VAR_13 == ((void*)0) || VAR_13 > VAR_12)
   VAR_17 = VAR_12 - VAR_6;
  else
   VAR_17 = VAR_13 - VAR_6;

  FUNC_7(&VAR_10->options, VAR_6, VAR_17);
  VAR_18 = FUNC_2(VAR_3, &VAR_10->options, VAR_6, VAR_12 - VAR_6);
  if (VAR_18 != VAR_1)
   return (VAR_18);
  VAR_6 = VAR_12;
 }
}

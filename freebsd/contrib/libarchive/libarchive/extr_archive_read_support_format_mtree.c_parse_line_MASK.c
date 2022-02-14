
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtree_option {struct mtree_option* next; } ;
struct mtree_entry {struct mtree_option* options; } ;
struct mtree {int dummy; } ;
struct archive_read {int archive; } ;
struct archive_entry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (struct archive_read*,struct mtree*,struct archive_entry*,struct mtree_option*,int*) ;

__attribute__((used)) static int
FUNC_2(struct archive_read *VAR_4, struct archive_entry *VAR_5,
    struct mtree *VAR_6, struct mtree_entry *VAR_7, int *VAR_8)
{
 struct mtree_option *VAR_9;
 int VAR_10 = VAR_1, VAR_11;

 for (VAR_9 = VAR_7->options; VAR_9 != ((void*)0); VAR_9 = VAR_9->next) {
  VAR_11 = FUNC_1(VAR_4, VAR_6, VAR_5, VAR_9, VAR_8);
  if (VAR_11 < VAR_10)
   VAR_10 = VAR_11;
 }
 if (VAR_10 == VAR_1 && (*VAR_8 & VAR_3) == 0) {
  FUNC_0(&VAR_4->archive, VAR_0,
      "Missing type keyword in mtree specification");
  return (VAR_2);
 }
 return (VAR_10);
}

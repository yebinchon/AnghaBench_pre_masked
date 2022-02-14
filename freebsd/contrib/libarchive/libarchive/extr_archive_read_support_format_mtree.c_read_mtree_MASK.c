
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct mtree_option {int dummy; } ;
struct mtree_entry {int dummy; } ;
struct mtree {char* archive_format_name; int entries; int this_entry; int archive_format; } ;
struct archive_read {int archive; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,char*,int) ;
 int FUNC_1 (struct archive_read*,int*) ;
 int FUNC_2 (struct mtree_option*) ;
 int FUNC_3 (char) ;
 int FUNC_4 (struct archive_read*,struct mtree*,struct mtree_option**,char*,int,struct mtree_entry**,int) ;
 int FUNC_5 (struct archive_read*,struct mtree_option**,char*) ;
 int FUNC_6 (struct archive_read*,struct mtree_option**,char*) ;
 int FUNC_7 (struct archive_read*,struct mtree*,char**,int) ;
 scalar_t__ FUNC_8 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_9(struct archive_read *VAR_4, struct mtree *VAR_5)
{
 ssize_t VAR_6;
 uintmax_t VAR_7;
 char *VAR_8, *VAR_9;
 struct mtree_option *VAR_10;
 struct mtree_entry *VAR_11;
 int VAR_12, VAR_13;

 VAR_5->archive_format = VAR_2;
 VAR_5->archive_format_name = "mtree";

 VAR_10 = ((void*)0);
 VAR_11 = ((void*)0);

 (void)FUNC_1(VAR_4, &VAR_13);

 for (VAR_7 = 1; ; ++VAR_7) {
  VAR_12 = VAR_3;
  VAR_6 = FUNC_7(VAR_4, VAR_5, &VAR_8, 65536);
  if (VAR_6 == 0) {
   VAR_5->this_entry = VAR_5->entries;
   FUNC_2(VAR_10);
   return (VAR_3);
  }
  if (VAR_6 < 0) {
   FUNC_2(VAR_10);
   return ((int)VAR_6);
  }

  while (*VAR_8 == ' ' || *VAR_8 == '\t') {
   ++VAR_8;
   --VAR_6;
  }

  if (*VAR_8 == '#')
   continue;
  if (*VAR_8 == '\r' || *VAR_8 == '\n' || *VAR_8 == '\0')
   continue;

  for (VAR_9 = VAR_8;VAR_9 < VAR_8 + VAR_6 - 1; VAR_9++) {
   if (!FUNC_3(*VAR_9)) {
    VAR_12 = VAR_1;
    break;
   }
  }
  if (VAR_12 != VAR_3)
   break;
  if (*VAR_8 != '/') {
   VAR_12 = FUNC_4(VAR_4, VAR_5, &VAR_10, VAR_8, VAR_6,
       &VAR_11, VAR_13);
  } else if (VAR_6 > 4 && FUNC_8(VAR_8, "/set", 4) == 0) {
   if (VAR_8[4] != ' ' && VAR_8[4] != '\t')
    break;
   VAR_12 = FUNC_5(VAR_4, &VAR_10, VAR_8);
  } else if (VAR_6 > 6 && FUNC_8(VAR_8, "/unset", 6) == 0) {
   if (VAR_8[6] != ' ' && VAR_8[6] != '\t')
    break;
   VAR_12 = FUNC_6(VAR_4, &VAR_10, VAR_8);
  } else
   break;

  if (VAR_12 != VAR_3) {
   FUNC_2(VAR_10);
   return VAR_12;
  }
 }

 FUNC_0(&VAR_4->archive, VAR_0,
     "Can't parse line %ju", VAR_7);
 FUNC_2(VAR_10);
 return (VAR_1);
}

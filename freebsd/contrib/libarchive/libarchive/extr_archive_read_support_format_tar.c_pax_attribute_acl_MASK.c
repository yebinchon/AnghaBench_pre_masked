
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tar {int * sconv_acl; } ;
struct archive_read {int archive; } ;
struct archive_entry {int dummy; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char const*,int,int *) ;
 int FUNC_1 (struct archive_entry*) ;
 int FUNC_2 (int *,int ,char*,...) ;
 int * FUNC_3 (int *,char*,int) ;

__attribute__((used)) static int
FUNC_4(struct archive_read *VAR_4, struct tar *VAR_5,
    struct archive_entry *VAR_6, const char *VAR_7, int VAR_8)
{
 int VAR_9;
 const char* VAR_10;

 switch (VAR_8) {
 case 130:
  VAR_10 = "SCHILY.acl.access";
  break;
 case 129:
  VAR_10 = "SCHILY.acl.default";
  break;
 case 128:
  VAR_10 = "SCHILY.acl.ace";
  break;
 default:
  FUNC_2(&VAR_4->archive, VAR_0,
      "Unknown ACL type: %d", VAR_8);
  return(VAR_1);
 }

 if (VAR_5->sconv_acl == ((void*)0)) {
  VAR_5->sconv_acl =
      FUNC_3(
   &(VAR_4->archive), "UTF-8", 1);
  if (VAR_5->sconv_acl == ((void*)0))
   return (VAR_1);
 }

 VAR_9 = FUNC_0(FUNC_1(VAR_6), VAR_7, VAR_8,
     VAR_5->sconv_acl);
 if (VAR_9 != VAR_2) {
  if (VAR_9 == VAR_1) {
   FUNC_2(&VAR_4->archive, VAR_3,
       "%s %s", "Can't allocate memory for ",
       VAR_10);
   return (VAR_9);
  }
  FUNC_2(&VAR_4->archive,
      VAR_0, "%s %s", "Parse error: ", VAR_10);
 }
 return (VAR_9);
}

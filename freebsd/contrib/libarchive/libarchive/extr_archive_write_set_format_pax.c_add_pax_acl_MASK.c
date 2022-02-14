
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pax {int pax_header; int sconv_utf8; } ;
struct archive_write {int archive; } ;
struct archive_entry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int *,char const*,char*) ;
 char* FUNC_1 (struct archive_entry*,int *,int,int ) ;
 int FUNC_2 (struct archive_entry*) ;
 int FUNC_3 (int *,scalar_t__,char*,char*,char const*,...) ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5(struct archive_write *VAR_9,
    struct archive_entry *VAR_10, struct pax *VAR_11, int VAR_12)
{
 char *VAR_13;
 const char *VAR_14;
 int VAR_15;

 VAR_15 = FUNC_2(VAR_10);

 if ((VAR_15 & VAR_2) != 0)
  VAR_14 = "SCHILY.acl.ace";
 else if ((VAR_12 & VAR_0) != 0)
  VAR_14 = "SCHILY.acl.access";
 else if ((VAR_12 & VAR_1) != 0)
  VAR_14 = "SCHILY.acl.default";
 else
  return (VAR_4);

 VAR_13 = FUNC_1(VAR_10, ((void*)0), VAR_12, VAR_11->sconv_utf8);
 if (VAR_13 == ((void*)0)) {
  if (VAR_8 == VAR_7) {
   FUNC_3(&VAR_9->archive, VAR_7, "%s %s",
       "Can't allocate memory for ", VAR_14);
   return (VAR_4);
  }
  FUNC_3(&VAR_9->archive,
      VAR_3, "%s %s %s",
      "Can't translate ", VAR_14, " to UTF-8");
  return(VAR_6);
 }

 if (*VAR_13 != '\0') {
  FUNC_0(&(VAR_11->pax_header),
      VAR_14, VAR_13);
 }
 FUNC_4(VAR_13);
 return(VAR_5);
}

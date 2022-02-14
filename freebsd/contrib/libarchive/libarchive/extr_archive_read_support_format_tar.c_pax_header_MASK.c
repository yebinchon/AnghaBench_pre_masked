
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_string {char* s; size_t length; } ;
struct tar {struct archive_string entry_uname; struct archive_string entry_pathname; struct archive_string entry_pathname_override; struct archive_string entry_linkpath; struct archive_string entry_gname; scalar_t__ compat_2x; struct archive_string_conv* opt_sconv; scalar_t__ pax_hdrcharset_binary; } ;
struct archive_string_conv {int dummy; } ;
struct archive_read {int archive; } ;
struct archive_entry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct archive_entry*,char*) ;
 scalar_t__ FUNC_1 (struct archive_entry*,char*,int ,struct archive_string_conv*) ;
 int FUNC_2 (struct archive_entry*,char*) ;
 scalar_t__ FUNC_3 (struct archive_entry*,char*,int ,struct archive_string_conv*) ;
 int FUNC_4 (struct archive_entry*,char*) ;
 scalar_t__ FUNC_5 (struct archive_entry*,char*,int ,struct archive_string_conv*) ;
 int FUNC_6 (struct archive_entry*,char*) ;
 scalar_t__ FUNC_7 (struct archive_entry*,char*,int ,struct archive_string_conv*) ;
 int FUNC_8 (int *,int ,char*) ;
 struct archive_string_conv* FUNC_9 (int *,char*,int) ;
 int FUNC_10 (struct archive_string_conv*,int ) ;
 int FUNC_11 (struct archive_string*) ;
 int FUNC_12 (struct archive_string*) ;
 int FUNC_13 (int,int) ;
 int FUNC_14 (struct archive_read*,struct tar*,struct archive_entry*,char*,char*,size_t) ;
 int FUNC_15 (struct archive_read*,struct archive_string_conv*,char*) ;

__attribute__((used)) static int
FUNC_16(struct archive_read *VAR_5, struct tar *VAR_6,
    struct archive_entry *VAR_7, struct archive_string *VAR_8)
{
 size_t VAR_9, VAR_10, VAR_11, VAR_12;
 char *VAR_13;
 char *VAR_14, *VAR_15;
 struct archive_string *VAR_16;
 struct archive_string_conv *VAR_17;
 int VAR_18, VAR_19;
 char *VAR_20 = VAR_8->s;

 VAR_9 = VAR_8->length;
 VAR_6->pax_hdrcharset_binary = 0;
 FUNC_11(&(VAR_6->entry_gname));
 FUNC_11(&(VAR_6->entry_linkpath));
 FUNC_11(&(VAR_6->entry_pathname));
 FUNC_11(&(VAR_6->entry_pathname_override));
 FUNC_11(&(VAR_6->entry_uname));
 VAR_18 = VAR_2;
 while (VAR_9 > 0) {

  VAR_11 = 0;
  VAR_10 = VAR_9;
  VAR_13 = VAR_20;
  while (VAR_10>0) {
   if (*VAR_13 == ' ') {
    VAR_13++;
    VAR_10--;
    break;
   }
   if (*VAR_13 < '0' || *VAR_13 > '9') {
    FUNC_8(&VAR_5->archive, VAR_0,
        "Ignoring malformed pax extended attributes");
    return (VAR_3);
   }
   VAR_11 *= 10;
   VAR_11 += *VAR_13 - '0';
   if (VAR_11 > 999999) {
    FUNC_8(&VAR_5->archive, VAR_0,
        "Rejecting pax extended attribute > 1MB");
    return (VAR_3);
   }
   VAR_13++;
   VAR_10--;
  }






  if (VAR_11 > VAR_9
      || VAR_11 < 1
      || VAR_20[VAR_11 - 1] != '\n')
  {
   FUNC_8(&VAR_5->archive, VAR_0,
       "Ignoring malformed pax extended attribute");
   return (VAR_3);
  }


  VAR_20[VAR_11 - 1] = '\0';


  VAR_14 = VAR_13;
  if (VAR_14[0] == '=')
   return (-1);
  while (*VAR_13 && *VAR_13 != '=')
   ++VAR_13;
  if (*VAR_13 == '\0') {
   FUNC_8(&VAR_5->archive, VAR_0,
       "Invalid pax extended attributes");
   return (VAR_3);
  }
  *VAR_13 = '\0';

  VAR_15 = VAR_13 + 1;


  VAR_12 = VAR_20 + VAR_11 - 1 - VAR_15;


  VAR_19 = FUNC_14(VAR_5, VAR_6, VAR_7, VAR_14, VAR_15, VAR_12);
  if (VAR_19 == VAR_1)
   return (VAR_19);
  VAR_18 = FUNC_13(VAR_18, VAR_19);


  VAR_20 += VAR_11;
  VAR_9 -= VAR_11;
 }
 if (VAR_6->pax_hdrcharset_binary)
  VAR_17 = VAR_6->opt_sconv;
 else {
  VAR_17 = FUNC_9(
      &(VAR_5->archive), "UTF-8", 1);
  if (VAR_17 == ((void*)0))
   return (VAR_1);
  if (VAR_6->compat_2x)
   FUNC_10(VAR_17,
       VAR_4);
 }

 if (FUNC_12(&(VAR_6->entry_gname)) > 0) {
  if (FUNC_1(VAR_7, VAR_6->entry_gname.s,
      FUNC_12(&(VAR_6->entry_gname)), VAR_17) != 0) {
   VAR_18 = FUNC_15(VAR_5, VAR_17, "Gname");
   if (VAR_18 == VAR_1)
    return (VAR_18);

   FUNC_0(VAR_7, VAR_6->entry_gname.s);
  }
 }
 if (FUNC_12(&(VAR_6->entry_linkpath)) > 0) {
  if (FUNC_3(VAR_7, VAR_6->entry_linkpath.s,
      FUNC_12(&(VAR_6->entry_linkpath)), VAR_17) != 0) {
   VAR_18 = FUNC_15(VAR_5, VAR_17, "Linkname");
   if (VAR_18 == VAR_1)
    return (VAR_18);

   FUNC_2(VAR_7, VAR_6->entry_linkpath.s);
  }
 }
 VAR_16 = ((void*)0);
 if (FUNC_12(&(VAR_6->entry_pathname_override)) > 0)
  VAR_16 = &(VAR_6->entry_pathname_override);
 else if (FUNC_12(&(VAR_6->entry_pathname)) > 0)
  VAR_16 = &(VAR_6->entry_pathname);
 if (VAR_16 != ((void*)0)) {
  if (FUNC_5(VAR_7, VAR_16->s,
      FUNC_12(VAR_16), VAR_17) != 0) {
   VAR_18 = FUNC_15(VAR_5, VAR_17, "Pathname");
   if (VAR_18 == VAR_1)
    return (VAR_18);

   FUNC_4(VAR_7, VAR_16->s);
  }
 }
 if (FUNC_12(&(VAR_6->entry_uname)) > 0) {
  if (FUNC_7(VAR_7, VAR_6->entry_uname.s,
      FUNC_12(&(VAR_6->entry_uname)), VAR_17) != 0) {
   VAR_18 = FUNC_15(VAR_5, VAR_17, "Uname");
   if (VAR_18 == VAR_1)
    return (VAR_18);

   FUNC_6(VAR_7, VAR_6->entry_uname.s);
  }
 }
 return (VAR_18);
}

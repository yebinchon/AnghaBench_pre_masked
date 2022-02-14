
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_10__ {char* s; size_t length; } ;
struct isofile {scalar_t__ dircnt; int entry; TYPE_2__ basename; TYPE_2__ parentdir; TYPE_2__ symlink; TYPE_2__ basename_utf16; } ;
struct TYPE_9__ {scalar_t__ joliet; } ;
struct iso9660 {int * sconv_to_utf16be; int * sconv_from_utf16be; TYPE_1__ opt; } ;
struct archive_wstring {int length; int s; } ;
struct archive_write {int archive; struct iso9660* format_data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,char const**,size_t*,int *) ;
 int * FUNC_3 (int ) ;
 char* FUNC_4 (int ) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int *,scalar_t__,char*) ;
 int FUNC_7 (TYPE_2__*,char const*) ;
 int FUNC_8 (TYPE_2__*,int ,int ) ;
 int * FUNC_9 (int *,char*,int) ;
 int * FUNC_10 (int *,char*,int) ;
 int FUNC_11 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*) ;
 int * FUNC_13 (TYPE_2__*,size_t) ;
 int FUNC_14 (struct archive_wstring*) ;
 scalar_t__ FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (struct archive_wstring*,int const*) ;
 int FUNC_17 (struct archive_wstring*) ;
 scalar_t__ FUNC_18 (char*) ;
 int FUNC_19 (int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_20 (char*,char const*,size_t) ;
 int FUNC_21 (char*,char*,int) ;
 int FUNC_22 (char*,char*) ;
 int FUNC_23 (char*) ;

__attribute__((used)) static int
FUNC_24(struct archive_write *VAR_8, struct isofile *VAR_9)
{
 struct iso9660 *VAR_10;
 const char *VAR_11;
 char *VAR_12, *VAR_13, *VAR_14;
 size_t VAR_15;
 int VAR_16 = VAR_4;

 VAR_10 = VAR_8->format_data;

 FUNC_12(&(VAR_9->parentdir));
 FUNC_12(&(VAR_9->basename));
 FUNC_12(&(VAR_9->basename_utf16));
 FUNC_12(&(VAR_9->symlink));

 VAR_11 = FUNC_1(VAR_9->entry);
 if (VAR_11 == ((void*)0) || VAR_11[0] == '\0') {
  VAR_9->dircnt = 0;
  return (VAR_16);
 }




 if (VAR_10->opt.joliet) {
  const char *VAR_17, *VAR_18;
  size_t VAR_19, VAR_20;

  if (VAR_10->sconv_to_utf16be == ((void*)0)) {
   VAR_10->sconv_to_utf16be =
       FUNC_10(
    &(VAR_8->archive), "UTF-16BE", 1);
   if (VAR_10->sconv_to_utf16be == ((void*)0))

    return (VAR_3);
   VAR_10->sconv_from_utf16be =
       FUNC_9(
    &(VAR_8->archive), "UTF-16BE", 1);
   if (VAR_10->sconv_from_utf16be == ((void*)0))

    return (VAR_3);
  }




  if (0 > FUNC_2(VAR_9->entry, &VAR_17, &VAR_19,
      VAR_10->sconv_to_utf16be)) {
   if (VAR_7 == VAR_6) {
    FUNC_6(&VAR_8->archive, VAR_6,
        "Can't allocate memory for UTF-16BE");
    return (VAR_3);
   }
   FUNC_6(&VAR_8->archive, VAR_2,
       "A filename cannot be converted to UTF-16BE;"
       "You should disable making Joliet extension");
   VAR_16 = VAR_5;
  }





  while (VAR_19 >= 2) {




   if (VAR_17[VAR_19-2] == 0 && VAR_17[VAR_19-1] == '/')

   {
    VAR_19 -= 2;
   } else
    break;
  }




  VAR_18 = VAR_17;
  VAR_19 >>= 1;
  VAR_20 = VAR_19;
  while (VAR_19 > 0) {



   if (VAR_17[0] == 0 && VAR_17[1] == '/')

   {
    VAR_18 = VAR_17 + 2;
    VAR_20 = VAR_19 -1;
   }
   VAR_17 += 2;
   VAR_19 --;
  }
  VAR_20 <<= 1;
  if (FUNC_13(&(VAR_9->basename_utf16),
      VAR_20) == ((void*)0)) {
   FUNC_6(&VAR_8->archive, VAR_6,
       "Can't allocate memory for UTF-16BE");
   return (VAR_3);
  }




  FUNC_20(VAR_9->basename_utf16.s, VAR_18, VAR_20);
  VAR_9->basename_utf16.length = VAR_20;
 }

 FUNC_7(&(VAR_9->parentdir), VAR_11);
 VAR_15 = VAR_9->parentdir.length;
 VAR_12 = VAR_13 = VAR_9->parentdir.s;




 while (*VAR_12) {
  if (VAR_12[0] == '/') {
   VAR_12++;
   VAR_15--;
  } else if (VAR_12[0] != '.')
   break;
  else if (VAR_12[1] == '.' && VAR_12[2] == '/') {
   VAR_12 += 3;
   VAR_15 -= 3;
  } else if (VAR_12[1] == '/' || (VAR_12[1] == '.' && VAR_12[2] == '\0')) {
   VAR_12 += 2;
   VAR_15 -= 2;
  } else if (VAR_12[1] == '\0') {
   VAR_12++;
   VAR_15--;
  } else
   break;
 }
 if (VAR_12 != VAR_13) {
  FUNC_21(VAR_13, VAR_12, VAR_15+1);
  VAR_12 = VAR_13;
 }



 while (VAR_15 > 0) {
  size_t VAR_21 = VAR_15;

  if (VAR_15 > 0 && VAR_12[VAR_15-1] == '/') {
   VAR_12[VAR_15-1] = '\0';
   VAR_15--;
  }
  if (VAR_15 > 1 && VAR_12[VAR_15-2] == '/' && VAR_12[VAR_15-1] == '.') {
   VAR_12[VAR_15-2] = '\0';
   VAR_15 -= 2;
  }
  if (VAR_15 > 2 && VAR_12[VAR_15-3] == '/' && VAR_12[VAR_15-2] == '.' &&
      VAR_12[VAR_15-1] == '.') {
   VAR_12[VAR_15-3] = '\0';
   VAR_15 -= 3;
  }
  if (VAR_21 == VAR_15)
   break;
 }
 while (*VAR_12) {
  if (VAR_12[0] == '/') {
   if (VAR_12[1] == '/')

    FUNC_21(VAR_12, VAR_12+1, FUNC_23(VAR_12+1) + 1);
   else if (VAR_12[1] == '.' && VAR_12[2] == '/')

    FUNC_21(VAR_12, VAR_12+2, FUNC_23(VAR_12+2) + 1);
   else if (VAR_12[1] == '.' && VAR_12[2] == '.' && VAR_12[3] == '/') {



    char *VAR_22 = VAR_12 -1;
    while (VAR_22 >= VAR_13) {
     if (*VAR_22 == '/')
      break;
     --VAR_22;
    }
    if (VAR_22 > VAR_13) {
     FUNC_22(VAR_22, VAR_12+3);
     VAR_12 = VAR_22;
    } else {
     FUNC_22(VAR_13, VAR_12+4);
     VAR_12 = VAR_13;
    }
   } else
    VAR_12++;
  } else
   VAR_12++;
 }
 VAR_12 = VAR_13;
 VAR_15 = FUNC_23(VAR_12);

 if (FUNC_0(VAR_9->entry) == VAR_1) {

  VAR_11 = FUNC_4(VAR_9->entry);
  FUNC_7(&(VAR_9->symlink), VAR_11);
 }





 VAR_14 = ((void*)0);
 VAR_9->dircnt = 0;
 for (; *VAR_12 != '\0'; VAR_12++)
  if (*VAR_12 == '/') {
   VAR_14 = VAR_12;
   VAR_9->dircnt++;
  }
 if (VAR_14 == ((void*)0)) {

  VAR_9->parentdir.length = VAR_15;
  FUNC_11(&(VAR_9->basename), &(VAR_9->parentdir));
  FUNC_12(&(VAR_9->parentdir));
  *VAR_9->parentdir.s = '\0';
  return (VAR_16);
 }


 *VAR_14 = '\0';
 VAR_9->parentdir.length = VAR_14 - VAR_13;
 FUNC_7(&(VAR_9->basename), VAR_14 + 1);
 if (FUNC_0(VAR_9->entry) == VAR_0)
  VAR_9->dircnt ++;
 return (VAR_16);
}

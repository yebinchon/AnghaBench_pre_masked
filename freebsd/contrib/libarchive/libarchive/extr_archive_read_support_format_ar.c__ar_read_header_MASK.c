
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {scalar_t__ archive_format; char* archive_format_name; } ;
struct archive_read {TYPE_1__ archive; } ;
struct archive_entry {int dummy; } ;
struct ar {char* strtab; size_t strtab_size; scalar_t__ entry_bytes_remaining; } ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 void* FUNC_0 (struct archive_read*,size_t,int *) ;
 int FUNC_1 (struct archive_read*,size_t) ;
 int FUNC_2 (char const*,int) ;
 int FUNC_3 (struct ar*,struct archive_entry*,char const*) ;
 int FUNC_4 (struct archive_read*) ;
 int FUNC_5 (struct archive_entry*,char*) ;
 int FUNC_6 (struct archive_entry*,int ) ;
 int FUNC_7 (struct archive_entry*,scalar_t__) ;
 int FUNC_8 (TYPE_1__*,int ,char*) ;
 int FUNC_9 (char*) ;
 char* FUNC_10 (size_t) ;
 int FUNC_11 (char*,void const*,size_t) ;
 int * FUNC_12 (char*,char) ;
 scalar_t__ FUNC_13 (char*,char*) ;
 scalar_t__ FUNC_14 (char const*,char*,int) ;
 int FUNC_15 (char*,void const*,size_t) ;

__attribute__((used)) static int
FUNC_16(struct archive_read *VAR_15, struct archive_entry *VAR_16,
 struct ar *VAR_17, const char *VAR_18, size_t *VAR_19)
{
 char VAR_20[VAR_9 + 1];
 uint64_t VAR_21;
 size_t VAR_22, VAR_23;
 char *VAR_24, *VAR_25;
 const void *VAR_26;
 int VAR_27;


 if (FUNC_14(VAR_18 + VAR_7, "`\n", 2) != 0) {
  FUNC_8(&VAR_15->archive, VAR_12,
      "Incorrect file header signature");
  return (VAR_2);
 }


 FUNC_15(VAR_20, VAR_18 + VAR_8, VAR_9);
 VAR_20[VAR_9] = '\0';




 if (VAR_15->archive.archive_format == VAR_3) {







  if (FUNC_14(VAR_20, "#1/", 3) == 0)
   VAR_15->archive.archive_format = VAR_4;
  else if (FUNC_12(VAR_20, '/') != ((void*)0))
   VAR_15->archive.archive_format = VAR_5;
  else if (FUNC_14(VAR_20, "__.SYMDEF", 9) == 0)
   VAR_15->archive.archive_format = VAR_4;





 }


 if (VAR_15->archive.archive_format == VAR_5)
  VAR_15->archive.archive_format_name = "ar (GNU/SVR4)";
 else if (VAR_15->archive.archive_format == VAR_4)
  VAR_15->archive.archive_format_name = "ar (BSD)";
 else
  VAR_15->archive.archive_format_name = "ar";
 VAR_24 = VAR_20 + VAR_9 - 1;
 while (VAR_24 >= VAR_20 && *VAR_24 == ' ') {
  *VAR_24 = '\0';
  VAR_24--;
 }
 if (VAR_20[0] != '/' && VAR_24 > VAR_20 && *VAR_24 == '/') {
  *VAR_24 = '\0';
 }

 if (VAR_24 < VAR_20) {
  FUNC_8(&VAR_15->archive, VAR_1,
      "Found entry with empty filename");
  return (VAR_2);
 }





 if (FUNC_13(VAR_20, "//") == 0) {

  FUNC_3(VAR_17, VAR_16, VAR_18);
  FUNC_5(VAR_16, VAR_20);
  FUNC_6(VAR_16, VAR_0);

  VAR_21 = FUNC_2(VAR_18 + VAR_10, VAR_11);
  if (VAR_21 > VAR_14 || VAR_21 > 1024 * 1024 * 1024) {
   FUNC_8(&VAR_15->archive, VAR_1,
       "Filename table too large");
   return (VAR_2);
  }
  VAR_23 = (size_t)VAR_21;
  if (VAR_23 == 0) {
   FUNC_8(&VAR_15->archive, VAR_12,
       "Invalid string table");
   return (VAR_2);
  }
  if (VAR_17->strtab != ((void*)0)) {
   FUNC_8(&VAR_15->archive, VAR_12,
       "More than one string tables exist");
   return (VAR_2);
  }


  VAR_25 = FUNC_10(VAR_23);
  if (VAR_25 == ((void*)0)) {
   FUNC_8(&VAR_15->archive, VAR_13,
       "Can't allocate filename table buffer");
   return (VAR_2);
  }
  VAR_17->strtab = VAR_25;
  VAR_17->strtab_size = VAR_23;

  if (*VAR_19) {
   FUNC_1(VAR_15, *VAR_19);
   *VAR_19 = 0;
  }

  if ((VAR_26 = FUNC_0(VAR_15, VAR_23, ((void*)0))) == ((void*)0))
   return (VAR_2);
  FUNC_11(VAR_25, VAR_26, VAR_23);
  FUNC_1(VAR_15, VAR_23);

  VAR_17->entry_bytes_remaining = 0;
  FUNC_7(VAR_16, VAR_17->entry_bytes_remaining);


  return (FUNC_4(VAR_15));
 }







 if (VAR_20[0] == '/' && VAR_20[1] >= '0' && VAR_20[1] <= '9') {
  VAR_21 = FUNC_2(VAR_18 + VAR_8 + 1, VAR_9 - 1);




  if (VAR_17->strtab == ((void*)0) || VAR_21 >= VAR_17->strtab_size) {
   FUNC_8(&VAR_15->archive, VAR_12,
       "Can't find long filename for GNU/SVR4 archive entry");
   FUNC_5(VAR_16, VAR_20);

   FUNC_3(VAR_17, VAR_16, VAR_18);
   return (VAR_2);
  }

  FUNC_5(VAR_16, &VAR_17->strtab[(size_t)VAR_21]);

  return (FUNC_3(VAR_17, VAR_16, VAR_18));
 }






 if (FUNC_14(VAR_20, "#1/", 3) == 0) {


  FUNC_3(VAR_17, VAR_16, VAR_18);


  VAR_21 = FUNC_2(VAR_18 + VAR_8 + 3, VAR_9 - 3);





  if (VAR_21 > VAR_14 - 1
      || VAR_21 > 1024 * 1024
      || (int64_t)VAR_21 > VAR_17->entry_bytes_remaining) {
   FUNC_8(&VAR_15->archive, VAR_1,
       "Bad input file size");
   return (VAR_2);
  }
  VAR_22 = (size_t)VAR_21;
  VAR_17->entry_bytes_remaining -= VAR_22;

  FUNC_7(VAR_16, VAR_17->entry_bytes_remaining);

  if (*VAR_19) {
   FUNC_1(VAR_15, *VAR_19);
   *VAR_19 = 0;
  }


  if ((VAR_26 = FUNC_0(VAR_15, VAR_22, ((void*)0))) == ((void*)0)) {
   FUNC_8(&VAR_15->archive, VAR_1,
       "Truncated input file");
   return (VAR_2);
  }

  VAR_24 = (char *)FUNC_10(VAR_22 + 1);
  if (VAR_24 == ((void*)0)) {
   FUNC_8(&VAR_15->archive, VAR_13,
       "Can't allocate fname buffer");
   return (VAR_2);
  }
  FUNC_15(VAR_24, VAR_26, VAR_22);
  VAR_24[VAR_22] = '\0';

  FUNC_1(VAR_15, VAR_22);

  FUNC_5(VAR_16, VAR_24);
  FUNC_9(VAR_24);
  return (VAR_6);
 }





 if (FUNC_13(VAR_20, "/") == 0 || FUNC_13(VAR_20, "/SYM64/") == 0) {
  FUNC_5(VAR_16, VAR_20);

  VAR_27 = FUNC_3(VAR_17, VAR_16, VAR_18);

  FUNC_6(VAR_16, VAR_0);
  return (VAR_27);
 }




 if (FUNC_13(VAR_20, "__.SYMDEF") == 0) {
  FUNC_5(VAR_16, VAR_20);

  return (FUNC_3(VAR_17, VAR_16, VAR_18));
 }






 FUNC_5(VAR_16, VAR_20);
 return (FUNC_3(VAR_17, VAR_16, VAR_18));
}

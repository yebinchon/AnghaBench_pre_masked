
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpio {scalar_t__ verbose; scalar_t__ buff_size; int buff; int archive; scalar_t__ option_link; scalar_t__ dot; } ;
struct archive_entry {int dummy; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct archive_entry* FUNC_0 (struct archive_entry*) ;
 scalar_t__ FUNC_1 (struct archive_entry*) ;
 int FUNC_2 (struct archive_entry*) ;
 char* FUNC_3 (struct archive_entry*) ;
 int FUNC_4 (struct archive_entry*,char const*) ;
 int FUNC_5 (struct archive_entry*,int ) ;
 scalar_t__ FUNC_6 (struct archive_entry*) ;
 char* FUNC_7 (struct archive_entry*) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ,int ,scalar_t__) ;
 int FUNC_11 (int ,struct archive_entry*) ;
 int FUNC_12 (int) ;
 int VAR_8 ;
 int FUNC_13 (int) ;
 int FUNC_14 (int ,char*,...) ;
 int FUNC_15 (int,scalar_t__,char*,...) ;
 int FUNC_16 (scalar_t__,char*,...) ;
 int FUNC_17 (char const*,int) ;
 scalar_t__ FUNC_18 (int,int ,unsigned int) ;
 int FUNC_19 (struct cpio*,struct archive_entry*,char const*,int) ;
 int VAR_9 ;

__attribute__((used)) static int
FUNC_20(struct cpio *VAR_10, struct archive_entry *VAR_11)
{
 const char *VAR_12 = FUNC_3(VAR_11);
 const char *VAR_13 = FUNC_7(VAR_11);
 int VAR_14 = -1;
 ssize_t VAR_15;
 int VAR_16;


 if (VAR_10->verbose)
  FUNC_14(VAR_9,"%s", VAR_12);
 if (VAR_10->dot)
  FUNC_14(VAR_9, ".");
 if (VAR_10->option_link
     && FUNC_1(VAR_11) == VAR_0)
 {
  struct archive_entry *VAR_17;

  VAR_17 = FUNC_0(VAR_11);
  if (VAR_17 == ((void*)0))
   FUNC_15(1, VAR_4, "Can't create link");



  FUNC_4(VAR_17, VAR_13);

  FUNC_5(VAR_17, 0);
  VAR_16 = FUNC_11(VAR_10->archive, VAR_17);
  FUNC_2(VAR_17);
  if (VAR_16 != VAR_2)
   FUNC_16(FUNC_8(VAR_10->archive),
       "%s", FUNC_9(VAR_10->archive));
  if (VAR_16 == VAR_1)
   FUNC_13(1);







  return (0);
 }





 if (FUNC_1(VAR_11) == VAR_0) {
  if (FUNC_6(VAR_11) > 0) {
   VAR_14 = FUNC_17(VAR_13, VAR_7 | VAR_6);
   if (VAR_14 < 0) {
    FUNC_16(VAR_8,
        "%s: could not open file", VAR_13);
    goto cleanup;
   }
  }
 } else {
  FUNC_5(VAR_11, 0);
 }

 VAR_16 = FUNC_11(VAR_10->archive, VAR_11);

 if (VAR_16 != VAR_2)
  FUNC_16(FUNC_8(VAR_10->archive),
      "%s: %s",
      VAR_13,
      FUNC_9(VAR_10->archive));

 if (VAR_16 == VAR_1)
  FUNC_13(1);

 if (VAR_16 >= VAR_3 && FUNC_6(VAR_11) > 0 && VAR_14 >= 0) {
  VAR_15 = FUNC_18(VAR_14, VAR_10->buff, (unsigned)VAR_10->buff_size);
  while (VAR_15 > 0) {
   ssize_t VAR_18;
   VAR_18 = FUNC_10(VAR_10->archive,
       VAR_10->buff, VAR_15);
   if (VAR_18 < 0)
    FUNC_15(1, FUNC_8(VAR_10->archive),
        "%s", FUNC_9(VAR_10->archive));
   if (VAR_18 < VAR_15) {
    FUNC_16(0,
        "Truncated write; file may have "
        "grown while being archived.");
   }
   VAR_15 = FUNC_18(VAR_14, VAR_10->buff,
       (unsigned)VAR_10->buff_size);
  }
 }

 VAR_14 = FUNC_19(VAR_10, VAR_11, VAR_13, VAR_14);

cleanup:
 if (VAR_10->verbose)
  FUNC_14(VAR_9,"\n");
 if (VAR_14 >= 0)
  FUNC_12(VAR_14);
 return (0);
}

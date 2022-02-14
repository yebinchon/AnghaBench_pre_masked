
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct ustar {int init_default_conversion; int entry_padding; scalar_t__ entry_bytes_remaining; struct archive_string_conv* opt_sconv; struct archive_string_conv* sconv_default; } ;
struct archive_wstring {int s; } ;
struct archive_write {int archive; scalar_t__ format_data; } ;
struct archive_string_conv {int dummy; } ;
struct archive_string {int s; } ;
struct archive_entry {int dummy; } ;
typedef int int64_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct archive_write*,char*,struct archive_entry*,int,int,struct archive_string_conv*) ;
 int FUNC_1 (struct archive_write*,char*,int) ;
 struct archive_entry* FUNC_2 (struct archive_entry*) ;
 int FUNC_3 (struct archive_entry*,int ) ;
 int FUNC_4 (struct archive_entry*,int ) ;
 scalar_t__ FUNC_5 (struct archive_entry*) ;
 int FUNC_6 (struct archive_entry*) ;
 int * FUNC_7 (struct archive_entry*) ;
 char* FUNC_8 (struct archive_entry*) ;
 int* FUNC_9 (struct archive_entry*) ;
 int FUNC_10 (struct archive_entry*,int ) ;
 scalar_t__ FUNC_11 (struct archive_entry*) ;
 int * FUNC_12 (struct archive_entry*) ;
 int FUNC_13 (int *,int ,char*) ;
 int FUNC_14 (struct archive_wstring*,char) ;
 struct archive_string_conv* FUNC_15 (int *) ;
 int * FUNC_16 (struct archive_wstring*,size_t) ;
 int FUNC_17 (struct archive_wstring*) ;
 int FUNC_18 (struct archive_wstring*) ;
 int FUNC_19 (struct archive_wstring*,char const*,size_t) ;
 int FUNC_20 (struct archive_wstring*,int) ;
 int * FUNC_21 (struct archive_wstring*,size_t) ;
 int FUNC_22 (struct archive_wstring*) ;
 int FUNC_23 (struct archive_wstring*,int const*,size_t) ;
 int FUNC_24 (char const*) ;
 int FUNC_25 (int const*) ;

__attribute__((used)) static int
FUNC_26(struct archive_write *VAR_7, struct archive_entry *VAR_8)
{
 char VAR_9[512];
 int VAR_10, VAR_11;
 struct ustar *VAR_12;
 struct archive_entry *VAR_13;
 struct archive_string_conv *VAR_14;

 VAR_12 = (struct ustar *)VAR_7->format_data;


 if (VAR_12->opt_sconv == ((void*)0)) {
  if (!VAR_12->init_default_conversion) {
   VAR_12->sconv_default =
       FUNC_15(&(VAR_7->archive));
   VAR_12->init_default_conversion = 1;
  }
  VAR_14 = VAR_12->sconv_default;
 } else
  VAR_14 = VAR_12->opt_sconv;


 if (FUNC_8(VAR_8) == ((void*)0)) {
  FUNC_13(&VAR_7->archive, VAR_2,
      "Can't record entry in tar file without pathname");
  return (VAR_3);
 }


 if (FUNC_7(VAR_8) != ((void*)0) ||
     FUNC_12(VAR_8) != ((void*)0) ||
     !(FUNC_5(VAR_8) == VAR_1))
  FUNC_10(VAR_8, 0);

 if (VAR_0 == FUNC_5(VAR_8)) {
  const char *VAR_15;
  size_t VAR_16;
   VAR_15 = FUNC_8(VAR_8);





  if (VAR_15 != ((void*)0) && VAR_15[0] != '\0' && VAR_15[FUNC_24(VAR_15) - 1] != '/') {
   struct archive_string VAR_17;

   FUNC_18(&VAR_17);
   VAR_16 = FUNC_24(VAR_15);
   if (FUNC_16(&VAR_17,
       VAR_16 + 2) == ((void*)0)) {
    FUNC_13(&VAR_7->archive, VAR_6,
        "Can't allocate ustar data");
    FUNC_17(&VAR_17);
    return(VAR_4);
   }
   FUNC_19(&VAR_17, VAR_15, VAR_16);
   FUNC_14(&VAR_17, '/');
   FUNC_3(VAR_8, VAR_17.s);
   FUNC_17(&VAR_17);
  }
 }
 VAR_13 = ((void*)0);

 VAR_10 = FUNC_0(VAR_7, VAR_9, VAR_8, -1, 1, VAR_14);
 if (VAR_10 < VAR_5) {
  FUNC_6(VAR_13);
  return (VAR_10);
 }
 VAR_11 = FUNC_1(VAR_7, VAR_9, 512);
 if (VAR_11 < VAR_5) {
  FUNC_6(VAR_13);
  return (VAR_11);
 }
 if (VAR_11 < VAR_10)
  VAR_10 = VAR_11;

 VAR_12->entry_bytes_remaining = FUNC_11(VAR_8);
 VAR_12->entry_padding = 0x1ff & (-(int64_t)VAR_12->entry_bytes_remaining);
 FUNC_6(VAR_13);
 return (VAR_10);
}

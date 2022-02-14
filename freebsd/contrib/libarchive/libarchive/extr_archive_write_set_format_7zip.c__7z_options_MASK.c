
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_write {int archive; scalar_t__ format_data; } ;
struct _7zip {char opt_compression_level; int opt_compression; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,int ,char*,char const*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

__attribute__((used)) static int
FUNC_2(struct archive_write *VAR_10, const char *VAR_11, const char *VAR_12)
{
 struct _7zip *VAR_13;

 VAR_13 = (struct _7zip *)VAR_10->format_data;

 if (FUNC_1(VAR_11, "compression") == 0) {
  const char *VAR_14 = ((void*)0);

  if (VAR_12 == ((void*)0) || FUNC_1(VAR_12, "copy") == 0 ||
      FUNC_1(VAR_12, "COPY") == 0 ||
      FUNC_1(VAR_12, "store") == 0 ||
      FUNC_1(VAR_12, "STORE") == 0)
   VAR_13->opt_compression = VAR_5;
  else if (FUNC_1(VAR_12, "deflate") == 0 ||
      FUNC_1(VAR_12, "DEFLATE") == 0)



   VAR_14 = "deflate";

  else if (FUNC_1(VAR_12, "bzip2") == 0 ||
      FUNC_1(VAR_12, "BZIP2") == 0)



   VAR_14 = "bzip2";

  else if (FUNC_1(VAR_12, "lzma1") == 0 ||
      FUNC_1(VAR_12, "LZMA1") == 0)



   VAR_14 = "lzma1";

  else if (FUNC_1(VAR_12, "lzma2") == 0 ||
      FUNC_1(VAR_12, "LZMA2") == 0)



   VAR_14 = "lzma2";

  else if (FUNC_1(VAR_12, "ppmd") == 0 ||
      FUNC_1(VAR_12, "PPMD") == 0 ||
      FUNC_1(VAR_12, "PPMd") == 0)
   VAR_13->opt_compression = VAR_9;
  else {
   FUNC_0(&(VAR_10->archive),
       VAR_0,
       "Unknown compression name: `%s'",
       VAR_12);
   return (VAR_1);
  }
  if (VAR_14 != ((void*)0)) {
   FUNC_0(&(VAR_10->archive),
       VAR_0,
       "`%s' compression not supported "
       "on this platform",
       VAR_14);
   return (VAR_1);
  }
  return (VAR_2);
 }
 if (FUNC_1(VAR_11, "compression-level") == 0) {
  if (VAR_12 == ((void*)0) ||
      !(VAR_12[0] >= '0' && VAR_12[0] <= '9') ||
      VAR_12[1] != '\0') {
   FUNC_0(&(VAR_10->archive),
       VAR_0,
       "Illegal value `%s'",
       VAR_12);
   return (VAR_1);
  }
  VAR_13->opt_compression_level = VAR_12[0] - '0';
  return (VAR_2);
 }




 return (VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtree_writer {int dironly; int indent; int output_global_set; int keys; } ;
struct archive_write {struct mtree_writer* format_data; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (char const*,char*) ;

__attribute__((used)) static int
FUNC_1(struct archive_write *VAR_23, const char *VAR_24,
    const char *VAR_25)
{
 struct mtree_writer *VAR_26= VAR_23->format_data;
 int VAR_27 = 0;

 switch (VAR_24[0]) {
 case 'a':
  if (FUNC_0(VAR_24, "all") == 0)
   VAR_27 = ~0;
  break;
 case 'c':
  if (FUNC_0(VAR_24, "cksum") == 0)
   VAR_27 = VAR_2;
  break;
 case 'd':
  if (FUNC_0(VAR_24, "device") == 0)
   VAR_27 = VAR_3;
  else if (FUNC_0(VAR_24, "dironly") == 0) {
   VAR_26->dironly = (VAR_25 != ((void*)0))? 1: 0;
   return (VAR_0);
  }
  break;
 case 'f':
  if (FUNC_0(VAR_24, "flags") == 0)
   VAR_27 = VAR_4;
  break;
 case 'g':
  if (FUNC_0(VAR_24, "gid") == 0)
   VAR_27 = VAR_5;
  else if (FUNC_0(VAR_24, "gname") == 0)
   VAR_27 = VAR_6;
  break;
 case 'i':
  if (FUNC_0(VAR_24, "indent") == 0) {
   VAR_26->indent = (VAR_25 != ((void*)0))? 1: 0;
   return (VAR_0);
  } else if (FUNC_0(VAR_24, "inode") == 0) {
   VAR_27 = VAR_7;
  }
  break;
 case 'l':
  if (FUNC_0(VAR_24, "link") == 0)
   VAR_27 = VAR_18;
  break;
 case 'm':
  if (FUNC_0(VAR_24, "md5") == 0 ||
      FUNC_0(VAR_24, "md5digest") == 0)
   VAR_27 = VAR_8;
  if (FUNC_0(VAR_24, "mode") == 0)
   VAR_27 = VAR_9;
  break;
 case 'n':
  if (FUNC_0(VAR_24, "nlink") == 0)
   VAR_27 = VAR_10;
  break;
 case 'r':
  if (FUNC_0(VAR_24, "resdevice") == 0) {
   VAR_27 = VAR_11;
  } else if (FUNC_0(VAR_24, "ripemd160digest") == 0 ||
      FUNC_0(VAR_24, "rmd160") == 0 ||
      FUNC_0(VAR_24, "rmd160digest") == 0)
   VAR_27 = VAR_12;
  break;
 case 's':
  if (FUNC_0(VAR_24, "sha1") == 0 ||
      FUNC_0(VAR_24, "sha1digest") == 0)
   VAR_27 = VAR_13;
  if (FUNC_0(VAR_24, "sha256") == 0 ||
      FUNC_0(VAR_24, "sha256digest") == 0)
   VAR_27 = VAR_14;
  if (FUNC_0(VAR_24, "sha384") == 0 ||
      FUNC_0(VAR_24, "sha384digest") == 0)
   VAR_27 = VAR_15;
  if (FUNC_0(VAR_24, "sha512") == 0 ||
      FUNC_0(VAR_24, "sha512digest") == 0)
   VAR_27 = VAR_16;
  if (FUNC_0(VAR_24, "size") == 0)
   VAR_27 = VAR_17;
  break;
 case 't':
  if (FUNC_0(VAR_24, "time") == 0)
   VAR_27 = VAR_19;
  else if (FUNC_0(VAR_24, "type") == 0)
   VAR_27 = VAR_20;
  break;
 case 'u':
  if (FUNC_0(VAR_24, "uid") == 0)
   VAR_27 = VAR_21;
  else if (FUNC_0(VAR_24, "uname") == 0)
   VAR_27 = VAR_22;
  else if (FUNC_0(VAR_24, "use-set") == 0) {
   VAR_26->output_global_set = (VAR_25 != ((void*)0))? 1: 0;
   return (VAR_0);
  }
  break;
 }
 if (VAR_27 != 0) {
  if (VAR_25 != ((void*)0))
   VAR_26->keys |= VAR_27;
  else
   VAR_26->keys &= ~VAR_27;
  return (VAR_0);
 }




 return (VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int xo_handle_t ;
struct TYPE_5__ {char const* xfi_start; int xfi_len; char const* xfi_content; int xfi_clen; char const* xfi_next; char const* xfi_encoding; int xfi_elen; int xfi_flags; char const* xfi_format; int xfi_flen; int xfi_ftype; scalar_t__ xfi_fnum; } ;
typedef TYPE_1__ xo_field_info_t ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char const* VAR_4 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char const*,TYPE_1__*,unsigned int) ;
 char* FUNC_2 (int *,char const*,char const*,TYPE_1__*) ;
 int FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5 (xo_handle_t *VAR_5, xo_field_info_t *VAR_6,
   unsigned VAR_7, const char *VAR_8)
{
    const char *VAR_9, *VAR_10, *VAR_11, *VAR_12;
    unsigned VAR_13 = 0;
    xo_field_info_t *VAR_14 = VAR_6;
    unsigned VAR_15 = 0;

    for (VAR_9 = VAR_8; *VAR_9 && VAR_13 < VAR_7; VAR_13++, VAR_14++) {
 VAR_14->xfi_start = VAR_9;

 if (*VAR_9 == '\n') {
     VAR_14->xfi_ftype = VAR_2;
     VAR_14->xfi_len = 1;
     VAR_9 += 1;
     continue;
 }

 if (*VAR_9 != '{') {

     for (VAR_10 = VAR_9; *VAR_10; VAR_10++) {
  if (*VAR_10 == '{' || *VAR_10 == '\n')
      break;
     }

     VAR_14->xfi_ftype = VAR_3;
     VAR_14->xfi_content = VAR_9;
     VAR_14->xfi_clen = VAR_10 - VAR_9;
     VAR_14->xfi_next = VAR_10;

     VAR_9 = VAR_10;
     continue;
 }

 if (VAR_9[1] == '{') {
     VAR_14->xfi_start = VAR_9 + 1;
     VAR_14->xfi_ftype = VAR_1;

     VAR_9 += 2;
     for (VAR_10 = VAR_9; *VAR_10; VAR_10++) {
  if (*VAR_10 == '}' && VAR_10[1] == '}')
      break;
     }
     if (*VAR_10 == '\0') {
  FUNC_0(VAR_5, "missing closing '}}': '%s'",
      FUNC_3(VAR_8));
  return -1;
     }

     VAR_14->xfi_len = VAR_10 - VAR_14->xfi_start + 1;


     if (*VAR_10 == '}' && VAR_10[1] == '}')
  VAR_10 += 2;

     VAR_9 = VAR_10;
     VAR_14->xfi_next = VAR_9;
     continue;
 }


 VAR_14->xfi_start = VAR_12 = VAR_9 + 1;

 const char *VAR_16 = ((void*)0);
 ssize_t VAR_17 = 0;


 VAR_10 = FUNC_2(VAR_5, VAR_8, VAR_12, VAR_14);
 if (VAR_10 == ((void*)0)) {

     return -1;
 }

 if (VAR_14->xfi_fnum)
     VAR_15 = 1;


 if (*VAR_10 == ':') {
     for (VAR_11 = ++VAR_10; *VAR_10; VAR_10++) {
  if (*VAR_10 == '}' || *VAR_10 == '/')
      break;
  if (*VAR_10 == '\\') {
      if (VAR_10[1] == '\0') {
   FUNC_0(VAR_5, "backslash at the end of string");
   return -1;
      }
      VAR_10 += 1;
      continue;
  }
     }
     if (VAR_11 != VAR_10) {
  VAR_14->xfi_clen = VAR_10 - VAR_11;
  VAR_14->xfi_content = VAR_11;
     }
 } else {
     FUNC_0(VAR_5, "missing content (':'): '%s'", FUNC_3(VAR_8));
     return -1;
 }


 if (*VAR_10 == '/') {
     for (VAR_11 = ++VAR_10; *VAR_10; VAR_10++) {
  if (*VAR_10 == '}' || *VAR_10 == '/')
      break;
  if (*VAR_10 == '\\') {
      if (VAR_10[1] == '\0') {
   FUNC_0(VAR_5, "backslash at the end of string");
   return -1;
      }
      VAR_10 += 1;
      continue;
  }
     }
     VAR_17 = VAR_10 - VAR_11;
     VAR_16 = VAR_11;
 }


 if (*VAR_10 == '/') {
     for (VAR_11 = ++VAR_10; *VAR_10; VAR_10++) {
  if (*VAR_10 == '}')
      break;
     }

     VAR_14->xfi_encoding = VAR_11;
     VAR_14->xfi_elen = VAR_10 - VAR_11;
 }

 if (*VAR_10 != '}') {
     FUNC_0(VAR_5, "missing closing '}': %s", FUNC_3(VAR_8));
     return -1;
 }

 VAR_14->xfi_len = VAR_10 - VAR_14->xfi_start;
 VAR_14->xfi_next = ++VAR_10;


 if (VAR_14->xfi_clen || VAR_16 || (VAR_14->xfi_flags & VAR_0)) {
     if (VAR_16) {
  VAR_14->xfi_format = VAR_16;
  VAR_14->xfi_flen = VAR_17;
     } else if (FUNC_4(VAR_14->xfi_ftype)) {
  VAR_14->xfi_format = VAR_4;
  VAR_14->xfi_flen = 2;
     }
 }

 VAR_9 = VAR_10;
    }

    int VAR_18 = 0;





    if (VAR_15)
 VAR_18 = FUNC_1(VAR_5, VAR_8, VAR_6, VAR_13);

    return VAR_18;
}

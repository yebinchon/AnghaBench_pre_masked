
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int uchar ;
struct cset_converter {int dummy; } ;
struct _cpp_strbuf {int dummy; } ;
struct TYPE_10__ {struct cset_converter narrow_cset_desc; struct cset_converter wide_cset_desc; } ;
typedef TYPE_1__ cpp_reader ;


 int FUNC_0 (struct cset_converter,int*,int,struct _cpp_strbuf*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int) ;
 int const* FUNC_4 (TYPE_1__*,int const*,int const*,struct _cpp_strbuf*,int) ;
 int const* FUNC_5 (TYPE_1__*,int const*,int const*,struct _cpp_strbuf*,int) ;
 int const* FUNC_6 (TYPE_1__*,int const*,int const*,struct _cpp_strbuf*,int) ;
 int FUNC_7 (TYPE_1__*,int ,char*) ;
 int FUNC_8 (TYPE_1__*,int ,char*,...) ;
 int FUNC_9 (char*,char*,int) ;

__attribute__((used)) static const uchar *
FUNC_10 (cpp_reader *VAR_3, const uchar *VAR_4, const uchar *VAR_5,
  struct _cpp_strbuf *VAR_6, bool VAR_7)
{


  static const uchar VAR_8[] = { 7, 8, 27, 12, 10, 13, 9, 11 };






  uchar VAR_9;
  struct cset_converter VAR_10
    = VAR_7 ? VAR_3->wide_cset_desc : VAR_3->narrow_cset_desc;

  VAR_9 = *VAR_4;
  switch (VAR_9)
    {

    case 'u': case 'U':
      return FUNC_6 (VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);

    case 'x':
      return FUNC_4 (VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
      break;

    case '0': case '1': case '2': case '3':
    case '4': case '5': case '6': case '7':
      return FUNC_5 (VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);



    case '\\': case '\'': case '"': case '?': break;

    case '(': case '{': case '[': case '%':




      if (FUNC_1 (VAR_3))
 goto unknown;
      break;

    case 'b': VAR_9 = VAR_8[1]; break;
    case 'f': VAR_9 = VAR_8[3]; break;
    case 'n': VAR_9 = VAR_8[4]; break;
    case 'r': VAR_9 = VAR_8[5]; break;
    case 't': VAR_9 = VAR_8[6]; break;
    case 'v': VAR_9 = VAR_8[7]; break;

    case 'a':
      if (FUNC_2 (VAR_3))
 FUNC_8 (VAR_3, VAR_2,
     "the meaning of '\\a' is different in traditional C");
      VAR_9 = VAR_8[0];
      break;

    case 'e': case 'E':
      if (FUNC_1 (VAR_3))
 FUNC_8 (VAR_3, VAR_1,
     "non-ISO-standard escape sequence, '\\%c'", (int) VAR_9);
      VAR_9 = VAR_8[2];
      break;

    default:
    unknown:
      if (FUNC_3 (VAR_9))
 FUNC_8 (VAR_3, VAR_1,
     "unknown escape sequence '\\%c'", (int) VAR_9);
      else
 {


   char VAR_11[32];
   FUNC_9(VAR_11, "%03o", (int) VAR_9);
   FUNC_8 (VAR_3, VAR_1,
       "unknown escape sequence: '\\%s'", VAR_11);
 }
    }


  if (!FUNC_0 (VAR_10, &VAR_9, 1, VAR_6))
    FUNC_7 (VAR_3, VAR_0,
        "converting escape sequence to execution character set");

  return VAR_4 + 1;
}

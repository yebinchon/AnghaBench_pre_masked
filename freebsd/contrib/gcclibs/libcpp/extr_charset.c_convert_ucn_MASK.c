
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uchar ;
struct normalize_state {int dummy; } ;
struct cset_converter {int dummy; } ;
struct _cpp_strbuf {int dummy; } ;
typedef int cppchar_t ;
struct TYPE_5__ {struct cset_converter narrow_cset_desc; struct cset_converter wide_cset_desc; } ;
typedef TYPE_1__ cpp_reader ;


 int FUNC_0 (struct cset_converter,int *,int,struct _cpp_strbuf*) ;
 int VAR_0 ;
 struct normalize_state VAR_1 ;
 int FUNC_1 (TYPE_1__*,int const**,int const*,int ,struct normalize_state*) ;
 int FUNC_2 (TYPE_1__*,int ,char*) ;
 int VAR_2 ;
 int FUNC_3 (int ,int **,size_t*) ;

__attribute__((used)) static const uchar *
FUNC_4 (cpp_reader *VAR_3, const uchar *VAR_4, const uchar *VAR_5,
      struct _cpp_strbuf *VAR_6, bool VAR_7)
{
  cppchar_t VAR_8;
  uchar VAR_9[6];
  uchar *VAR_10 = VAR_9;
  size_t VAR_11 = 6;
  int VAR_12;
  struct cset_converter VAR_13
    = VAR_7 ? VAR_3->wide_cset_desc : VAR_3->narrow_cset_desc;
  struct normalize_state VAR_14 = VAR_1;

  VAR_4++;
  VAR_8 = FUNC_1 (VAR_3, &VAR_4, VAR_5, 0, &VAR_14);

  VAR_12 = FUNC_3 (VAR_8, &VAR_10, &VAR_11);
  if (VAR_12)
    {
      VAR_2 = VAR_12;
      FUNC_2 (VAR_3, VAR_0,
   "converting UCN to source character set");
    }
  else if (!FUNC_0 (VAR_13, VAR_9, 6 - VAR_11, VAR_6))
    FUNC_2 (VAR_3, VAR_0,
        "converting UCN to execution character set");

  return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct cset_converter {scalar_t__ cd; void* func; } ;
typedef scalar_t__ iconv_t ;
typedef int cpp_reader ;
struct TYPE_3__ {char const* pair; scalar_t__ fake_cd; void* func; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 TYPE_1__* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int FUNC_2 (int *,int ,char*) ;
 int FUNC_3 (int *,int ,char*,char const*,char const*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_4 (char const*,char const*) ;
 int FUNC_5 (char const*,char const*) ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 (char*,char const*) ;
 scalar_t__ FUNC_8 (char const*) ;

__attribute__((used)) static struct cset_converter
FUNC_9 (cpp_reader *VAR_7, const char *VAR_8, const char *VAR_9)
{
  struct cset_converter VAR_10;
  char *VAR_11;
  size_t VAR_12;

  if (!FUNC_5 (VAR_8, VAR_9))
    {
      VAR_10.func = VAR_4;
      VAR_10.cd = (iconv_t) -1;
      return VAR_10;
    }

  VAR_11 = (char *) FUNC_1(FUNC_8(VAR_8) + FUNC_8(VAR_9) + 2);

  FUNC_7(VAR_11, VAR_9);
  FUNC_6(VAR_11, "/");
  FUNC_6(VAR_11, VAR_8);
  for (VAR_12 = 0; VAR_12 < FUNC_0 (VAR_3); VAR_12++)
    if (!FUNC_5 (VAR_11, VAR_3[VAR_12].pair))
      {
 VAR_10.func = VAR_3[VAR_12].func;
 VAR_10.cd = VAR_3[VAR_12].fake_cd;
 return VAR_10;
      }


  if (VAR_2)
    {
      VAR_10.func = VAR_5;
      VAR_10.cd = FUNC_4 (VAR_8, VAR_9);

      if (VAR_10.cd == (iconv_t) -1)
 {
   if (VAR_6 == VAR_1)
     FUNC_3 (VAR_7, VAR_0,
         "conversion from %s to %s not supported by iconv",
         VAR_9, VAR_8);
   else
     FUNC_2 (VAR_7, VAR_0, "iconv_open");

   VAR_10.func = VAR_4;
 }
    }
  else
    {
      FUNC_3 (VAR_7, VAR_0,
   "no iconv implementation, cannot convert from %s to %s",
   VAR_9, VAR_8);
      VAR_10.func = VAR_4;
      VAR_10.cd = (iconv_t) -1;
    }
  return VAR_10;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int cpp_reader ;
struct TYPE_4__ {scalar_t__ cplusplus; scalar_t__ objc; } ;
typedef TYPE_1__ cpp_options ;
struct TYPE_5__ {int (* extra_includes ) (char const*,char const*,int) ;int (* extra_pre_includes ) (char const*,char const*,int) ;} ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (char const* const,size_t) ;
 int FUNC_1 (char const*,char const*,char const*,int) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int * VAR_3 ;
 int FUNC_4 (int *,int) ;
 int VAR_4 ;
 int FUNC_5 (char const*,char const*,int) ;
 int FUNC_6 (char const*,char const*,int) ;
 TYPE_2__ VAR_5 ;

void
FUNC_7 (cpp_reader *VAR_6, const char *VAR_7,
    const char *VAR_8, const char *VAR_9,
    int VAR_10, int VAR_11, int VAR_12)
{
  static const char *const VAR_13[] =
    { "C_INCLUDE_PATH", "CPLUS_INCLUDE_PATH",
      "OBJC_INCLUDE_PATH", "OBJCPLUS_INCLUDE_PATH" };
  cpp_options *VAR_14 = FUNC_2 (VAR_6);
  size_t VAR_15 = (VAR_14->objc ? 2: 0);

  if (VAR_14->cplusplus)
    VAR_15++;
  else
    VAR_11 = 0;



  FUNC_0 ("CPATH", VAR_0);
  FUNC_0 (VAR_13[VAR_15], VAR_2);

  VAR_5.extra_pre_includes (VAR_7, VAR_8, VAR_10);


  if (VAR_10)
    FUNC_1 (VAR_7, VAR_8, VAR_9, VAR_11);

  VAR_5.extra_includes (VAR_7, VAR_8, VAR_10);

  FUNC_4 (VAR_6, VAR_12);

  FUNC_3 (VAR_6, VAR_3[VAR_1], VAR_3[VAR_0],
     VAR_4);
}

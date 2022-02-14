
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;


 int FUNC_0 (int *,char const*,void const*,size_t) ;
 int FUNC_1 (int *,char const*,int ) ;
 int FUNC_2 (int *,char const*,int ) ;
 int FUNC_3 (int *,char const*,int ) ;
 int FUNC_4 (int *,char const*,int ) ;
 scalar_t__ FUNC_5 (int const*,char*) ;
 scalar_t__ FUNC_6 (int const*,char*) ;
 scalar_t__ FUNC_7 (int const*,char*) ;
 scalar_t__ FUNC_8 (int const*,char*) ;
 scalar_t__ FUNC_9 (int const*,char*) ;
 void* FUNC_10 (int const*,char*,size_t*) ;
 int FUNC_11 (int const*,char*) ;
 int FUNC_12 (int const*,char*) ;
 int FUNC_13 (int const*,char*) ;
 int FUNC_14 (int const*,char*) ;
 int FUNC_15 (char*) ;

__attribute__((used)) static void
FUNC_16(const nvlist_t *VAR_0, const char *VAR_1,
    nvlist_t *VAR_2)
{
 const void *VAR_3;
 size_t VAR_4;

 if (FUNC_5(VAR_0, "default")) {
  VAR_3 = FUNC_10(VAR_0, "default", &VAR_4);
  FUNC_0(VAR_2, VAR_1, VAR_3, VAR_4);
 } else if (FUNC_6(VAR_0, "default"))
  FUNC_1(VAR_2, VAR_1,
      FUNC_11(VAR_0, "default"));
 else if (FUNC_7(VAR_0, "default"))
  FUNC_2(VAR_2, VAR_1,
      FUNC_12(VAR_0, "default"));
 else if (FUNC_8(VAR_0, "default"))
  FUNC_3(VAR_2, VAR_1,
      FUNC_13(VAR_0, "default"));
 else if (FUNC_9(VAR_0, "default"))
  FUNC_4(VAR_2, VAR_1,
      FUNC_14(VAR_0, "default"));
 else
  FUNC_15("Unexpected nvlist type");
}

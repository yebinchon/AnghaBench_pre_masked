
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum neon_shape { ____Placeholder_neon_shape } neon_shape ;


 scalar_t__ FUNC_0 (char const**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_4 (void)
{
  enum neon_shape VAR_3 = FUNC_3 (VAR_1, VAR_0, VAR_2);
  int VAR_4 = FUNC_2 (VAR_3);
  const char *VAR_5[] =
    {
      "ftosizs",
      "ftouizs",
      ((void*)0),
      ((void*)0),
      ((void*)0),
      ((void*)0),
      "ftosizd",
      "ftouizd"
    };

  if (VAR_4 >= 0 && VAR_4 < (int) FUNC_0 (VAR_5) && VAR_5[VAR_4])
    FUNC_1 (VAR_5[VAR_4]);
}

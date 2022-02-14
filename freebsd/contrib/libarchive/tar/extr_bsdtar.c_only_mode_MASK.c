
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bsdtar {int mode; } ;


 int FUNC_0 (int,int ,char*,char const*,int ) ;
 int * FUNC_1 (char const*,int ) ;

__attribute__((used)) static void
FUNC_2(struct bsdtar *VAR_0, const char *VAR_1, const char *VAR_2)
{
 if (FUNC_1(VAR_2, VAR_0->mode) == ((void*)0))
  FUNC_0(1, 0,
      "Option %s is not permitted in mode -%c",
      VAR_1, VAR_0->mode);
}

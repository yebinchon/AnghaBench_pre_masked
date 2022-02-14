
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct disklabel {int d_packname; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,char*,char const*) ;
 struct disklabel* FUNC_2 (char const*) ;
 struct disklabel* FUNC_3 () ;
 scalar_t__ FUNC_4 (char const*,char*) ;

__attribute__((used)) static void
FUNC_5(const char *VAR_0, struct disklabel *VAR_1)
{
 struct disklabel *VAR_2;

 if (FUNC_4(VAR_0, "auto") == 0)
  VAR_2 = FUNC_3();
 else
  VAR_2 = FUNC_2(VAR_0);
 if (VAR_2 == ((void*)0))
  FUNC_1(1, "%s: unknown disk type", VAR_0);
 *VAR_1 = *VAR_2;
 FUNC_0(VAR_1->d_packname, sizeof(VAR_1->d_packname));
}

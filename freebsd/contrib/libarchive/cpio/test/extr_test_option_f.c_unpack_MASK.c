
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (char const*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int ,char const*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_5(const char *VAR_1, const char *VAR_2)
{
 int VAR_3;

 FUNC_2(VAR_1, 0755);
 FUNC_0(VAR_1);
 FUNC_3("test_option_f.cpio");
 VAR_3 = FUNC_4("%s -i %s < test_option_f.cpio > copy-no-a.out 2>copy-no-a.err", VAR_0, VAR_2);
 FUNC_1(0, VAR_3);
 FUNC_0("..");
}

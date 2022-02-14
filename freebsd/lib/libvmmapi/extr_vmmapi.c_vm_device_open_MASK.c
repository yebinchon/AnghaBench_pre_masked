
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (char*,int,char*,char const*) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static int
FUNC_6(const char *VAR_1)
{
 int VAR_2, VAR_3;
 char *VAR_4;

 VAR_3 = FUNC_5("/dev/vmm/") + FUNC_5(VAR_1) + 1;
 VAR_4 = FUNC_2(VAR_3);
 FUNC_0(VAR_4 != ((void*)0));
 FUNC_4(VAR_4, VAR_3, "/dev/vmm/%s", VAR_1);


 VAR_2 = FUNC_3(VAR_4, VAR_0, 0);

 FUNC_1(VAR_4);
 return (VAR_2);
}

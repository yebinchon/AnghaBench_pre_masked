
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*) ;
 size_t FUNC_2 (int,char const*,int) ;

void
FUNC_3(int VAR_0, const char *VAR_1)
{
 static const char VAR_2[] = "Fatal Internal Error in libarchive: ";
 size_t VAR_3;

 VAR_3 = FUNC_2(2, VAR_2, FUNC_1(VAR_2));
 (void)VAR_3;
 VAR_3 = FUNC_2(2, VAR_1, FUNC_1(VAR_1));
 (void)VAR_3;
 VAR_3 = FUNC_2(2, "\n", 1);
 (void)VAR_3;
 FUNC_0(VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;


 int FUNC_0 (int,char*,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char const*,int,int) ;
 int FUNC_3 (int,int const*,int) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_3, const int VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_2(VAR_3, VAR_2 | VAR_0 | VAR_1, 0600);
 FUNC_0(VAR_5 != -1, "Failed to create %s", VAR_3);
 FUNC_3(VAR_5, &VAR_4, sizeof(VAR_4));
 FUNC_1(VAR_5);
}

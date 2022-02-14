
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termcapstr {int * str; } ;


 int FUNC_0 (int *,char const*,size_t) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,size_t) ;

__attribute__((used)) static void
FUNC_4(struct termcapstr *VAR_0, const char *VAR_1)
{
    if (VAR_1 == ((void*)0) || *VAR_1 == '\0') {
 FUNC_2(VAR_0->str);
 VAR_0->str = ((void*)0);
    } else {
 size_t VAR_2;

 VAR_2 = FUNC_1(VAR_1) + 1;
 VAR_0->str = FUNC_3(VAR_0->str, VAR_2);
 FUNC_0(VAR_0->str, VAR_1, VAR_2);
    }
}

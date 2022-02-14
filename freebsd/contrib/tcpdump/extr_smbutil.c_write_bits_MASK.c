
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int netdissect_options ;


 int FUNC_0 (int *) ;
 size_t FUNC_1 (char const*,char const*) ;
 char* FUNC_2 (char const*,char) ;

__attribute__((used)) static void
FUNC_3(netdissect_options *VAR_0,
           unsigned int VAR_1, const char *VAR_2)
{
    const char *VAR_3 = VAR_2;
    int VAR_4 = 0;

    while ((VAR_3 = FUNC_2(VAR_2, '|'))) {
 size_t VAR_5 = FUNC_1(VAR_3, VAR_2);
 if (VAR_5 && (VAR_1 & (1 << VAR_4)))
     FUNC_0((VAR_0, "%.*s ", (int)VAR_5, VAR_2));
 VAR_2 = VAR_3 + 1;
 VAR_4++;
    }
}

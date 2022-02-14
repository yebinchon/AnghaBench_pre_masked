
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdb_method {char* prefix; } ;


 struct hdb_method const VAR_0 ;
 struct hdb_method* VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;

__attribute__((used)) static const struct hdb_method *
FUNC_2 (const char *VAR_2, const char **VAR_3)
{
    const struct hdb_method *VAR_4;

    for (VAR_4 = VAR_1; VAR_4->prefix != ((void*)0); ++VAR_4) {
 if (FUNC_1 (VAR_2, VAR_4->prefix, FUNC_0(VAR_4->prefix)) == 0) {
     *VAR_3 = VAR_2 + FUNC_0(VAR_4->prefix);
     return VAR_4;
 }
    }
    return ((void*)0);
}

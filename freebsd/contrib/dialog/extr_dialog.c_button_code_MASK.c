
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int table ;



 int VAR_0 ;



 int FUNC_0 (char*) ;
 int FUNC_1 (char const*,char const*) ;
 int FUNC_2 (char*,char*,char const*) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_1)
{

    static struct {
 const char *name;
 int code;
    } VAR_2[] = {
 { "ok", 128 },
 { "yes", 128 },
 { "cancel", 131 },
 { "no", 131 },
 { "help", 129 },
 { "extra", 130 },
    };


    int VAR_3 = VAR_0;
    size_t VAR_4;

    for (VAR_4 = 0; VAR_4 < (sizeof(VAR_2) / sizeof(VAR_2[0])); VAR_4++) {
 if (!FUNC_1(VAR_1, VAR_2[VAR_4].name)) {
     VAR_3 = VAR_2[VAR_4].code;
     break;
 }
    }

    if (VAR_3 == VAR_0) {
 char VAR_5[80];
 FUNC_2(VAR_5, "Button name \"%.20s\" unknown", VAR_1);
 FUNC_0(VAR_5);
    }

    return VAR_3;
}

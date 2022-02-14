
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct get_entry_data {int dummy; } ;
struct field_name {int * fieldname; } ;
typedef int buf ;


 int FUNC_0 (struct get_entry_data*,struct field_name*,char*) ;
 int VAR_0 ;
 struct field_name* VAR_1 ;
 int FUNC_1 (struct get_entry_data*) ;
 int FUNC_2 (int ,char*,char*) ;
 scalar_t__ FUNC_3 (char*,int *) ;
 char* FUNC_4 (char**,char*) ;
 int FUNC_5 (char const**,char*,char*,int) ;

__attribute__((used)) static int
FUNC_6(struct get_entry_data *VAR_2, const char *VAR_3)
{
    char VAR_4[1024], *VAR_5;
    char *VAR_6, *VAR_7;
    struct field_name *VAR_8;

    while(FUNC_5(&VAR_3, ",", VAR_4, sizeof(VAR_4)) != -1) {
 VAR_5 = VAR_4;
 VAR_6 = FUNC_4(&VAR_5, "=");
 VAR_7 = FUNC_4(&VAR_5, "=");
 for(VAR_8 = VAR_1; VAR_8->fieldname != ((void*)0); VAR_8++) {
     if(FUNC_3(VAR_6, VAR_8->fieldname) == 0) {
  FUNC_0(VAR_2, VAR_8, VAR_7);
  break;
     }
 }
 if(VAR_8->fieldname == ((void*)0)) {
     FUNC_2(VAR_0, "unknown field name \"%s\"", VAR_6);
     FUNC_1(VAR_2);
     return -1;
 }
    }
    return 0;
}

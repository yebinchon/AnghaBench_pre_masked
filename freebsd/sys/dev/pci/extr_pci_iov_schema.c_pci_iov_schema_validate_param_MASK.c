
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_type_validator {int (* validate ) (struct config_type_validator const*,int const*,char const*) ;} ;
typedef int nvlist_t ;


 int FUNC_0 (int ,char*) ;
 char* FUNC_1 (int const*,char*) ;
 struct config_type_validator* FUNC_2 (char const*) ;
 int FUNC_3 (struct config_type_validator const*,int const*,char const*) ;

__attribute__((used)) static int
FUNC_4(const nvlist_t *VAR_0, const char *VAR_1,
    const nvlist_t *VAR_2)
{
 const struct config_type_validator *VAR_3;
 const char *VAR_4;

 VAR_4 = FUNC_1(VAR_0, "type");
 VAR_3 = FUNC_2(VAR_4);

 FUNC_0(VAR_3 != ((void*)0),
     ("Schema was not validated: Unknown type %s", VAR_4));

 return (VAR_3->validate(VAR_3, VAR_2, VAR_1));
}

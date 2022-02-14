
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_type_validator {int (* default_validate ) (struct config_type_validator const*,int const*) ;} ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int const*,int ) ;
 int FUNC_1 (int const*,int ) ;
 int FUNC_2 (int const*,int ) ;
 char* FUNC_3 (int const*,int ) ;
 struct config_type_validator* FUNC_4 (char const*) ;
 int FUNC_5 (struct config_type_validator const*,int const*) ;

__attribute__((used)) static int
FUNC_6(const nvlist_t *VAR_4)
{
 const struct config_type_validator *VAR_5;
 const char *VAR_6;
 int VAR_7;


 if (!FUNC_2(VAR_4, VAR_3))
  return (VAR_1);
 VAR_6 = FUNC_3(VAR_4, VAR_3);

 VAR_5 = FUNC_4(VAR_6);
 if (VAR_5 == ((void*)0))
  return (VAR_1);


 if (FUNC_0(VAR_4, VAR_0)) {
  VAR_7 = VAR_5->default_validate(VAR_5, VAR_4);
  if (VAR_7 != 0)
   return (VAR_7);


  if (FUNC_0(VAR_4, VAR_2))
   return (VAR_1);
 }


 if (FUNC_0(VAR_4, VAR_2)) {
  if (!FUNC_1(VAR_4, VAR_2))
   return (VAR_1);
 }

 return (0);
}

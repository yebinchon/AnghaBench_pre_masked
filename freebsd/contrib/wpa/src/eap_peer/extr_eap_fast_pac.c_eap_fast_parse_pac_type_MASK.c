
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_fast_pac {scalar_t__ pac_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (char*) ;

__attribute__((used)) static const char * FUNC_1(struct eap_fast_pac *VAR_3,
         char *VAR_4)
{
 if (!VAR_4)
  return "Cannot parse pac type";
 VAR_3->pac_type = FUNC_0(VAR_4);
 if (VAR_3->pac_type != VAR_1 &&
     VAR_3->pac_type != VAR_2 &&
     VAR_3->pac_type != VAR_0)
  return "Unrecognized PAC-Type";

 return ((void*)0);
}

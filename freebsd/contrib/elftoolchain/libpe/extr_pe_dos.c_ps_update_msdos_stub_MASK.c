
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pe_cmd; int pe_flags; char* pe_stub_app; size_t pe_stub_app_sz; } ;
typedef TYPE_1__ PE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

int
FUNC_0(PE *VAR_5, char *VAR_6, size_t VAR_7)
{

 if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0) || VAR_7 == 0) {
  VAR_4 = VAR_1;
  return (-1);
 }

 if (VAR_5->pe_cmd == VAR_3 || VAR_5->pe_flags & VAR_2) {
  VAR_4 = VAR_0;
  return (-1);
 }

 VAR_5->pe_stub_app = VAR_6;
 VAR_5->pe_stub_app_sz = VAR_7;

 return (0);
}

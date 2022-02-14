
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysentvec {int sv_psstrings; int sv_usrstack; int sv_shared_page_base; int sv_maxuser; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

void
FUNC_0(struct sysentvec *VAR_2)
{
 if (VAR_1 != 0) {
  VAR_2->sv_maxuser -= VAR_0;
  VAR_2->sv_shared_page_base -= VAR_0;
  VAR_2->sv_usrstack -= VAR_0;
  VAR_2->sv_psstrings -= VAR_0;
 }
}

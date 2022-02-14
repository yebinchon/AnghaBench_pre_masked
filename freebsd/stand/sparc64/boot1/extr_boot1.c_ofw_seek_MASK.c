
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u_ofwh_t ;
typedef int ofwh_t ;
typedef int ofwcell_t ;


 scalar_t__ FUNC_0 (int*) ;
 int FUNC_1 (char*,int,int) ;
 scalar_t__ FUNC_2 (int*) ;

__attribute__((used)) static int
FUNC_3(ofwh_t VAR_0, uint64_t VAR_1)
{
 ofwcell_t VAR_2[] = {
  (ofwcell_t)"seek",
  3,
  1,
  (u_ofwh_t)VAR_0,
  VAR_1 >> 32,
  VAR_1,
  0
 };

 if (FUNC_0)(VAR_2)) {
  FUNC_1("ofw_seek: devh=0x%x off=0x%lx\n", VAR_0, VAR_1);
  return (1);
 }
 return (0);
}

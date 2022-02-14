
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_ofwh_t ;
typedef int ofwh_t ;
typedef int ofwcell_t ;


 scalar_t__ FUNC_0 (int*) ;
 int FUNC_1 (char*,int,void*,size_t) ;
 scalar_t__ FUNC_2 (int*) ;

__attribute__((used)) static int
FUNC_3(ofwh_t VAR_0, void *VAR_1, size_t VAR_2)
{
 ofwcell_t VAR_3[] = {
  (ofwcell_t)"read",
  3,
  1,
  (u_ofwh_t)VAR_0,
  (ofwcell_t)VAR_1,
  VAR_2,
  0
 };

 if (FUNC_0)(VAR_3)) {
  FUNC_1("ofw_read: devh=0x%x buf=%p len=%u\n", VAR_0, VAR_1, VAR_2);
  return (1);
 }
 return (0);
}

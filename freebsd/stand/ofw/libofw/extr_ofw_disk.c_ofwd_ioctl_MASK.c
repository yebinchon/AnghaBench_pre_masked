
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u_long ;
typedef int u_int ;
struct open_file {struct ofw_devdesc* f_devdata; } ;
struct ofw_devdesc {int d_handle; } ;




 int VAR_0 ;
 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct open_file *VAR_1, u_long VAR_2, void *VAR_3)
{
 struct ofw_devdesc *VAR_4 = VAR_1->f_devdata;
 int VAR_5;
 unsigned int VAR_6;

 switch (VAR_2) {
 case 128:
  VAR_5 = FUNC_0(VAR_4->d_handle);
  *(u_int *)VAR_3 = VAR_5;
  break;
 case 129:
  VAR_5 = FUNC_0(VAR_4->d_handle);
  VAR_6 = FUNC_1(VAR_4->d_handle);
  *(uint64_t *)VAR_3 = (uint64_t)(VAR_6 * VAR_5);
  break;
 default:
  return (VAR_0);
 }
 return (0);
}

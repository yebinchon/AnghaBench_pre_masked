
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int module_t ;
struct TYPE_3__ {int nh_qlimit; } ;


 int VAR_0 ;


 int FUNC_0 (char*,int*) ;
 int VAR_1 ;
 int FUNC_1 () ;
 TYPE_1__ VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static int
FUNC_4(module_t VAR_5, int VAR_6, void *VAR_7)
{
 int VAR_8;

 switch (VAR_6) {
 case 129:

  FUNC_1();
  VAR_2.nh_qlimit = 42 * VAR_4;
  if (FUNC_0("net.link.epair.netisr_maxqlen", &VAR_8))
      VAR_2.nh_qlimit = VAR_8;
  FUNC_2(&VAR_2);
  if (VAR_1)
   FUNC_3("%s initialized.\n", VAR_3);
  break;
 case 128:

  break;
 default:
  return (VAR_0);
 }
 return (0);
}

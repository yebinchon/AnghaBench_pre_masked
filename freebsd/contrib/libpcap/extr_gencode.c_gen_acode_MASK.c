
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct qual {scalar_t__ dir; int proto; int addr; } ;
struct block {int dummy; } ;
struct TYPE_5__ {int linktype; } ;
typedef TYPE_1__ compiler_state_t ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 struct block* FUNC_1 (TYPE_1__*,int const*,int) ;

struct block *
FUNC_2(compiler_state_t *VAR_3, const u_char *VAR_4, struct qual VAR_5)
{
 switch (VAR_3->linktype) {

 case 129:
 case 128:
  if ((VAR_5.addr == VAR_1 || VAR_5.addr == VAR_0) &&
      VAR_5.proto == VAR_2)
   return (FUNC_1(VAR_3, VAR_4, (int)VAR_5.dir));
  else {
   FUNC_0(VAR_3, "ARCnet address used in non-arc expression");

  }
  break;

 default:
  FUNC_0(VAR_3, "aid supported only on ARCnet");

 }
}

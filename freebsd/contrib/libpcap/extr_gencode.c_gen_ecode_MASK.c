
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int u_char ;
struct qual {scalar_t__ addr; scalar_t__ proto; scalar_t__ dir; } ;
struct block {int dummy; } ;
struct TYPE_10__ {int linktype; } ;
typedef TYPE_1__ compiler_state_t ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (struct block*,struct block*) ;
 struct block* FUNC_2 (TYPE_1__*,int const*,int) ;
 struct block* FUNC_3 (TYPE_1__*,int const*,int) ;
 struct block* FUNC_4 (TYPE_1__*,int const*,int) ;
 struct block* FUNC_5 (TYPE_1__*) ;
 struct block* FUNC_6 (TYPE_1__*,int const*,int) ;
 struct block* FUNC_7 (TYPE_1__*,int const*,int) ;

struct block *
FUNC_8(compiler_state_t *VAR_3, const u_char *VAR_4, struct qual VAR_5)
{
 struct block *VAR_6, *VAR_7;

 if ((VAR_5.addr == VAR_1 || VAR_5.addr == VAR_0) && VAR_5.proto == VAR_2) {
  switch (VAR_3->linktype) {
  case 138:
  case 131:
  case 130:
   VAR_7 = FUNC_5(VAR_3);
   VAR_6 = FUNC_2(VAR_3, VAR_4, (int)VAR_5.dir);
   if (VAR_7 != ((void*)0))
    FUNC_1(VAR_7, VAR_6);
   return VAR_6;
  case 137:
   return FUNC_3(VAR_3, VAR_4, (int)VAR_5.dir);
  case 136:
   return FUNC_6(VAR_3, VAR_4, (int)VAR_5.dir);
  case 135:
  case 128:
  case 133:
  case 134:
  case 129:
   return FUNC_7(VAR_3, VAR_4, (int)VAR_5.dir);
  case 132:
   return FUNC_4(VAR_3, VAR_4, (int)VAR_5.dir);
  default:
   FUNC_0(VAR_3, "ethernet addresses supported only on ethernet/FDDI/token ring/802.11/ATM LANE/Fibre Channel");
   break;
  }
 }
 FUNC_0(VAR_3, "ethernet address used in non-ether expression");

}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_8__ {scalar_t__ ndo_nflag; scalar_t__ ndo_fflag; } ;
typedef TYPE_1__ netdissect_options ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

void
FUNC_5(netdissect_options *VAR_2, uint32_t VAR_3, uint32_t VAR_4)
{
 if (VAR_2->ndo_fflag) {
  VAR_0 = VAR_3;
  VAR_1 = VAR_4;
 }
 if (VAR_2->ndo_nflag)



  return;

 FUNC_1(VAR_2);
 FUNC_4(VAR_2);
 FUNC_0(VAR_2);
 FUNC_3(VAR_2);
 FUNC_2(VAR_2);
}

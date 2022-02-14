
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwn_softc {TYPE_1__* rxon; } ;
struct TYPE_2__ {int filter; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct iwn_softc *VAR_1)
{
 return ((VAR_1->rxon->filter & FUNC_0(VAR_0)) != 0);
}

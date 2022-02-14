
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int tq5; int tq4; int tq3; int tq2; int tq1; int tq0; int continued; int fBitfield; int bt; } ;
struct TYPE_5__ {scalar_t__ index; scalar_t__ rfd; } ;
struct TYPE_7__ {TYPE_2__ ti; TYPE_1__ rndx; scalar_t__ isym; } ;
typedef TYPE_3__ AUXU ;


 int FUNC_0 (char*,char*,int,long,long,long,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1 (AUXU VAR_0, int VAR_1, int VAR_2)
{
  FUNC_0 ("\t%s#%-5d %11ld, [%4ld/%7ld], [%2d %1d:%1d %1x:%1x:%1x:%1x:%1x:%1x]\n",
   (VAR_2) ? "  " : "* ",
   VAR_1,
   (long) VAR_0.isym,
   (long) VAR_0.rndx.rfd,
   (long) VAR_0.rndx.index,
   VAR_0.ti.bt,
   VAR_0.ti.fBitfield,
   VAR_0.ti.continued,
   VAR_0.ti.tq0,
   VAR_0.ti.tq1,
   VAR_0.ti.tq2,
   VAR_0.ti.tq3,
   VAR_0.ti.tq4,
   VAR_0.ti.tq5);
}

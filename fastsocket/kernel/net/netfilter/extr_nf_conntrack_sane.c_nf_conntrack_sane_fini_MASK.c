
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int l3num; } ;
struct TYPE_6__ {TYPE_1__ src; } ;
struct TYPE_7__ {TYPE_2__ tuple; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,int ,int ) ;
 TYPE_3__** VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(void)
{
 int VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  for (VAR_5 = 0; VAR_5 < 2; VAR_5++) {
   FUNC_2("nf_ct_sane: unregistering helper for pf: %d "
     "port: %d\n",
     VAR_2[VAR_4][VAR_5].tuple.src.l3num, VAR_0[VAR_4]);
   FUNC_1(&VAR_2[VAR_4][VAR_5]);
  }
 }

 FUNC_0(VAR_3);
}

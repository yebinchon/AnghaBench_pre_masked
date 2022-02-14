
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int l3num; } ;
struct TYPE_6__ {TYPE_1__ src; } ;
struct TYPE_7__ {TYPE_2__ tuple; int * me; } ;


 TYPE_3__** VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,int ,int ) ;

__attribute__((used)) static void FUNC_3(void)
{
 int VAR_4, VAR_5;
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  for (VAR_5 = 0; VAR_5 < 2; VAR_5++) {
   if (VAR_0[VAR_4][VAR_5].me == ((void*)0))
    continue;

   FUNC_2("nf_ct_ftp: unregistering helper for pf: %d "
     "port: %d\n",
     VAR_0[VAR_4][VAR_5].tuple.src.l3num, VAR_2[VAR_4]);
   FUNC_1(&VAR_0[VAR_4][VAR_5]);
  }
 }

 FUNC_0(VAR_1);
}

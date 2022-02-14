
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ifmp_ring {int can_drain; int drain; int size; } ;
typedef TYPE_1__* iflib_txq_t ;
struct TYPE_3__ {struct ifmp_ring* ift_br; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ifmp_ring*,int ) ;

__attribute__((used)) static void
FUNC_1(iflib_txq_t VAR_4)
{
 struct ifmp_ring *VAR_5;

 VAR_5 = VAR_4->ift_br;
 VAR_5->drain = VAR_3;
 VAR_5->can_drain = VAR_2;

 FUNC_0(VAR_5, VAR_5->size);

 VAR_5->drain = VAR_1;
 VAR_5->can_drain = VAR_0;
}

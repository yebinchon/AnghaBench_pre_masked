
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int ch_slotnum; int ch_anafanum; } ;
typedef TYPE_1__ ibnd_node_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(ibnd_node_t * VAR_1)
{
 int VAR_2;

 if (FUNC_4(VAR_1) || FUNC_1(VAR_1))
  VAR_2 = 3 * (VAR_1->ch_slotnum - 1) + VAR_1->ch_anafanum;
 else if (FUNC_2(VAR_1) || FUNC_3(VAR_1))
  VAR_2 = 2 * (VAR_1->ch_slotnum - 1) + VAR_1->ch_anafanum;
 else
  VAR_2 = VAR_1->ch_slotnum;

 if (VAR_2 > VAR_0 || VAR_2 < 1) {
  FUNC_0("Internal error\n");
  return -1;
 }
 return VAR_2;
}

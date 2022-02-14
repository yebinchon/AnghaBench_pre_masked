
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int portnum; int ext_portnum; TYPE_2__* node; } ;
typedef TYPE_1__ ibnd_port_t ;
struct TYPE_10__ {int ch_anafanum; int ch_found; } ;
typedef TYPE_2__ ibnd_node_t ;


 int ** VAR_0 ;
 int ** VAR_1 ;
 int ** VAR_2 ;
 int * VAR_3 ;
 int ** VAR_4 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_5(ibnd_port_t * VAR_5)
{
 int VAR_6 = VAR_5->portnum;
 int VAR_7 = 0;
 ibnd_node_t *VAR_8 = VAR_5->node;
 int VAR_9 = FUNC_3(VAR_8);
 int VAR_10 = FUNC_4(VAR_8);

 if (!VAR_8->ch_found || (!FUNC_0(VAR_8) && !VAR_10)) {
  VAR_5->ext_portnum = 0;
  return;
 }

 if (((VAR_9 || VAR_10) &&
      (VAR_6 < 19 || VAR_6 > 36)) ||
     ((!VAR_9 && !VAR_10) &&
      (VAR_6 < 13 || VAR_6 > 24))) {
   VAR_5->ext_portnum = 0;
  return;
 }

 if (VAR_5->node->ch_anafanum < 1 || VAR_5->node->ch_anafanum > 2) {
  VAR_5->ext_portnum = 0;
  return;
 }

 VAR_7 = VAR_5->node->ch_anafanum - 1;

 if (FUNC_2(VAR_8))
  VAR_5->ext_portnum = VAR_2[VAR_7][VAR_6];
 else if (FUNC_1(VAR_8))
  VAR_5->ext_portnum = VAR_1[VAR_7][VAR_6];

 else if (VAR_9)
  VAR_5->ext_portnum = VAR_3[VAR_6];

 else if (VAR_10)
  VAR_5->ext_portnum = VAR_0[VAR_7][VAR_6];
 else
  VAR_5->ext_portnum = VAR_4[VAR_7][VAR_6];
}

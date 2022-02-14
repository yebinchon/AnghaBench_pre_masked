
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uintmax_t ;
typedef int u_longlong_t ;
struct TYPE_11__ {TYPE_1__* dt_ints; } ;
typedef TYPE_2__ dtrace_hdl_t ;
struct TYPE_12__ {scalar_t__ dn_value; int dn_op; } ;
typedef TYPE_3__ dt_node_t ;
struct TYPE_13__ {TYPE_2__* pcb_hdl; } ;
struct TYPE_10__ {scalar_t__ did_limit; int did_type; int did_ctfp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__* FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (int ,TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_3 (int ,char*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned char* VAR_8 ;
 TYPE_4__* VAR_9 ;

dt_node_t *
FUNC_4(uintmax_t VAR_10)
{
 dt_node_t *VAR_11 = FUNC_0(VAR_1);
 dtrace_hdl_t *VAR_12 = VAR_9->pcb_hdl;

 int VAR_13 = (VAR_6 | (VAR_8[0] == 'u')) + 1;
 int VAR_14 = 0;

 const char *VAR_15;
 char VAR_16;

 VAR_11->dn_op = VAR_3;
 VAR_11->dn_value = VAR_10;

 for (VAR_15 = VAR_8; (VAR_16 = *VAR_15) != '\0'; VAR_15++) {
  if (VAR_16 == 'U' || VAR_16 == 'u')
   VAR_14 += 1;
  else if (VAR_16 == 'L' || VAR_16 == 'l')
   VAR_14 += 2;
 }

 for (; VAR_14 < sizeof (VAR_12->dt_ints) / sizeof (VAR_12->dt_ints[0]); VAR_14 += VAR_13) {
  if (VAR_10 <= VAR_12->dt_ints[VAR_14].did_limit) {
   FUNC_2(VAR_11,
       VAR_12->dt_ints[VAR_14].did_ctfp,
       VAR_12->dt_ints[VAR_14].did_type, VAR_0);





   switch (VAR_7) {
   case '+':
    return (FUNC_1(VAR_4, VAR_11));
   case '-':
    return (FUNC_1(VAR_2, VAR_11));
   default:
    return (VAR_11);
   }
  }
 }

 FUNC_3(VAR_5, "integer constant 0x%llx cannot be represented "
     "in any built-in integral type\n", (u_longlong_t)VAR_10);

 return (((void*)0));
}

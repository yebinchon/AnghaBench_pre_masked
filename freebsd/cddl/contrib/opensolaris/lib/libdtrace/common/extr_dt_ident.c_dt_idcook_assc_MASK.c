
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int n ;
struct TYPE_20__ {struct TYPE_20__* dn_list; } ;
typedef TYPE_1__ dt_node_t ;
struct TYPE_21__ {int dis_varargs; int dis_optargs; int dis_argc; TYPE_8__* dis_args; scalar_t__ dis_auxinfo; } ;
typedef TYPE_2__ dt_idsig_t ;
struct TYPE_22__ {int di_flags; scalar_t__ di_kind; int di_type; int di_ctfp; TYPE_2__* di_data; } ;
typedef TYPE_3__ dt_ident_t ;
struct TYPE_24__ {struct TYPE_24__* dn_list; } ;
struct TYPE_23__ {int pcb_hdl; int pcb_jmpbuf; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_8__* FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_1__*,TYPE_3__*,int,TYPE_1__*,char*,char*) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_8 (TYPE_1__*,char*,int) ;
 int FUNC_9 (TYPE_1__*,TYPE_8__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (int ,int ) ;
 TYPE_2__* FUNC_12 (int) ;
 int FUNC_13 (int ,char*,int ,int ,int) ;
 TYPE_4__* VAR_6 ;

__attribute__((used)) static void
FUNC_14(dt_node_t *VAR_7, dt_ident_t *VAR_8, int VAR_9, dt_node_t *VAR_10)
{
 if (VAR_8->di_data == ((void*)0)) {
  dt_idsig_t *VAR_11 = VAR_8->di_data = FUNC_12(sizeof (dt_idsig_t));
  char VAR_12[VAR_3];
  int VAR_13;

  if (VAR_11 == ((void*)0))
   FUNC_11(VAR_6->pcb_jmpbuf, VAR_5);

  VAR_11->dis_varargs = -1;
  VAR_11->dis_optargs = -1;
  VAR_11->dis_argc = VAR_9;
  VAR_11->dis_args = ((void*)0);
  VAR_11->dis_auxinfo = 0;

  if (VAR_9 != 0 && (VAR_11->dis_args = FUNC_2(VAR_9,
      sizeof (dt_node_t))) == ((void*)0)) {
   VAR_8->di_data = ((void*)0);
   FUNC_10(VAR_11);
   FUNC_11(VAR_6->pcb_jmpbuf, VAR_5);
  }
  if (!(VAR_8->di_flags & VAR_2)) {
   VAR_8->di_ctfp = FUNC_0(VAR_6->pcb_hdl);
   VAR_8->di_type = FUNC_1(VAR_6->pcb_hdl);
  }

  for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13++, VAR_10 = VAR_10->dn_list) {
   if (FUNC_5(VAR_10) || FUNC_6(VAR_10)) {
    FUNC_13(VAR_4, "%s expression may not be "
        "used as %s index: key #%d\n",
        FUNC_8(VAR_10, VAR_12, sizeof (VAR_12)),
        FUNC_4(VAR_8->di_kind), VAR_13 + 1);
   }

   FUNC_9(VAR_10, &VAR_11->dis_args[VAR_13]);
   VAR_11->dis_args[VAR_13].dn_list = &VAR_11->dis_args[VAR_13 + 1];
  }

  if (VAR_9 != 0)
   VAR_11->dis_args[VAR_9 - 1].dn_list = ((void*)0);

  FUNC_7(VAR_7, VAR_8->di_ctfp, VAR_8->di_type, VAR_0);

 } else {
  FUNC_3(VAR_7, VAR_8, VAR_9, VAR_10,
      VAR_8->di_kind == VAR_1 ? "@" : "", "[ ]");
 }
}

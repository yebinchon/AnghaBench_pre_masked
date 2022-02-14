
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ uint_t ;
typedef int uint8_t ;
typedef int dtrace_typeinfo_t ;
typedef int dtrace_hdl_t ;
struct TYPE_15__ {char const* pr_name; TYPE_3__** pr_nargv; TYPE_1__* pr_argv; TYPE_3__** pr_xargv; scalar_t__* pr_mapping; scalar_t__ pr_argc; scalar_t__ pr_xargc; scalar_t__ pr_nargc; int * pr_inst; TYPE_3__* pr_xargs; TYPE_3__* pr_nargs; TYPE_5__* pr_ident; int * pr_pvp; } ;
typedef TYPE_2__ dt_probe_t ;
struct TYPE_16__ {struct TYPE_16__* dn_list; int dn_type; int dn_ctfp; int * dn_string; } ;
typedef TYPE_3__ dt_node_t ;
struct TYPE_17__ {int * dm_name; } ;
typedef TYPE_4__ dt_module_t ;
struct TYPE_18__ {scalar_t__ di_kind; TYPE_2__* di_data; int di_name; } ;
typedef TYPE_5__ dt_ident_t ;
struct TYPE_14__ {int dtt_type; int dtt_ctfp; int * dtt_object; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int *,int) ;
 TYPE_4__* FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_4 (TYPE_2__*) ;
 char* FUNC_5 (int ,char) ;

dt_probe_t *
FUNC_6(dtrace_hdl_t *VAR_1, dt_ident_t *VAR_2, int VAR_3,
    dt_node_t *VAR_4, uint_t VAR_5, dt_node_t *VAR_6, uint_t VAR_7)
{
 dt_module_t *VAR_8;
 dt_probe_t *VAR_9;
 const char *VAR_10;
 uint_t VAR_11;

 FUNC_0(VAR_2->di_kind == VAR_0);
 FUNC_0(VAR_2->di_data == ((void*)0));






 if (VAR_3 < 2) {
  FUNC_0(VAR_6 == ((void*)0));
  FUNC_0(VAR_7 == 0);
  VAR_6 = VAR_4;
  VAR_7 = VAR_5;
 }

 if ((VAR_9 = FUNC_1(VAR_1, sizeof (dt_probe_t))) == ((void*)0))
  return (((void*)0));

 VAR_9->pr_pvp = ((void*)0);
 VAR_9->pr_ident = VAR_2;

 VAR_10 = FUNC_5(VAR_2->di_name, ':');
 FUNC_0(VAR_10 != ((void*)0));
 VAR_9->pr_name = VAR_10 + 1;

 VAR_9->pr_nargs = VAR_4;
 VAR_9->pr_nargv = FUNC_1(VAR_1, sizeof (dt_node_t *) * VAR_5);
 VAR_9->pr_nargc = VAR_5;
 VAR_9->pr_xargs = VAR_6;
 VAR_9->pr_xargv = FUNC_1(VAR_1, sizeof (dt_node_t *) * VAR_7);
 VAR_9->pr_xargc = VAR_7;
 VAR_9->pr_mapping = FUNC_1(VAR_1, sizeof (uint8_t) * VAR_7);
 VAR_9->pr_inst = ((void*)0);
 VAR_9->pr_argv = FUNC_1(VAR_1, sizeof (dtrace_typeinfo_t) * VAR_7);
 VAR_9->pr_argc = VAR_7;

 if ((VAR_9->pr_nargc != 0 && VAR_9->pr_nargv == ((void*)0)) ||
     (VAR_9->pr_xargc != 0 && VAR_9->pr_xargv == ((void*)0)) ||
     (VAR_9->pr_xargc != 0 && VAR_9->pr_mapping == ((void*)0)) ||
     (VAR_9->pr_argc != 0 && VAR_9->pr_argv == ((void*)0))) {
  FUNC_4(VAR_9);
  return (((void*)0));
 }

 for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++, VAR_6 = VAR_6->dn_list) {
  if (VAR_6->dn_string != ((void*)0))
   VAR_9->pr_mapping[VAR_11] = FUNC_3(VAR_6, VAR_4);
  else
   VAR_9->pr_mapping[VAR_11] = VAR_11;

  VAR_9->pr_xargv[VAR_11] = VAR_6;

  if ((VAR_8 = FUNC_2(VAR_1,
      VAR_6->dn_ctfp)) != ((void*)0))
   VAR_9->pr_argv[VAR_11].dtt_object = VAR_8->dm_name;
  else
   VAR_9->pr_argv[VAR_11].dtt_object = ((void*)0);

  VAR_9->pr_argv[VAR_11].dtt_ctfp = VAR_6->dn_ctfp;
  VAR_9->pr_argv[VAR_11].dtt_type = VAR_6->dn_type;
 }

 for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++, VAR_4 = VAR_4->dn_list)
  VAR_9->pr_nargv[VAR_11] = VAR_4;

 VAR_2->di_data = VAR_9;
 return (VAR_9);
}

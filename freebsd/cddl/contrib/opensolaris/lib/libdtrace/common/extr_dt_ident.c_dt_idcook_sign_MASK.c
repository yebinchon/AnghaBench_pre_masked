
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int n2 ;
typedef int n1 ;
struct TYPE_11__ {int * dn_ctfp; struct TYPE_11__* dn_list; } ;
typedef TYPE_1__ dt_node_t ;
struct TYPE_12__ {int dis_varargs; int dis_optargs; int dis_argc; TYPE_1__* dis_args; } ;
typedef TYPE_2__ dt_idsig_t ;
struct TYPE_13__ {scalar_t__ di_kind; int di_type; int di_ctfp; int di_name; TYPE_2__* di_data; } ;
typedef TYPE_3__ dt_ident_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*,char*,int) ;
 int FUNC_3 (int ,char*,char const*,int ,char const*,...) ;

__attribute__((used)) static void
FUNC_4(dt_node_t *VAR_6, dt_ident_t *VAR_7,
    int VAR_8, dt_node_t *VAR_9, const char *VAR_10, const char *VAR_11)
{
 dt_idsig_t *VAR_12 = VAR_7->di_data;
 int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;

 char VAR_18[VAR_3];
 char VAR_19[VAR_3];

 VAR_17 = VAR_7->di_kind == VAR_2 || VAR_7->di_kind == VAR_1;

 if (VAR_12->dis_varargs >= 0) {
  VAR_15 = VAR_8 < VAR_12->dis_varargs;
  VAR_16 = VAR_12->dis_varargs;
 } else if (VAR_12->dis_optargs >= 0) {
  VAR_15 = (VAR_8 < VAR_12->dis_optargs || VAR_8 > VAR_12->dis_argc);
  VAR_16 = VAR_8;
 } else {
  VAR_15 = VAR_8 != VAR_12->dis_argc;
  VAR_16 = VAR_12->dis_argc;
 }

 if (VAR_15) {
  FUNC_3(VAR_5, "%s%s%s prototype mismatch: %d %s%s"
      "passed, %s%d expected\n", VAR_10, VAR_7->di_name, VAR_11,
      VAR_8, VAR_17 ? "key" : "arg", VAR_8 == 1 ? " " : "s ",
      VAR_12->dis_optargs >= 0 ? "at least " : "",
      VAR_12->dis_optargs >= 0 ? VAR_12->dis_optargs : VAR_16);
 }

 for (VAR_13 = 0; VAR_13 < VAR_16; VAR_13++, VAR_9 = VAR_9->dn_list) {
  if (VAR_12->dis_args[VAR_13].dn_ctfp != ((void*)0))
   VAR_14 = FUNC_0(&VAR_12->dis_args[VAR_13], VAR_9);
  else
   VAR_14 = 1;

  if (!VAR_14) {
   FUNC_3(VAR_4,
       "%s%s%s %s #%d is incompatible with "
       "prototype:\n\tprototype: %s\n\t%9s: %s\n",
       VAR_10, VAR_7->di_name, VAR_11,
       VAR_17 ? "key" : "argument", VAR_13 + 1,
       FUNC_2(&VAR_12->dis_args[VAR_13], VAR_18,
       sizeof (VAR_18)),
       VAR_17 ? "key" : "argument",
       FUNC_2(VAR_9, VAR_19, sizeof (VAR_19)));
  }
 }

 FUNC_1(VAR_6, VAR_7->di_ctfp, VAR_7->di_type, VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int dtat_class; int dtat_data; int dtat_name; } ;
struct TYPE_6__ {int dtat_class; int dtat_data; int dtat_name; } ;
struct TYPE_9__ {int dtp_argc; TYPE_3__* dtp_argv; TYPE_2__ dtp_arga; TYPE_1__ dtp_attr; } ;
typedef TYPE_4__ dtrace_probeinfo_t ;
typedef int buf ;
struct TYPE_8__ {int dtt_flags; int dtt_type; int dtt_ctfp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,int ,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_5(const dtrace_probeinfo_t *VAR_2)
{
 char VAR_3[VAR_0];
 char *VAR_4;
 int VAR_5;

 FUNC_3("\n\tProbe Description Attributes\n");

 FUNC_3("\t\tIdentifier Names: %s\n",
     FUNC_2(VAR_2->dtp_attr.dtat_name));
 FUNC_3("\t\tData Semantics:   %s\n",
     FUNC_2(VAR_2->dtp_attr.dtat_data));
 FUNC_3("\t\tDependency Class: %s\n",
     FUNC_1(VAR_2->dtp_attr.dtat_class));

 FUNC_3("\n\tArgument Attributes\n");

 FUNC_3("\t\tIdentifier Names: %s\n",
     FUNC_2(VAR_2->dtp_arga.dtat_name));
 FUNC_3("\t\tData Semantics:   %s\n",
     FUNC_2(VAR_2->dtp_arga.dtat_data));
 FUNC_3("\t\tDependency Class: %s\n",
     FUNC_1(VAR_2->dtp_arga.dtat_class));

 FUNC_3("\n\tArgument Types\n");

 for (VAR_5 = 0; VAR_5 < VAR_2->dtp_argc; VAR_5++) {
  if (VAR_2->dtp_argv[VAR_5].dtt_flags & VAR_1)
   VAR_4 = "userland ";
  else
   VAR_4 = "";
  if (FUNC_0(VAR_2->dtp_argv[VAR_5].dtt_ctfp,
      VAR_2->dtp_argv[VAR_5].dtt_type, VAR_3, sizeof (VAR_3)) == ((void*)0))
   (void) FUNC_4(VAR_3, "(unknown)", sizeof (VAR_3));
  FUNC_3("\t\targs[%d]: %s%s\n", VAR_5, VAR_4, VAR_3);
 }

 if (VAR_2->dtp_argc == 0)
  FUNC_3("\t\tNone\n");

 FUNC_3("\n");
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elfcopy {int abi; int nos; char* progname; int v_sec; int v_arobj; int v_symfile; int v_symop; int v_sadd; int v_sac; int v_seg; scalar_t__ fill; int oed; int oec; int iec; int otf; int itf; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 () ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct elfcopy* FUNC_3 (int,int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct elfcopy*,int,char**) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,char*,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct elfcopy*) ;
 int FUNC_11 (struct elfcopy*) ;
 int FUNC_12 (struct elfcopy*) ;
 int FUNC_13 (struct elfcopy*,int,char**) ;
 int FUNC_14 (struct elfcopy*,int,char**) ;
 scalar_t__ FUNC_15 (char*,char*) ;
 int FUNC_16 (char*) ;

int
FUNC_17(int VAR_7, char **VAR_8)
{
 struct elfcopy *VAR_9;

 if (FUNC_5(VAR_3) == VAR_4)
  FUNC_8(VAR_5, "ELF library initialization failed: %s",
      FUNC_4(-1));

 VAR_9 = FUNC_3(1, sizeof(*VAR_9));
 if (VAR_9 == ((void*)0))
  FUNC_7(VAR_5, "calloc failed");

 VAR_9->itf = VAR_9->otf = VAR_2;
 VAR_9->iec = VAR_9->oec = VAR_0;
 VAR_9->oed = VAR_1;
 VAR_9->abi = -1;

 VAR_9->nos = 1;
 VAR_9->fill = 0;

 FUNC_1(&VAR_9->v_seg);
 FUNC_1(&VAR_9->v_sac);
 FUNC_1(&VAR_9->v_sadd);
 FUNC_1(&VAR_9->v_symop);
 FUNC_1(&VAR_9->v_symfile);
 FUNC_1(&VAR_9->v_arobj);
 FUNC_2(&VAR_9->v_sec);

 if ((VAR_9->progname = FUNC_0()) == ((void*)0))
  VAR_9->progname = "elfcopy";

 if (FUNC_15(VAR_9->progname, "strip") == 0)
  FUNC_14(VAR_9, VAR_7, VAR_8);
 else if (FUNC_15(VAR_9->progname, "mcs") == 0)
  FUNC_13(VAR_9, VAR_7, VAR_8);
 else {
  if (FUNC_15(VAR_9->progname, "elfcopy") != 0 &&
      FUNC_15(VAR_9->progname, "objcopy") != 0)
   FUNC_16("program mode not known, defaulting to elfcopy");
  FUNC_6(VAR_9, VAR_7, VAR_8);
 }

 FUNC_12(VAR_9);
 FUNC_11(VAR_9);
 FUNC_10(VAR_9);

 FUNC_9(VAR_6);
}

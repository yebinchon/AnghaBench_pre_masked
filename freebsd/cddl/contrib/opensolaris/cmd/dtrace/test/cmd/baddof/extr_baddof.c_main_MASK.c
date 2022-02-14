
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int dtrace_prog_t ;
typedef int dtrace_hdl_t ;
struct TYPE_2__ {int dofh_loadsz; } ;
typedef TYPE_1__ dof_hdr_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*,unsigned char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,unsigned char*,int) ;
 unsigned char* FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ,int ,int*) ;
 int * FUNC_7 (int *,int *,int ,int ,int *) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (char*,char*) ;
 unsigned char* FUNC_11 (int) ;
 int FUNC_12 (char*,int ) ;

int
FUNC_13(int VAR_2, char **VAR_3)
{
 char *VAR_4 = VAR_3[1];
 dtrace_hdl_t *VAR_5;
 dtrace_prog_t *VAR_6;
 int VAR_7, VAR_8, VAR_9;
 FILE *VAR_10;
 unsigned char *VAR_11, *VAR_12;

 if (VAR_2 < 2)
  FUNC_8("expected D script as argument\n");

 if ((VAR_10 = FUNC_10(VAR_4, "r")) == ((void*)0))
  FUNC_8("couldn't open %s", VAR_4);




 if ((VAR_5 = FUNC_6(VAR_0, 0, &VAR_7)) == ((void*)0)) {
  FUNC_8("cannot open dtrace library: %s\n",
      FUNC_4(((void*)0), VAR_7));
 }

 VAR_6 = FUNC_7(VAR_5, VAR_10, 0, 0, ((void*)0));
 FUNC_9(VAR_10);

 if (VAR_6 == ((void*)0)) {
  FUNC_8("failed to compile script %s: %s\n", VAR_4,
      FUNC_4(VAR_5, FUNC_5(VAR_5)));
 }

 VAR_11 = FUNC_3(VAR_5, VAR_6, 0);
 VAR_9 = ((dof_hdr_t *)VAR_11)->dofh_loadsz;

 if ((VAR_12 = FUNC_11(VAR_9)) == ((void*)0))
  FUNC_8("could not allocate copy of %d bytes", VAR_9);

 for (;;) {
  FUNC_0(VAR_11, VAR_12, VAR_9);



  VAR_8 = FUNC_12("/devices/pseudo/dtrace@0:dtrace", VAR_1);

  if (VAR_8 == -1)
   FUNC_8("couldn't open DTrace pseudo device");

  FUNC_2(VAR_8, VAR_12, VAR_9);
  FUNC_1(VAR_8);
 }


 return (0);
}

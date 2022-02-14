
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef int uint_t ;
typedef int tfile ;
struct TYPE_22__ {scalar_t__ dp_dofversion; } ;
typedef TYPE_1__ dtrace_prog_t ;
struct TYPE_23__ {char const* dt_ld_path; int dt_linktype; int dt_oflags; char const* dt_objcopy_path; int dt_lazyload; int dt_lib_path; } ;
typedef TYPE_2__ dtrace_hdl_t ;
struct TYPE_24__ {char* dir_path; } ;
typedef TYPE_3__ dt_dirpath_t ;
typedef int drti ;
struct TYPE_25__ {int dofh_filesz; } ;
typedef TYPE_4__ dof_hdr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 char* VAR_9 ;
 scalar_t__ FUNC_3 (char const*,int ) ;
 char* FUNC_4 (size_t) ;
 int FUNC_5 (char**,char*,char const*,char const*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (TYPE_2__*,int *,int,int *,char*,...) ;
 TYPE_3__* FUNC_8 (int *) ;
 int FUNC_9 (TYPE_2__*,int,TYPE_4__*,int ) ;
 TYPE_4__* FUNC_10 (TYPE_2__*,TYPE_1__*,int ) ;
 int FUNC_11 (TYPE_2__*,TYPE_4__*) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*,TYPE_4__*,int) ;
 int FUNC_14 (TYPE_2__*,TYPE_4__*,int) ;
 int VAR_10 ;
 int FUNC_15 (int ,char*,char const*) ;
 int FUNC_16 (char*) ;
 scalar_t__ FUNC_17 (int,int ,int ) ;
 int FUNC_18 (char*,int ) ;
 int FUNC_19 (char const*,int,int) ;
 scalar_t__ FUNC_20 (TYPE_2__*,char* const,int*) ;
 scalar_t__ FUNC_21 (char*,char const*) ;
 int FUNC_22 (char*,size_t,char const*,char const*,...) ;
 int VAR_11 ;
 scalar_t__ FUNC_23 (char* const,char const*) ;
 scalar_t__ FUNC_24 (int) ;
 scalar_t__ FUNC_25 (char* const) ;
 int FUNC_26 (char*) ;
 int FUNC_27 (char* const) ;

int
FUNC_28(dtrace_hdl_t *VAR_12, dtrace_prog_t *VAR_13, uint_t VAR_14,
    const char *VAR_15, int VAR_16, char *const VAR_17[])
{

 char VAR_18[VAR_6];

 char VAR_19[VAR_6];
 dof_hdr_t *VAR_20;
 int VAR_21, VAR_22, VAR_23, VAR_24;
 char *VAR_25, VAR_26;
 size_t VAR_27;
 int VAR_28 = 0, VAR_29 = 0;


 if (FUNC_3(VAR_15, VAR_7) == 0) {
  FUNC_15(VAR_11, "dtrace: target object (%s) already exists. "
      "Please remove the target\ndtrace: object and rebuild all "
      "the source objects if you wish to run the DTrace\n"
      "dtrace: linking process again\n", VAR_15);





  return (0);
 }







 if (VAR_13 == ((void*)0)) {
  const char *VAR_30 = "%s -o %s -r";

  VAR_27 = FUNC_22(&VAR_26, 1, VAR_30, VAR_12->dt_ld_path, VAR_15) + 1;

  for (VAR_23 = 0; VAR_23 < VAR_16; VAR_23++)
   VAR_27 += FUNC_25(VAR_17[VAR_23]) + 1;

  VAR_25 = FUNC_4(VAR_27);

  VAR_24 = FUNC_22(VAR_25, VAR_27, VAR_30, VAR_12->dt_ld_path, VAR_15);

  for (VAR_23 = 0; VAR_23 < VAR_16; VAR_23++)
   VAR_24 += FUNC_22(VAR_25 + VAR_24, VAR_27 - VAR_24, " %s", VAR_17[VAR_23]);

  if ((VAR_22 = FUNC_26(VAR_25)) == -1) {
   return (FUNC_7(VAR_12, ((void*)0), -1, ((void*)0),
       "failed to run %s: %s", VAR_12->dt_ld_path,
       FUNC_24(VAR_10)));
  }

  if (FUNC_1(VAR_22)) {
   return (FUNC_7(VAR_12, ((void*)0), -1, ((void*)0),
       "failed to link %s: %s failed due to signal %d",
       VAR_15, VAR_12->dt_ld_path, FUNC_2(VAR_22)));
  }

  if (FUNC_0(VAR_22) != 0) {
   return (FUNC_7(VAR_12, ((void*)0), -1, ((void*)0),
       "failed to link %s: %s exited with status %d\n",
       VAR_15, VAR_12->dt_ld_path, FUNC_0(VAR_22)));
  }

  for (VAR_23 = 0; VAR_23 < VAR_16; VAR_23++) {
   if (FUNC_23(VAR_17[VAR_23], VAR_15) != 0)
    (void) FUNC_27(VAR_17[VAR_23]);
  }

  return (0);
 }

 for (VAR_23 = 0; VAR_23 < VAR_16; VAR_23++) {
  if (FUNC_20(VAR_12, VAR_17[VAR_23], &VAR_28) != 0)
   return (-1);
 }





 if (VAR_28 && VAR_13->dp_dofversion < VAR_0)
  VAR_13->dp_dofversion = VAR_0;

 if ((VAR_20 = FUNC_10(VAR_12, VAR_13, VAR_14)) == ((void*)0))
  return (-1);
 FUNC_22(VAR_18, sizeof(VAR_18), "%s.XXXXXX", VAR_15);
 if ((VAR_21 = FUNC_18(VAR_18, VAR_2)) == -1)
  return (FUNC_7(VAR_12, ((void*)0), -1, ((void*)0),
      "failed to create temporary file %s: %s",
      VAR_18, FUNC_24(VAR_10)));






 switch (VAR_12->dt_linktype) {
 case 129:
  if (FUNC_9(VAR_12, VAR_21, VAR_20, VAR_20->dofh_filesz) < VAR_20->dofh_filesz)
   VAR_29 = VAR_10;

  if (FUNC_6(VAR_21) != 0 && VAR_29 == 0)
   VAR_29 = VAR_10;

  if (VAR_29 != 0) {
   return (FUNC_7(VAR_12, ((void*)0), -1, ((void*)0),
       "failed to write %s: %s", VAR_15, FUNC_24(VAR_29)));
  }

  return (0);

 case 128:
  break;

 default:
  return (FUNC_7(VAR_12, ((void*)0), -1, ((void*)0),
      "invalid link type %u\n", VAR_12->dt_linktype));
 }







 if (VAR_12->dt_oflags & VAR_1)
  VAR_22 = FUNC_14(VAR_12, VAR_20, VAR_21);
 else
  VAR_22 = FUNC_13(VAR_12, VAR_20, VAR_21);







 if (VAR_22 != 0)
  return (FUNC_7(VAR_12, ((void*)0), -1, ((void*)0),
      "failed to write %s: %s", VAR_18,
      FUNC_24(FUNC_12(VAR_12))));


 if (!VAR_12->dt_lazyload) {
  const char *VAR_31 = "%s -o %s -r %s %s";
  dt_dirpath_t *VAR_32 = FUNC_8(&VAR_12->dt_lib_path);

  (void) FUNC_22(VAR_19, sizeof (VAR_19), "%s/drti.o", VAR_32->dir_path);

  VAR_27 = FUNC_22(&VAR_26, 1, VAR_31, VAR_12->dt_ld_path, VAR_15, VAR_18,
      VAR_19) + 1;

  VAR_25 = FUNC_4(VAR_27);

  (void) FUNC_22(VAR_25, VAR_27, VAR_31, VAR_12->dt_ld_path, VAR_15, VAR_18,
      VAR_19);

  if ((VAR_22 = FUNC_26(VAR_25)) == -1) {
   VAR_29 = FUNC_7(VAR_12, ((void*)0), VAR_21, ((void*)0),
       "failed to run %s: %s", VAR_12->dt_ld_path,
       FUNC_24(VAR_10));
   goto done;
  }

  if (FUNC_1(VAR_22)) {
   VAR_29 = FUNC_7(VAR_12, ((void*)0), VAR_21, ((void*)0),
       "failed to link %s: %s failed due to signal %d",
       VAR_15, VAR_12->dt_ld_path, FUNC_2(VAR_22));
   goto done;
  }

  if (FUNC_0(VAR_22) != 0) {
   VAR_29 = FUNC_7(VAR_12, ((void*)0), VAR_21, ((void*)0),
       "failed to link %s: %s exited with status %d\n",
       VAR_15, VAR_12->dt_ld_path, FUNC_0(VAR_22));
   goto done;
  }
  (void) FUNC_6(VAR_21);
 } else {
  (void) FUNC_6(VAR_21);
 }

done:
 FUNC_11(VAR_12, VAR_20);





 return (VAR_29);
}

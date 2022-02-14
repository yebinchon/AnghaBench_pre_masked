
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int xi ;
typedef scalar_t__ uint32_t ;
typedef int tbuf ;
struct TYPE_5__ {scalar_t__ limit; int type; scalar_t__ tflags; scalar_t__ vmask; char* algoname; scalar_t__ flags; } ;
typedef TYPE_1__ ipfw_xtable_info ;
typedef int ipfw_obj_header ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*) ;







 int FUNC_1 (char*,int,int ,char*) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,char*,char**,scalar_t__*,scalar_t__*) ;
 int FUNC_5 (int ,char*,char*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (TYPE_1__*,int ,int) ;
 char* FUNC_8 (char*,char) ;
 scalar_t__ FUNC_9 (char*,char*) ;
 int FUNC_10 (char*,char*,int) ;
 int FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (char*,int *,int) ;
 int FUNC_13 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int *,TYPE_1__*) ;
 int FUNC_16 (int,char*,scalar_t__*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void
FUNC_17(ipfw_obj_header *VAR_11, int VAR_12, char *VAR_13[])
{
 ipfw_xtable_info VAR_14, VAR_15;
 int VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
 uint32_t VAR_21, VAR_22;
 char *VAR_23, *VAR_24;
 char VAR_25[128];

 VAR_17 = VAR_18 = 0;
 FUNC_7(&VAR_14, 0, sizeof(VAR_14));
 while (VAR_12 > 0) {
  VAR_19 = FUNC_5(VAR_8, *VAR_13, "option");
  VAR_12--; VAR_13++;

  switch (VAR_19) {
  case 133:
   FUNC_0("limit value required");
   VAR_14.limit = FUNC_12(*VAR_13, ((void*)0), 10);
   VAR_12--; VAR_13++;
   break;
  case 129:
   FUNC_0("table type required");

   if ((VAR_24 = FUNC_8(*VAR_13, ':')) != ((void*)0))
    *VAR_24++ = '\0';
   VAR_20 = FUNC_6(VAR_9, *VAR_13);
   if (VAR_20 == -1) {
    FUNC_1(VAR_25, sizeof(VAR_25), VAR_9,
        ", ");
    FUNC_3(VAR_3,
        "Unknown tabletype: %s. Supported: %s",
        *VAR_13, VAR_25);
   }
   VAR_14.type = VAR_20;
   if (VAR_24 != ((void*)0)) {
    VAR_16 = FUNC_16(VAR_20, VAR_24, &VAR_14.tflags);
    if (VAR_16 != 0)
     FUNC_3(VAR_3,
         "Unsupported suboptions: %s", VAR_24);
   }
   VAR_12--; VAR_13++;
   break;
  case 128:
   FUNC_0("table value type required");
   VAR_21 = VAR_22 = 0;
   VAR_20 = FUNC_4(VAR_10, *VAR_13, &VAR_23, &VAR_21, &VAR_22);
   if (VAR_20 != -1) {
    VAR_14.vmask = VAR_21;
    VAR_12--; VAR_13++;
    break;
   }
   FUNC_1(VAR_25, sizeof(VAR_25), VAR_10, ", ");
   FUNC_3(VAR_3, "Unknown value type: %s. Supported: %s",
       VAR_23, VAR_25);
   break;
  case 134:
   FUNC_0("table algorithm name required");
   if (FUNC_11(*VAR_13) > sizeof(VAR_14.algoname))
    FUNC_3(VAR_3, "algorithm name too long");
   FUNC_10(VAR_14.algoname, *VAR_13, sizeof(VAR_14.algoname));
   VAR_12--; VAR_13++;
   break;
  case 132:
   VAR_14.flags |= VAR_5;
   break;
  case 130:
   VAR_18 = 1;

  case 131:
   VAR_17 = 1;
   break;
  }
 }


 if (VAR_14.algoname[0] == '\0' && VAR_14.type == 0)
  VAR_14.type = VAR_4;
 if (VAR_14.vmask == 0)
  VAR_14.vmask = VAR_6;

 VAR_16 = FUNC_13(VAR_11, &VAR_14);

 if (VAR_16 == 0)
  return;

 if (VAR_7 != VAR_0 || VAR_17 == 0)
  FUNC_2(VAR_2, "Table creation failed");


 if (FUNC_15(VAR_11, &VAR_15) != 0)
  FUNC_2(VAR_2, "Existing table check failed");

 if (VAR_14.limit != VAR_15.limit || VAR_14.type != VAR_15.type ||
     VAR_14.tflags != VAR_15.tflags || VAR_14.vmask != VAR_15.vmask || (
     VAR_14.algoname[0] != '\0' && FUNC_9(VAR_14.algoname,
     VAR_15.algoname) != 0) || VAR_14.flags != VAR_15.flags)
  FUNC_3(VAR_1, "The existing table is not compatible "
      "with one you are creating.");


 if (VAR_18 != 0 && FUNC_14(VAR_11) != 0)
  FUNC_2(VAR_2, "Table flush on creation failed");
}

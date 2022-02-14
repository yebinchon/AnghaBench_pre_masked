
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int xi ;
typedef void* uint8_t ;
typedef int uint32_t ;
typedef int tent ;
struct TYPE_22__ {int flags; } ;
struct TYPE_23__ {char* tablename; int result; TYPE_2__ head; int vmask; void* type; } ;
typedef TYPE_3__ ipfw_xtable_info ;
typedef TYPE_3__ ipfw_obj_tentry ;
struct TYPE_21__ {void* type; int name; } ;
struct TYPE_24__ {TYPE_1__ ntlv; } ;
typedef TYPE_5__ ipfw_obj_header ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* FUNC_0 (int,int) ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int ,int) ;
 int FUNC_4 (char*,char*) ;
 char* FUNC_5 (int) ;
 int FUNC_6 (char*,int ,int) ;
 int FUNC_7 (TYPE_5__*,TYPE_3__*) ;
 int FUNC_8 (int,TYPE_5__*,TYPE_3__*,int,int) ;
 int FUNC_9 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_10 (TYPE_5__*,TYPE_3__*,char*,int,void**,int *,TYPE_3__*) ;
 int FUNC_11 (TYPE_5__*,TYPE_3__*,char*,void*,int ) ;
 int FUNC_12 (char*,char*) ;

__attribute__((used)) static void
FUNC_13(ipfw_obj_header *VAR_6, int VAR_7, char *VAR_8[], int VAR_9,
    int VAR_10, int VAR_11, int VAR_12)
{
 ipfw_obj_tentry *VAR_13, VAR_14, *VAR_15;
 ipfw_xtable_info VAR_16;
 uint8_t VAR_17;
 uint32_t VAR_18;
 int VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;
 char *VAR_24, *VAR_25, *VAR_26;

 if (VAR_7 == 0)
  FUNC_1(VAR_1, "address required");

 if (VAR_9 != 0) {
  VAR_19 = VAR_3;
  VAR_24 = "Adding record failed";
 } else {
  VAR_19 = VAR_4;
  VAR_24 = "Deleting record failed";
 }







 VAR_20 = (VAR_9 != 0) ? VAR_7 / 2 + 1 : VAR_7;

 if (VAR_20 <= 1) {

  FUNC_3(&VAR_14, 0, sizeof(VAR_14));
  VAR_15 = &VAR_14;
 } else {

  if ((VAR_15 = FUNC_0(VAR_20, sizeof(VAR_14))) == ((void*)0))
   FUNC_1(VAR_0,
       "Unable to allocate memory for all entries");
 }
 VAR_13 = VAR_15;

 FUNC_3(&VAR_16, 0, sizeof(VAR_16));
 VAR_20 = 0;
 while (VAR_7 > 0) {
  FUNC_10(VAR_6, VAR_13, *VAR_8, VAR_9, &VAR_17, &VAR_18, &VAR_16);




  if (VAR_16.tablename[0] == '\0') {
   VAR_16.type = VAR_17;
   VAR_16.vmask = VAR_18;
   FUNC_6(VAR_16.tablename, VAR_6->ntlv.name,
       sizeof(VAR_16.tablename));
   if (VAR_10 == 0)
    FUNC_12("DEPRECATED: inserting data into "
        "non-existent table %s. (auto-created)",
        VAR_16.tablename);
   FUNC_7(VAR_6, &VAR_16);
  }

  VAR_6->ntlv.type = VAR_17;
  VAR_7--; VAR_8++;

  if (VAR_9 != 0 && VAR_7 > 0) {
   FUNC_11(VAR_6, VAR_13, *VAR_8, VAR_17, VAR_18);
   VAR_7--; VAR_8++;
  }

  if (VAR_11 != 0)
   VAR_13->head.flags |= VAR_2;

  VAR_20++;
  VAR_13++;
 }

 VAR_21 = FUNC_8(VAR_19, VAR_6, VAR_15, VAR_20, VAR_12);





 if (VAR_21 == 0 || (VAR_21 == 139 && VAR_9 != 0) ||
     (VAR_21 == 137 && VAR_9 == 0)) {
  if (VAR_10 != 0) {
   if (VAR_15 != &VAR_14)
    FUNC_2(VAR_15);
   return;
  }
 }


 VAR_13 = VAR_15;
 for (VAR_22 = 0; VAR_22 < VAR_20; VAR_13++, VAR_22++) {
  VAR_23 = 0;
  switch (VAR_13->result) {
  case 135:
   VAR_26 = "added";
   break;
  case 134:
   VAR_26 = "deleted";
   break;
  case 128:
   VAR_26 = "updated";
   break;
  case 130:
   VAR_26 = "limit";
   VAR_23 = 1;
   break;
  case 133:
   VAR_26 = "error";
   VAR_23 = 1;
   break;
  case 129:
   VAR_26 = "notfound";
   VAR_23 = 1;
   break;
  case 132:
   VAR_26 = "exists";
   VAR_23 = 1;
   break;
  case 131:
   VAR_26 = "ignored";
   VAR_23 = 1;
   break;
  default:
   VAR_26 = "unknown";
   VAR_23 = 1;
  }

  if (VAR_21 != 0 && VAR_12 != 0 && VAR_23 == 0)
   FUNC_4("%s(reverted): ", VAR_26);
  else
   FUNC_4("%s: ", VAR_26);

  FUNC_9(&VAR_16, VAR_13);
 }

 if (VAR_15 != &VAR_14)
  FUNC_2(VAR_15);

 if (VAR_21 == 0)
  return;

 VAR_21 = VAR_5;


 switch (VAR_21) {
 case 139:
  VAR_25 = "record already exists";
  break;
 case 138:
  VAR_25 = "limit hit";
  break;
 case 136:
  VAR_25 = "table not found";
  break;
 case 137:
  VAR_25 = "record not found";
  break;
 case 140:
  VAR_25 = "table is locked";
  break;
 default:
  VAR_25 = FUNC_5(VAR_21);
 }

 FUNC_1(VAR_0, "%s: %s", VAR_24, VAR_25);
}

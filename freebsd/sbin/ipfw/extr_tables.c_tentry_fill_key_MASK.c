
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_10__ {char* tablename; scalar_t__ vmask; scalar_t__ tflags; scalar_t__ type; } ;
typedef TYPE_2__ ipfw_xtable_info ;
typedef int ipfw_obj_tentry ;
struct TYPE_9__ {int name; } ;
struct TYPE_11__ {TYPE_1__ ntlv; } ;
typedef TYPE_3__ ipfw_obj_header ;
struct TYPE_12__ {scalar_t__ test_only; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_8__ VAR_5 ;
 int FUNC_0 (int ,char*,char*,...) ;
 scalar_t__ FUNC_1 (char*,scalar_t__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_3 (char*,int *,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(ipfw_obj_header *VAR_6, ipfw_obj_tentry *VAR_7, char *VAR_8,
    int VAR_9, uint8_t *VAR_10, uint32_t *VAR_11, ipfw_xtable_info *VAR_12)
{
 uint8_t VAR_13, VAR_14;
 uint32_t VAR_15;
 int VAR_16;

 VAR_13 = 0;
 VAR_14 = 0;
 VAR_15 = 0;

 if (VAR_12->tablename[0] == '\0')
  VAR_16 = FUNC_2(VAR_6, VAR_12);
 else
  VAR_16 = 0;

 if (VAR_16 == 0) {
  if (VAR_5.test_only == 0) {

   VAR_13 = VAR_12->type;
   VAR_14 = VAR_12->tflags;
   VAR_15 = VAR_12->vmask;
  } else {





   if (FUNC_1(VAR_8, &VAR_13) != 0) {

    FUNC_0(VAR_3, "Cannot guess "
        "key '%s' type", VAR_8);
   }
   VAR_15 = VAR_4;
  }
 } else {
  if (VAR_16 != VAR_0)
   FUNC_0(VAR_2, "Error requesting table %s info",
       VAR_6->ntlv.name);
  if (VAR_9 == 0)
   FUNC_0(VAR_1, "Table %s does not exist",
       VAR_6->ntlv.name);




  if (FUNC_1(VAR_8, &VAR_13) != 0) {

   FUNC_0(VAR_3, "Table %s does not exist, cannot guess "
       "key '%s' type", VAR_6->ntlv.name, VAR_8);
  }

  VAR_15 = VAR_4;
 }

 FUNC_3(VAR_8, VAR_7, VAR_13, VAR_14);

 *VAR_10 = VAR_13;
 *VAR_11 = VAR_15;
}

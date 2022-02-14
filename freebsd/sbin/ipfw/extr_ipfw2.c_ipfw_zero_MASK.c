
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int rt ;
struct TYPE_5__ {int start_rule; int end_rule; scalar_t__ set; scalar_t__ new_set; int flags; } ;
typedef TYPE_1__ ipfw_range_tlv ;
struct TYPE_6__ {scalar_t__ use_set; int do_quiet; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_4__ VAR_9 ;
 scalar_t__ FUNC_0 (int,TYPE_1__*) ;
 int FUNC_1 (int,char*,char const*) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (char) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*,int ,int,char const**) ;
 int FUNC_8 (char*,int,char const*) ;

void
FUNC_9(int VAR_10, char *VAR_11[], int VAR_12)
{
 ipfw_range_tlv VAR_13;
 char const *VAR_14;
 char const *VAR_15 = VAR_12 ? "RESETLOG" : "ZERO";
 uint32_t VAR_16;
 int VAR_17 = VAR_1;

 VAR_12 = VAR_12 ? VAR_7 : VAR_8;
 VAR_11++; VAR_10--;

 if (VAR_10 == 0) {

  FUNC_5(&VAR_13, 0, sizeof(VAR_13));
  VAR_13.flags = VAR_4;
  if (FUNC_0(VAR_12, &VAR_13) < 0)
   FUNC_1(VAR_2, "setsockopt(IP_FW_X%s)", VAR_15);
  if (!VAR_9.do_quiet)
   FUNC_6("%s.\n", VAR_12 == VAR_8 ?
       "Accounting cleared":"Logging counts reset");

  return;
 }

 while (VAR_10) {

  if (FUNC_4(**VAR_11)) {
   VAR_16 = FUNC_7(*VAR_11, 0, 0xffff, &VAR_14);
   if (VAR_14)
    FUNC_2(VAR_0,
        "invalid rule number %s\n", *VAR_11);
   FUNC_5(&VAR_13, 0, sizeof(VAR_13));
   VAR_13.start_rule = VAR_16;
   VAR_13.end_rule = VAR_16;
   VAR_13.flags |= VAR_5;
   if (VAR_9.use_set != 0) {
    VAR_13.set = VAR_9.use_set - 1;
    VAR_13.flags |= VAR_6;
   }
   if (FUNC_0(VAR_12, &VAR_13) != 0) {
    FUNC_8("rule %u: setsockopt(IP_FW_X%s)",
        VAR_16, VAR_15);
    VAR_17 = VAR_2;
   } else if (VAR_13.new_set == 0) {
    FUNC_6("Entry %d not found\n", VAR_16);
    VAR_17 = VAR_2;
   } else if (!VAR_9.do_quiet)
    FUNC_6("Entry %d %s.\n", VAR_16,
        VAR_12 == VAR_8 ?
     "cleared" : "logging count reset");
  } else {
   FUNC_2(VAR_3, "invalid rule number ``%s''", *VAR_11);
  }
  VAR_11++; VAR_10--;
 }
 if (VAR_17 != VAR_1)
  FUNC_3(VAR_17);
}

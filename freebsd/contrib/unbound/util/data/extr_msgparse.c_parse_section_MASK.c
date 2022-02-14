
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct rrset_parse {scalar_t__ type; int * dname; } ;
struct regional {int dummy; } ;
struct msg_parse {int dummy; } ;
typedef int sldns_pkt_section ;
typedef int sldns_buffer ;
typedef int hashvalue_type ;
typedef int dclass ;
struct TYPE_4__ {char* name; } ;
struct TYPE_3__ {char* _name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct rrset_parse*,int *,struct msg_parse*,struct regional*,int ,scalar_t__) ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (struct msg_parse*,int *,int *,size_t,scalar_t__,scalar_t__,int *,int *,int **,int **,size_t*,scalar_t__*,scalar_t__*,struct rrset_parse**,int ,struct regional*) ;
 int FUNC_3 (int ,char*,...) ;
 struct rrset_parse* FUNC_4 (struct msg_parse*,int *,size_t,scalar_t__,scalar_t__,int ,int ,int ,struct regional*) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 size_t FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int *,scalar_t__*) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *,scalar_t__*,int) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 TYPE_2__* FUNC_12 (int ,int) ;
 int VAR_3 ;
 TYPE_1__* FUNC_13 (scalar_t__) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_14(sldns_buffer* VAR_5, struct msg_parse* VAR_6,
 struct regional* VAR_7, sldns_pkt_section VAR_8,
 uint16_t VAR_9, size_t* VAR_10)
{
 uint16_t VAR_11;
 uint8_t* VAR_12, *VAR_13 = ((void*)0), *VAR_14 = ((void*)0);
 size_t VAR_15, VAR_16 = 0;
 uint16_t VAR_17, VAR_18 = 0;
 uint16_t VAR_19, VAR_20 = 0;
 uint32_t VAR_21 = 0;
 hashvalue_type VAR_22 = 0;
 struct rrset_parse* VAR_23 = ((void*)0);
 int VAR_24;

 if(VAR_9 == 0)
  return 0;
 if(FUNC_11(VAR_5) <= 0)
  return VAR_0;
 for(VAR_11=0; VAR_11<VAR_9; VAR_11++) {

  VAR_12 = FUNC_8(VAR_5);
  if((VAR_15 = FUNC_6(VAR_5)) == 0)
   return VAR_0;
  if(FUNC_11(VAR_5) < 10)
   return VAR_0;
  VAR_17 = FUNC_10(VAR_5);
  FUNC_9(VAR_5, &VAR_19, sizeof(VAR_19));

  if(0) {
   if(VAR_17 == VAR_2) {
    uint16_t VAR_25;
    if(FUNC_7(VAR_5,
     FUNC_8(VAR_5), &VAR_25))
     FUNC_3(VAR_4, "parse of %s(%d) [%s(%d)]",
     FUNC_13(VAR_17)?
     FUNC_13(VAR_17)->_name: "??",
     (int)VAR_17,
     FUNC_13(VAR_25)?
     FUNC_13(VAR_25)->_name: "??",
     (int)VAR_25);
   } else
     FUNC_3(VAR_4, "parse of %s(%d)",
    FUNC_13(VAR_17)?
    FUNC_13(VAR_17)->_name: "??",
    (int)VAR_17);
   FUNC_3(VAR_4, " %s(%d) ",
    FUNC_12(VAR_3,
    (int)FUNC_5(VAR_19))?FUNC_12(
    VAR_3, (int)FUNC_5(VAR_19))->name:
    "??", (int)FUNC_5(VAR_19));
   FUNC_1(VAR_4, VAR_5, VAR_12);
   FUNC_3(VAR_4, "\n");
  }


  if(!FUNC_2(VAR_6, VAR_5, VAR_12, VAR_15, VAR_17, VAR_19, &VAR_22,
   &VAR_21, &VAR_13, &VAR_14,
   &VAR_16, &VAR_18, &VAR_20, &VAR_23,
   VAR_8, VAR_7))
   return VAR_1;
  if(!VAR_23) {

   (*VAR_10)++;
   VAR_23 = FUNC_4(VAR_6, VAR_12, VAR_15, VAR_17, VAR_19,
    VAR_22, VAR_21, VAR_8, VAR_7);
   if(!VAR_23)
    return VAR_1;
  }
  else if(0) {
   FUNC_3(VAR_4, "is part of existing: ");
   FUNC_1(VAR_4, VAR_5, VAR_23->dname);
   FUNC_3(VAR_4, " type %s(%d)\n",
    FUNC_13(VAR_23->type)?
    FUNC_13(VAR_23->type)->_name: "??",
    (int)VAR_23->type);
  }

  if((VAR_24=FUNC_0(VAR_23, VAR_5, VAR_6, VAR_7, VAR_8,
   VAR_17)) != 0)
   return VAR_24;
 }
 return 0;
}

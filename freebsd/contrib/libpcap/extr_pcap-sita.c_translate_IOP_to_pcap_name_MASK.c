
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* iface; } ;
typedef TYPE_1__ unit_t ;
struct TYPE_7__ {int iftype; char* IOPname; char* name; struct TYPE_7__* next; } ;
typedef TYPE_2__ iface_t ;
typedef int bpf_u_int32 ;




 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,...) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (char*,int,char*,TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*,char*,int) ;
 int FUNC_8 (char*,int,char*,TYPE_1__*,int) ;

__attribute__((used)) static char *FUNC_9(unit_t *VAR_2, char *VAR_3, bpf_u_int32 VAR_4) {
 iface_t *VAR_5, *VAR_6;
 char *VAR_7;
 char VAR_8[32];
 char *VAR_9;
 char *VAR_10;
 int VAR_11 = 0;

 VAR_6 = FUNC_2(sizeof(iface_t));
 if (VAR_6 == ((void*)0)) {
  FUNC_1(VAR_1, "Error...couldn't allocate memory for interface structure...value of errno is: %d\n", VAR_0);
  return ((void*)0);
 }
 FUNC_3((char *)VAR_6, 0, sizeof(iface_t));

 VAR_6->iftype = VAR_4;

 VAR_7 = FUNC_2(FUNC_6(VAR_3) + 1);
        if (VAR_7 == ((void*)0)) {
                FUNC_1(VAR_1, "Error...couldn't allocate memory for IOPname...value of errno is: %d\n", VAR_0);
                return ((void*)0);
        }

 FUNC_5(VAR_7, VAR_3);
 VAR_6->IOPname = VAR_7;

 if (FUNC_7(VAR_3, "lo", 2) == 0) {
  VAR_11 = FUNC_0(&VAR_3[2]);
  switch (VAR_4) {
   case 129:
    FUNC_4(VAR_8, sizeof VAR_8, "lo", VAR_2);
    break;
   default:
    FUNC_8(VAR_8, sizeof VAR_8, "???", VAR_2, VAR_11);
    break;
  }
 } else if (FUNC_7(VAR_3, "eth", 3) == 0) {
  VAR_11 = FUNC_0(&VAR_3[3]);
  switch (VAR_4) {
   case 129:
    FUNC_4(VAR_8, sizeof VAR_8, "eth", VAR_2);
    break;
   default:
    FUNC_8(VAR_8, sizeof VAR_8, "???", VAR_2, VAR_11);
    break;
  }
 } else if (FUNC_7(VAR_3, "wan", 3) == 0) {
  VAR_11 = FUNC_0(&VAR_3[3]);
  switch (VAR_4) {
   case 128:
    FUNC_8(VAR_8, sizeof VAR_8, "wan", VAR_2, VAR_11);
    break;
   default:
    FUNC_8(VAR_8, sizeof VAR_8, "???", VAR_2, VAR_11);
    break;
  }
 } else {
  FUNC_1(VAR_1, "Error... invalid IOP name %s\n", VAR_3);
  return ((void*)0);
 }

 VAR_7 = FUNC_2(FUNC_6(VAR_8) + 1);
        if (VAR_7 == ((void*)0)) {
                FUNC_1(VAR_1, "Error...couldn't allocate memory for IOP port name...value of errno is: %d\n", VAR_0);
                return ((void*)0);
        }

 FUNC_5(VAR_7, VAR_8);
 VAR_6->name = VAR_7;

 if (VAR_2->iface == 0) {
  VAR_2->iface = VAR_6;
 } else {
  VAR_5 = VAR_2->iface;
  while (VAR_5->next) {
   VAR_5 = VAR_5->next;
  }
  VAR_5->next = VAR_6;
 }
 return VAR_6->name;
}

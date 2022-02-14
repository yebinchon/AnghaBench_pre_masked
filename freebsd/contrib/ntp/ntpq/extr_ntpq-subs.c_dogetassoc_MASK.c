
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_short ;
struct TYPE_2__ {size_t assid; void* status; } ;
typedef int FILE ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 size_t VAR_2 ;
 char* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int ,int ,int ,char*,int *,size_t*,char const**) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 () ;
 void* FUNC_3 (int const) ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_4 () ;
 int VAR_7 ;

int
FUNC_5(
 FILE *VAR_8
 )
{
 const char *VAR_9;
 const u_short *VAR_10;
 int VAR_11;
 size_t VAR_12;
 u_short VAR_13;

 VAR_11 = FUNC_0(VAR_0, 0, 0, 0, (char *)0, &VAR_13,
     &VAR_12, &VAR_9);

 if (VAR_11 != 0)
  return 0;

 if (VAR_12 == 0) {
  if (VAR_6 > 1)
   FUNC_1(*VAR_8, "server=%s ", VAR_3);
  FUNC_1(*VAR_8, "No association ID's returned\n");
  return 0;
 }

 if (VAR_12 & 0x3) {
  if (VAR_6 > 1)
   FUNC_1(VAR_7, "server=%s ", VAR_3);
  FUNC_1(VAR_7,
   "***Server returned %zu octets, should be multiple of 4\n",
   VAR_12);
  return 0;
 }

 VAR_5 = 0;

 while (VAR_12 > 0) {
  if (VAR_5 >= VAR_2) {
   FUNC_2();
  }
  VAR_10 = (const void *)VAR_9;
  VAR_1[VAR_5].assid = FUNC_3(*VAR_10);
  VAR_9 += sizeof(*VAR_10);
  VAR_10 = (const void *)VAR_9;
  VAR_1[VAR_5].status = FUNC_3(*VAR_10);
  VAR_9 += sizeof(*VAR_10);
  VAR_12 -= 2 * sizeof(*VAR_10);
  if (VAR_4) {
   FUNC_1(VAR_7, "[%u] ",
    VAR_1[VAR_5].assid);
  }
  VAR_5++;
 }
 if (VAR_4) {
  FUNC_1(VAR_7, "\n%d associations total\n", VAR_5);
 }
 FUNC_4();
 return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_int ;
struct dn_sch {int dummy; } ;
struct dn_id {int id; int len; int subtype; } ;
struct dn_fs {int dummy; } ;
struct dn_flow {int dummy; } ;
struct TYPE_2__ {int do_pipe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct dn_id*,int) ;
 int FUNC_1 (struct dn_id*,struct dn_id*,int) ;
 TYPE_1__ VAR_6 ;
 int FUNC_2 (int ,struct dn_id*,uintptr_t) ;
 int FUNC_3 (struct dn_id*) ;
 int FUNC_4 (struct dn_id*,int ) ;
 int FUNC_5 (struct dn_id*,int,int ,int ) ;
 int FUNC_6 (int,char**,int *,int) ;
 struct dn_id* FUNC_7 (int,int) ;
 struct dn_id* FUNC_8 (struct dn_id*,int) ;

void
FUNC_9(int VAR_7, char *VAR_8[], int VAR_9)
{
 struct dn_id *VAR_10, *VAR_11 = ((void*)0);
 int VAR_12, VAR_13;
 int VAR_14;
 u_int VAR_15, VAR_16;
 u_int VAR_17;

 (void)VAR_9;
 VAR_7--;
 VAR_8++;

 VAR_14 = FUNC_6(VAR_7, VAR_8, ((void*)0), 0);


 VAR_16 = sizeof(*VAR_10) + sizeof(uint32_t) * VAR_14 * 2;
 VAR_10 = FUNC_7(1, VAR_16);
 FUNC_5(VAR_10, VAR_16, VAR_1, VAR_0);

 if (VAR_14 > 0)
  FUNC_6(VAR_7, VAR_8, (uint32_t *)(VAR_10 + 1), VAR_14*2);
 VAR_17 = sizeof(struct dn_fs);
 if (VAR_17 < sizeof(struct dn_sch))
  VAR_17 = sizeof(struct dn_sch);
 if (VAR_17 < sizeof(struct dn_flow))
  VAR_17 = sizeof(struct dn_flow);

 switch (VAR_6.do_pipe) {
 case 1:
  VAR_10->subtype = VAR_3;
  break;
 case 2:
  VAR_10->subtype = VAR_2;
  break;
 case 3:
  VAR_10->subtype = VAR_4;
  break;
 }
 if (VAR_14 > 0) {
  VAR_15 = 4*1024;
 } else {
  VAR_12 = FUNC_2(-VAR_5, VAR_10, (uintptr_t)&VAR_16);
  if (VAR_12 != 0 || VAR_10->id <= sizeof(*VAR_10))
   goto done;
  VAR_15 = VAR_10->id + VAR_17;
  VAR_10->len = sizeof(*VAR_10);
 }

 for (VAR_13 = 0; VAR_13 < 20; VAR_13++) {
  VAR_16 = VAR_15;
  VAR_11 = FUNC_8(VAR_11, VAR_16);
  FUNC_1(VAR_10, VAR_11, VAR_10->len);
  VAR_12 = FUNC_2(-VAR_5, VAR_11, (uintptr_t)&VAR_16);
  if (VAR_12 != 0 || VAR_11->id <= sizeof(*VAR_10))
   goto done;
  if (VAR_16 + VAR_17 <= VAR_15)
   break;
  VAR_15 *= 2;
 }
 FUNC_4(VAR_11, FUNC_0(VAR_11, VAR_16));
done:
 if (VAR_11)
  FUNC_3(VAR_11);
 FUNC_3(VAR_10);
}

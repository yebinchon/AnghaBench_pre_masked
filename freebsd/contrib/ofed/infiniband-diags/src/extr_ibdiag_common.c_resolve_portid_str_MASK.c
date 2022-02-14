
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct ibmad_port {int dummy; } ;
typedef int ibmad_gid_t ;
struct TYPE_11__ {int lid; int drpath; int member_0; } ;
typedef TYPE_1__ ib_portid_t ;
typedef enum MAD_DEST { ____Placeholder_MAD_DEST } MAD_DEST ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;





 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int,int ,int ) ;
 int FUNC_3 (int ,char*,int *) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (char*,int ,TYPE_1__*,int ,TYPE_1__*,struct ibmad_port const*) ;
 int FUNC_6 (char*,int ,TYPE_1__*,int *,TYPE_1__*,struct ibmad_port const*) ;
 int FUNC_7 (char*,int ,TYPE_1__*,int*,int *) ;
 int FUNC_8 (int *,char*,int ,int ) ;
 int FUNC_9 (char*,char**,int ) ;
 int FUNC_10 (char*,int ,int ) ;

int FUNC_11(char *VAR_1, uint8_t VAR_2, ib_portid_t * VAR_3,
         char *VAR_4, enum MAD_DEST VAR_5,
         ib_portid_t *VAR_6, const struct ibmad_port *VAR_7)
{
 ibmad_gid_t VAR_8;
 uint64_t VAR_9;
 int VAR_10;
 char *VAR_11;
 ib_portid_t VAR_12 = { 0 };
 int VAR_13 = 0;

 FUNC_4(VAR_3, 0, sizeof *VAR_3);

 switch (VAR_5) {
 case 128:
  VAR_10 = FUNC_9(VAR_4, 0, 0);
  if (!FUNC_1(VAR_10))
   return -1;
  return FUNC_2(VAR_3, VAR_10, 0, 0);

 case 132:
  if (FUNC_8(&VAR_3->drpath, VAR_4, 0, 0) < 0)
   return -1;
  return 0;

 case 129:
  if (!(VAR_9 = FUNC_10(VAR_4, 0, 0)))
   return -1;


  return FUNC_6(VAR_1, VAR_2, VAR_3, &VAR_9, VAR_6,
        VAR_7);

 case 131:
  VAR_10 = FUNC_9(VAR_4, &VAR_11, 0);
  VAR_11++;
  if (!FUNC_1(VAR_10))
   return -1;
  FUNC_2(VAR_3, VAR_10, 0, 0);


  if (FUNC_7(VAR_1, VAR_2, &VAR_12, &VAR_13,
     ((void*)0)) < 0)
   return -1;
  if (FUNC_8(&VAR_3->drpath, VAR_11, VAR_12.lid, 0) <
      0)
   return -1;
  return 0;

 case 130:
  if (FUNC_3(VAR_0, VAR_4, &VAR_8) <= 0)
   return -1;
  return FUNC_5(VAR_1, VAR_2, VAR_3, VAR_8, VAR_6,
       VAR_7);
 default:
  FUNC_0("bad dest_type %d", VAR_5);
 }

 return -1;
}

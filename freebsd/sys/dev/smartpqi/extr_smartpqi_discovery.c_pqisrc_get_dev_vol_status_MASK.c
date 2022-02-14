
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int request ;
struct TYPE_3__ {int* data; int status; int sense_data_len; } ;
typedef TYPE_1__ raid_path_error_info_elem_t ;
typedef int pqisrc_softstate_t ;
typedef int pqisrc_raid_req_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 unsigned int FUNC_2 (int ) ;
 int VAR_3 ;



 int VAR_4 ;







 int VAR_5 ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,int *,int *,int ,int ,int ,int*,TYPE_1__*) ;
 int FUNC_5 (int*,unsigned int,int*,int*,int*) ;
 int FUNC_6 (int *,int*) ;

__attribute__((used)) static uint8_t FUNC_7(pqisrc_softstate_t *VAR_6,
 uint8_t *VAR_7)
{
 int VAR_8 = VAR_3;
 uint8_t *VAR_9;
 unsigned VAR_10;
 uint8_t VAR_11;
 uint8_t VAR_12;
 uint8_t VAR_13;
 uint8_t VAR_14;
 uint8_t VAR_15;
 pqisrc_raid_req_t VAR_16;
 raid_path_error_info_elem_t VAR_17;

 FUNC_1("IN\n");

 FUNC_3(&VAR_16, 0, sizeof(VAR_16));
 VAR_8 = FUNC_4(VAR_6, &VAR_16, ((void*)0), 0,
    VAR_5, 0, VAR_7, &VAR_17);

 if (VAR_8)
  goto error;
 VAR_9 = VAR_17.data;
 VAR_10 = FUNC_2(VAR_17.sense_data_len);

 if (VAR_10 > sizeof(VAR_17.data))
  VAR_10 = sizeof(VAR_17.data);

 FUNC_5(VAR_9, VAR_10, &VAR_11, &VAR_12,
  &VAR_13);

 VAR_15 = VAR_17.status;


 if (VAR_15 != 2 ||
     VAR_11 != 2 ||
     VAR_12 != VAR_2) {
  return VAR_4;
 }


 VAR_14 = FUNC_6(VAR_6, VAR_7);

 FUNC_0("offline_status 0x%x\n", VAR_14);


 switch (VAR_14) {
 case 129:
 case 135:
 case 128:
 case 134:
 case 136:
 case 133:
 case 131:
 case 130:
 case 137:
  return VAR_14;
 case 132:




  if (VAR_13 == VAR_0 ||
      VAR_13 == VAR_1)
   return VAR_14;
  break;
 }

 FUNC_1("OUT\n");

 return VAR_4;

error:
 return 132;
}

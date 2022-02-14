
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int pqisrc_softstate_t ;
struct TYPE_3__ {scalar_t__ raid_level; int scsi3addr; } ;
typedef TYPE_1__ pqi_scsi_dev_t ;


 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,int ,int,scalar_t__*,int) ;

__attribute__((used)) static void FUNC_5(pqisrc_softstate_t *VAR_4,
 pqi_scsi_dev_t *VAR_5)
{
 uint8_t VAR_6;
 uint8_t *VAR_7;

 FUNC_1("IN\n");

 VAR_6 = VAR_1;

 VAR_7 = FUNC_2(VAR_4, 64);
 if (VAR_7) {
  int VAR_8;
  VAR_8 = FUNC_4(VAR_4, VAR_5->scsi3addr,
   VAR_3 | VAR_2, VAR_7, 64);
  if (VAR_8 == 0) {
   VAR_6 = VAR_7[8];
   if (VAR_6 > VAR_0)
    VAR_6 = VAR_1;
  }
  FUNC_3(VAR_4, (char*)VAR_7, 64);
 }

 VAR_5->raid_level = VAR_6;
 FUNC_0("RAID LEVEL: %x \n", VAR_6);
 FUNC_1("OUT\n");
}

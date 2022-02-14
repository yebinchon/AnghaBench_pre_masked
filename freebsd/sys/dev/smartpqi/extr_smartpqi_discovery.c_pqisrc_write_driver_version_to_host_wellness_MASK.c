
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct bmic_host_wellness_driver_version {char* start_tag; char* driver_version_tag; char* driver_version; char* end_tag; int driver_version_length; } ;
typedef int request ;
struct TYPE_6__ {int os_name; } ;
typedef TYPE_1__ pqisrc_softstate_t ;
typedef int pqisrc_raid_req_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int *,int ,int) ;
 struct bmic_host_wellness_driver_version* FUNC_5 (TYPE_1__*,size_t) ;
 int FUNC_6 (TYPE_1__*,char*,size_t) ;
 int FUNC_7 (TYPE_1__*,int *,struct bmic_host_wellness_driver_version*,size_t,int ,int ,int *,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,int ,int) ;

int FUNC_10(pqisrc_softstate_t *VAR_5)
{
 int VAR_6 = VAR_3;
 struct bmic_host_wellness_driver_version *VAR_7;
 size_t VAR_8;
 pqisrc_raid_req_t VAR_9;

 FUNC_2("IN\n");

 FUNC_4(&VAR_9, 0, sizeof(VAR_9));
 VAR_8 = sizeof(*VAR_7);

 VAR_7 = FUNC_5(VAR_5, VAR_8);
 if (!VAR_7) {
  FUNC_1("failed to allocate memory for host wellness driver_version\n");
  return VAR_2;
 }

 VAR_7->start_tag[0] = '<';
 VAR_7->start_tag[1] = 'H';
 VAR_7->start_tag[2] = 'W';
 VAR_7->start_tag[3] = '>';
 VAR_7->driver_version_tag[0] = 'D';
 VAR_7->driver_version_tag[1] = 'V';
 VAR_7->driver_version_length = FUNC_3(sizeof(VAR_7->driver_version));
 FUNC_9(VAR_7->driver_version, VAR_5->os_name,
        sizeof(VAR_7->driver_version));
    if (FUNC_8(VAR_5->os_name) < sizeof(VAR_7->driver_version) ) {
        FUNC_9(VAR_7->driver_version + FUNC_8(VAR_5->os_name), VAR_1,
   sizeof(VAR_7->driver_version) - FUNC_8(VAR_5->os_name));
    } else {
        FUNC_0("OS name length(%lu) is longer than buffer of driver_version\n",
            FUNC_8(VAR_5->os_name));
    }
 VAR_7->driver_version[sizeof(VAR_7->driver_version) - 1] = '\0';
 VAR_7->end_tag[0] = 'Z';
 VAR_7->end_tag[1] = 'Z';

 VAR_6 = FUNC_7(VAR_5, &VAR_9, VAR_7,VAR_8,
     VAR_0, 0, (uint8_t *)VAR_4, ((void*)0));

 FUNC_6(VAR_5, (char *)VAR_7, VAR_8);

 FUNC_2("OUT");
 return VAR_6;
}

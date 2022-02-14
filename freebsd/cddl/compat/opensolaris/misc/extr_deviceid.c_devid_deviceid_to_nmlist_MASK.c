
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int path ;
struct TYPE_7__ {int devname; } ;
typedef TYPE_1__ devid_nmlist_t ;
struct TYPE_8__ {int devid; } ;
typedef TYPE_2__ ddi_devid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char*,int) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int) ;

int
FUNC_4(char *VAR_4, ddi_devid_t VAR_5, char *VAR_6,
    devid_nmlist_t **VAR_7)
{
 char VAR_8[VAR_2];
 char *VAR_9;

 if (FUNC_1(VAR_5.devid, VAR_8, sizeof(VAR_8)) == -1)
  return (VAR_3);
 *VAR_7 = FUNC_2(sizeof(**VAR_7));
 if (*VAR_7 == ((void*)0))
  return (VAR_1);
 if (FUNC_3((*VAR_7)[0].devname, VAR_8,
     sizeof((*VAR_7)[0].devname)) >= sizeof((*VAR_7)[0].devname)) {
  FUNC_0(*VAR_7);
  return (VAR_0);
 }
 return (0);
}

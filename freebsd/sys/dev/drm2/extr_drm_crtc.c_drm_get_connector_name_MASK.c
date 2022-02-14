
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_connector {size_t connector_type; int connector_type_id; } ;
struct TYPE_2__ {char* name; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*,int,char*,char*,int) ;

char *FUNC_1(struct drm_connector *VAR_1)
{
 static char VAR_2[32];

 FUNC_0(VAR_2, 32, "%s-%d",
   VAR_0[VAR_1->connector_type].name,
   VAR_1->connector_type_id);
 return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct mod_metadata {scalar_t__ md_type; TYPE_1__* md_data; } ;
struct TYPE_8__ {char* name; } ;
typedef TYPE_1__ moduledata_t ;
typedef TYPE_2__* linker_file_t ;
struct TYPE_9__ {int filename; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct mod_metadata** FUNC_1 (int ) ;
 struct mod_metadata** FUNC_2 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (TYPE_2__*,char*,struct mod_metadata***,struct mod_metadata***,int *) ;
 TYPE_2__* VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (TYPE_1__ const*,TYPE_2__*) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static int
FUNC_7(linker_file_t VAR_6)
{
 struct mod_metadata **VAR_7, **VAR_8, **VAR_9;
 const moduledata_t *VAR_10;
 int VAR_11, VAR_12;

 FUNC_0(VAR_0, ("linker_file_register_modules: registering modules"
     " in %s\n", VAR_6->filename));

 FUNC_6(&VAR_3, VAR_2);

 if (FUNC_3(VAR_6, "modmetadata_set", &VAR_7,
     &VAR_8, ((void*)0)) != 0) {





  if (VAR_6 == VAR_4) {
   VAR_7 = FUNC_1(VAR_5);
   VAR_8 = FUNC_2(VAR_5);
  } else
   return (0);
 }
 VAR_11 = 0;
 for (VAR_9 = VAR_7; VAR_9 < VAR_8; VAR_9++) {
  if ((*VAR_9)->md_type != VAR_1)
   continue;
  VAR_10 = (*VAR_9)->md_data;
  FUNC_0(VAR_0, ("Registering module %s in %s\n",
      VAR_10->name, VAR_6->filename));
  VAR_12 = FUNC_4(VAR_10, VAR_6);
  if (VAR_12) {
   FUNC_5("Module %s failed to register: %d\n",
       VAR_10->name, VAR_12);
   if (VAR_11 == 0)
    VAR_11 = VAR_12;
  }
 }
 return (VAR_11);
}

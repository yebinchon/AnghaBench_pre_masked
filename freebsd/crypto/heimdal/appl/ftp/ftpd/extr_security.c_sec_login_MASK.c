
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sec_client_mech {char* name; scalar_t__ (* init ) (void*) ;int (* auth ) (void*,char*) ;scalar_t__ size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,char*) ;
 void* VAR_6 ;
 scalar_t__ VAR_7 ;
 struct sec_client_mech* VAR_8 ;
 struct sec_client_mech** VAR_9 ;
 int FUNC_1 (char*,...) ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* FUNC_2 (void*,scalar_t__) ;
 void* VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_3 (void*) ;
 int FUNC_4 (void*,char*) ;
 int VAR_14 ;
 int FUNC_5 (char*,unsigned long) ;

int
FUNC_6(char *VAR_15)
{
    int VAR_16;
    struct sec_client_mech **VAR_17;
    int VAR_18 = VAR_14;

    VAR_14 = -1;


    for(VAR_17 = VAR_9; *VAR_17 && (*VAR_17)->name; VAR_17++) {
 void *VAR_19;

 VAR_19 = FUNC_2(VAR_4, (*VAR_17)->size);
 if (VAR_19 == ((void*)0)) {
     FUNC_5 ("realloc %lu failed", (unsigned long)(*VAR_17)->size);
     return -1;
 }
 VAR_4 = VAR_19;

 if((*VAR_17)->init && (*(*VAR_17)->init)(VAR_4) != 0) {
     FUNC_1("Skipping %s...\n", (*VAR_17)->name);
     continue;
 }
 FUNC_1("Trying %s...\n", (*VAR_17)->name);
 VAR_16 = FUNC_0("AUTH %s", (*VAR_17)->name);
 if(VAR_16 != VAR_2){
     if(VAR_5 == 504){
  FUNC_1("%s is not supported by the server.\n", (*VAR_17)->name);
     }else if(VAR_5 == 534){
  FUNC_1("%s rejected as security mechanism.\n", (*VAR_17)->name);
     }else if(VAR_16 == VAR_3) {
  FUNC_1("The server doesn't support the FTP "
         "security extensions.\n");
  VAR_14 = VAR_18;
  return -1;
     }
     continue;
 }

 VAR_16 = (*(*VAR_17)->auth)(VAR_4, VAR_15);

 if(VAR_16 == VAR_0)
     continue;
 else if(VAR_16 != VAR_1){

     VAR_14 = VAR_18;
     return -1;
 }
 VAR_8 = *VAR_17;
 VAR_13 = 1;
 if(VAR_7) {
     VAR_6 = VAR_10;
     VAR_12 = VAR_10;
 } else {
     VAR_6 = VAR_11;
 }
 break;
    }

    VAR_14 = VAR_18;
    return *VAR_17 == ((void*)0);
}

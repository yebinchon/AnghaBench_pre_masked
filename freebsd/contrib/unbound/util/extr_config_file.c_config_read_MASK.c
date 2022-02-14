
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct config_file {scalar_t__ dnscrypt_port; int dnscrypt; } ;
struct TYPE_6__ {char** gl_pathv; scalar_t__ gl_pathc; } ;
typedef TYPE_1__ glob_t ;
typedef int g ;
struct TYPE_7__ {scalar_t__ errors; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_5__* VAR_9 ;
 int FUNC_0 (struct config_file*,char*,char const*) ;
 int VAR_10 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,char*,char*,scalar_t__) ;
 int FUNC_4 (char*,int,int *,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (char*,char*,...) ;
 int FUNC_7 (TYPE_1__*,int ,int) ;
 int VAR_11 ;
 int FUNC_8 (char*,char) ;
 int FUNC_9 (int ) ;
 int * VAR_12 ;
 int FUNC_10 () ;
 int FUNC_11 (int ,char*,char*) ;

int
FUNC_12(struct config_file* VAR_13, const char* VAR_14, const char* VAR_15)
{
 FILE *VAR_16;
 char *VAR_17 = (char*)VAR_14;





 if(!VAR_17)
  return 1;
 VAR_16 = FUNC_2(VAR_17, "r");
 if(!VAR_16) {
  FUNC_6("Could not open %s: %s", VAR_17, FUNC_9(VAR_10));
  return 0;
 }
 FUNC_0(VAR_13, VAR_17, VAR_15);
 VAR_12 = VAR_16;
 FUNC_10();
 FUNC_1(VAR_16);

 if(!VAR_13->dnscrypt) VAR_13->dnscrypt_port = 0;

 if(VAR_9->errors != 0) {
  FUNC_3(VAR_11, "read %s failed: %d errors in configuration file\n",
   VAR_17, VAR_9->errors);
  VAR_10=VAR_0;
  return 0;
 }

 return 1;
}

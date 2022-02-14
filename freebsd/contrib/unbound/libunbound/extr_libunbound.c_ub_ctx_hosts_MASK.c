
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ub_ctx {int cfglock; TYPE_2__* env; scalar_t__ finalized; } ;
typedef int ldata ;
typedef int buf ;
struct TYPE_4__ {TYPE_1__* cfg; } ;
struct TYPE_3__ {int local_data; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*) ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char*,int,int *) ;
 int * FUNC_3 (char const*,char*) ;
 char* FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (unsigned char) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,int,char*,char*,char*,...) ;
 scalar_t__ FUNC_9 (char*) ;
 char* FUNC_10 (char*) ;

int
FUNC_11(struct ub_ctx* VAR_8, const char* VAR_9)
{
 FILE* VAR_10;
 char VAR_11[1024], VAR_12[1024];
 char* VAR_13, *VAR_14, *VAR_15, *VAR_16;
 FUNC_6(&VAR_8->cfglock);
 if(VAR_8->finalized) {
  FUNC_7(&VAR_8->cfglock);
  VAR_7=VAR_0;
  return VAR_2;
 }
 FUNC_7(&VAR_8->cfglock);
 if(VAR_9 == ((void*)0)) {
  VAR_9 = "/etc/hosts";

 }
 VAR_10 = FUNC_3(VAR_9, "r");
 if(!VAR_10) {

  return VAR_5;
 }
 while(FUNC_2(VAR_11, (int)sizeof(VAR_11), VAR_10)) {
  VAR_11[sizeof(VAR_11)-1] = 0;
  VAR_13=VAR_11;
  while(*VAR_13 == ' ' || *VAR_13 == '\t')
   VAR_13++;
  if(*VAR_13 == '#')
   continue;

  VAR_14 = VAR_13;

  while(FUNC_5((unsigned char)*VAR_13) || *VAR_13 == '.' || *VAR_13 == ':')
   VAR_13++;
  if(*VAR_13 == '\r')
   VAR_13++;
  if(*VAR_13 == '\n' || *VAR_13 == 0)
   continue;
  if(*VAR_13 == '%')
   continue;
  if(*VAR_13 != ' ' && *VAR_13 != '\t') {

   FUNC_1(VAR_10);
   VAR_7=VAR_0;
   return VAR_6;
  }
  *VAR_13++ = 0;

  while(*VAR_13) {
   while(*VAR_13 == ' ' || *VAR_13 == '\t' || *VAR_13=='\n'
    || *VAR_13=='\r')
    VAR_13++;
   if(*VAR_13 == 0 || *VAR_13 == '#')
    break;

   VAR_15 = VAR_13;
   while('!' <= *VAR_13 && *VAR_13 <= '~')
    VAR_13++;
   if(*VAR_13)
    *VAR_13++ = 0;
   FUNC_8(VAR_12, sizeof(VAR_12), "%s %s %s",
    VAR_15, FUNC_9(VAR_14)?"AAAA":"A", VAR_14);
   VAR_16 = FUNC_10(VAR_12);
   if(!VAR_16) {

    FUNC_1(VAR_10);
    VAR_7=VAR_1;
    return VAR_4;
   }
   FUNC_6(&VAR_8->cfglock);
   if(!FUNC_0(&VAR_8->env->cfg->local_data,
    VAR_16)) {
    FUNC_7(&VAR_8->cfglock);
    FUNC_1(VAR_10);
    VAR_7=VAR_1;
    return VAR_4;
   }
   FUNC_7(&VAR_8->cfglock);
  }
 }
 FUNC_1(VAR_10);
 return VAR_3;
}

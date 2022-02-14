
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ub_ctx {int dummy; } ;
typedef int buf ;
typedef int ULONG ;
struct TYPE_6__ {char* String; } ;
struct TYPE_7__ {struct TYPE_7__* Next; TYPE_1__ IpAddress; } ;
struct TYPE_8__ {TYPE_2__ DnsServerList; } ;
typedef TYPE_2__ IP_ADDR_STRING ;
typedef TYPE_3__ FIXED_INFO ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char*,int,int *) ;
 int * FUNC_3 (char const*,char*) ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (unsigned char) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (char*,char*,int) ;
 int FUNC_8 (struct ub_ctx*,char*) ;

int
FUNC_9(struct ub_ctx* VAR_4, const char* VAR_5)
{
 FILE* VAR_6;
 int VAR_7 = 0;
 char VAR_8[1024];
 char* VAR_9, *VAR_10;
 int VAR_11;

 if(VAR_5 == ((void*)0)) {

  VAR_5 = "/etc/resolv.conf";
 }
 VAR_6 = FUNC_3(VAR_5, "r");
 if(!VAR_6) {

  return VAR_3;
 }
 while(FUNC_2(VAR_8, (int)sizeof(VAR_8), VAR_6)) {
  VAR_8[sizeof(VAR_8)-1] = 0;
  VAR_9=VAR_8;
  while(*VAR_9 == ' ' || *VAR_9 == '\t')
   VAR_9++;
  if(FUNC_7(VAR_9, "nameserver", 10) == 0) {
   VAR_7++;
   VAR_9 += 10;

   while(*VAR_9 == ' ' || *VAR_9 == '\t')
    VAR_9++;
   VAR_10 = VAR_9;

   while(FUNC_5((unsigned char)*VAR_9) || *VAR_9=='.' || *VAR_9==':')
    VAR_9++;

   *VAR_9 = 0;

   if((VAR_11 = FUNC_8(VAR_4, VAR_10)) != VAR_2) {
    FUNC_1(VAR_6);
    return VAR_11;
   }
  }
 }
 FUNC_1(VAR_6);
 if(VAR_7 == 0) {

  return FUNC_8(VAR_4, "127.0.0.1");
 }
 return VAR_2;
}

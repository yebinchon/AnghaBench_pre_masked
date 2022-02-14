
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int time_t ;
struct module_env {int infra_cache; } ;
struct iter_env {int supports_ipv4; int supports_ipv6; int donotq; } ;
struct delegpt_addr {scalar_t__ lame; scalar_t__ dnsseclame; int addrlen; int addr; scalar_t__ bogus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ,int *,int ) ;
 scalar_t__ FUNC_2 (int ,int *,int ,int *,size_t,int ,int*,int*,int*,int*,int ) ;
 int FUNC_3 (int ,char*,int *,int ) ;
 int FUNC_4 (int ,char*,int,char*,char*,char*,char*) ;

__attribute__((used)) static int
FUNC_5(struct iter_env* VAR_3, struct module_env* VAR_4,
 uint8_t* VAR_5, size_t VAR_6, uint16_t VAR_7, time_t VAR_8,
 struct delegpt_addr* VAR_9)
{
 int VAR_10, VAR_11, VAR_12, VAR_13;
 if(VAR_9->bogus)
  return -1;
 if(FUNC_1(VAR_3->donotq, &VAR_9->addr, VAR_9->addrlen)) {
  FUNC_3(VAR_2, "skip addr on the donotquery list",
   &VAR_9->addr, VAR_9->addrlen);
  return -1;
 }
 if(!VAR_3->supports_ipv6 && FUNC_0(&VAR_9->addr, VAR_9->addrlen)) {
  return -1;
 }
 if(!VAR_3->supports_ipv4 && !FUNC_0(&VAR_9->addr, VAR_9->addrlen)) {
  return -1;
 }

 if(FUNC_2(VAR_4->infra_cache, &VAR_9->addr, VAR_9->addrlen,
  VAR_5, VAR_6, VAR_7, &VAR_11, &VAR_13, &VAR_12,
  &VAR_10, VAR_8)) {
  FUNC_3(VAR_2, "servselect", &VAR_9->addr, VAR_9->addrlen);
  FUNC_4(VAR_2, "   rtt=%d%s%s%s%s", VAR_10,
   VAR_11?" LAME":"",
   VAR_13?" DNSSEC_LAME":"",
   VAR_12?" REC_LAME":"",
   VAR_9->lame?" ADDR_LAME":"");
  if(VAR_11)
   return -1;
  else if(VAR_10 >= VAR_1)






   return -1;

  else if(VAR_12)
   return VAR_10+VAR_1*3;
  else if(VAR_13 || VAR_9->dnsseclame)
   return VAR_10+VAR_1*2;
  else if(VAR_9->lame)
   return VAR_10+VAR_1+1;
  else return VAR_10;
 }

 if(VAR_9->dnsseclame)
  return VAR_0+VAR_1*2;
 else if(VAR_9->lame)
  return VAR_1+1+VAR_0;
 return VAR_0;
}

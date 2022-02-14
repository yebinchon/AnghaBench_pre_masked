
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct nvme_power_state {int mps_nops; int apw_aps; int mp; int idlp; int ips; int actp; int enlat; int exlat; int rrt; int rrl; int rwt; int rwl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,int,int,int,char,int,int,int,int,int,int,int,int,int,int,int,int,int) ;

__attribute__((used)) static void
FUNC_1(int VAR_8, struct nvme_power_state *VAR_9)
{
 int VAR_10, VAR_11, VAR_12;
 uint8_t VAR_13, VAR_14, VAR_15, VAR_16;

 VAR_13 = (VAR_9->mps_nops >> VAR_5) &
  VAR_4;
 VAR_14 = (VAR_9->mps_nops >> VAR_7) &
  VAR_6;
 VAR_16 = (VAR_9->apw_aps >> VAR_3) &
  VAR_2;
 VAR_15 = (VAR_9->apw_aps >> VAR_1) &
  VAR_0;

 VAR_10 = VAR_9->mp;
 if (VAR_13 == 0)
  VAR_10 *= 100;
 VAR_12 = VAR_9->idlp;
 if (VAR_9->ips == 1)
  VAR_12 *= 100;
 VAR_11 = VAR_9->actp;
 if (VAR_15 == 1)
  VAR_11 *= 100;
 FUNC_0("%2d: %2d.%04dW%c %3d.%03dms %3d.%03dms %2d %2d %2d %2d %2d.%04dW %2d.%04dW %d\n",
        VAR_8, VAR_10 / 10000, VAR_10 % 10000,
        VAR_14 ? '*' : ' ', VAR_9->enlat / 1000, VAR_9->enlat % 1000,
        VAR_9->exlat / 1000, VAR_9->exlat % 1000, VAR_9->rrt, VAR_9->rrl,
        VAR_9->rwt, VAR_9->rwl, VAR_12 / 10000, VAR_12 % 10000,
        VAR_11 / 10000, VAR_11 % 10000, VAR_16);
}

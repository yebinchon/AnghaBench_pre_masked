
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcxhr_rmh {int cmd_len; unsigned char* cmd; int* stat; } ;
struct pcxhr_mgr {unsigned char last_reg_stat; } ;
typedef enum pcxhr_clock_type { ____Placeholder_pcxhr_clock_type } pcxhr_clock_type ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;






 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 int FUNC_0 (struct pcxhr_rmh*,int ) ;
 int FUNC_1 (struct pcxhr_mgr*,struct pcxhr_rmh*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct pcxhr_mgr *VAR_10,
     enum pcxhr_clock_type VAR_11,
     int *VAR_12)
{
 struct pcxhr_rmh VAR_13;
 unsigned char VAR_14;
 int VAR_15, VAR_16;

 switch (VAR_11) {
 case 137:
  VAR_14 = VAR_9;
  break;
 case 138:
  VAR_14 = VAR_7;
  break;
 case 142:
  VAR_14 = VAR_3;
  break;
 case 141:
  VAR_14 = VAR_4;
  break;
 case 140:
  VAR_14 = VAR_5;
  break;
 case 139:
  VAR_14 = VAR_6;
  break;
 default:
  return -VAR_1;
 }
 FUNC_0(&VAR_13, VAR_0);
 VAR_13.cmd_len = 2;
 VAR_13.cmd[0] |= VAR_2;
 if (VAR_10->last_reg_stat != VAR_14) {
  VAR_13.cmd[1] = VAR_14;
  VAR_15 = FUNC_1(VAR_10, &VAR_13);
  if (VAR_15)
   return VAR_15;
  FUNC_3(100);
  VAR_10->last_reg_stat = VAR_14;
 }
 VAR_13.cmd[1] = VAR_8;
 VAR_15 = FUNC_1(VAR_10, &VAR_13);
 if (VAR_15)
  return VAR_15;
 switch (VAR_13.stat[1] & 0x0f) {
 case 133 : VAR_16 = 32000; break;
 case 132 : VAR_16 = 44100; break;
 case 131 : VAR_16 = 48000; break;
 case 130 : VAR_16 = 64000; break;
 case 129 : VAR_16 = 88200; break;
 case 128 : VAR_16 = 96000; break;
 case 136 : VAR_16 = 128000; break;
 case 135 : VAR_16 = 176400; break;
 case 134 : VAR_16 = 192000; break;
 default: VAR_16 = 0;
 }
 FUNC_2("External clock is at %d Hz\n", VAR_16);
 *VAR_12 = VAR_16;
 return 0;
}

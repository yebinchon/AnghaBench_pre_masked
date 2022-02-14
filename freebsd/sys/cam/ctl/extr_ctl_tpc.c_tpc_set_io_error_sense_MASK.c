
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct tpc_list {int fwd_cscd; int params; int fwd_scsi_status; int fwd_target; int fwd_sense_len; int ctsio; int fwd_sense_data; int * cscd; int curseg; } ;
typedef int sks ;
typedef int csi ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int*,int) ;
 int FUNC_1 (int ,int,int ,int,int,int ,int,int*,int ,int,int*,int ,int,int*,int ) ;
 int FUNC_2 (int*,int*) ;
 int FUNC_3 (int ,int*) ;

__attribute__((used)) static void
FUNC_4(struct tpc_list *VAR_8)
{
 int VAR_9;
 uint8_t VAR_10[4];
 uint8_t VAR_11[3];
 uint8_t VAR_12[4 + 64];

 FUNC_3(VAR_8->curseg, VAR_10);
 if (VAR_8->fwd_cscd <= 0x07ff) {
  VAR_11[0] = VAR_7;
  FUNC_2((uint8_t *)&VAR_8->cscd[VAR_8->fwd_cscd] -
      VAR_8->params, &VAR_11[1]);
 } else
  VAR_11[0] = 0;
 if (VAR_8->fwd_scsi_status) {
  VAR_12[0] = 0x0c;
  VAR_12[2] = VAR_8->fwd_target;
  VAR_9 = VAR_8->fwd_sense_len;
  if (VAR_9 > 64) {
   VAR_9 = 64;
   VAR_12[2] |= VAR_5;
  }
  VAR_12[1] = 2 + VAR_9;
  VAR_12[3] = VAR_8->fwd_scsi_status;
  FUNC_0(&VAR_8->fwd_sense_data, &VAR_12[4], VAR_9);
  VAR_9 += 4;
 } else
  VAR_9 = 0;
 FUNC_1(VAR_8->ctsio, 1,
                   VAR_6,
             0x0d, 0x01,
     VAR_0, sizeof(VAR_10), VAR_10,
     VAR_11[0] ? VAR_4 : VAR_3, sizeof(VAR_11), VAR_11,
     VAR_9 ? VAR_1 : VAR_3, VAR_9, VAR_12,
     VAR_2);
}

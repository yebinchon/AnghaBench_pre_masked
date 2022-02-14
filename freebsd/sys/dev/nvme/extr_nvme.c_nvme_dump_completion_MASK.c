
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct nvme_completion {int cid; int sqid; int sqhd; int cdw0; int status; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int,int,int,int,int,int,int,int,int) ;

void
FUNC_8(struct nvme_completion *VAR_0)
{
 uint8_t VAR_1, VAR_2, VAR_3, VAR_4, VAR_5;
 uint16_t VAR_6;

 VAR_6 = FUNC_5(VAR_0->status);

 VAR_1 = FUNC_2(VAR_6);
 VAR_2 = FUNC_3(VAR_6);
 VAR_3 = FUNC_4(VAR_6);
 VAR_4 = FUNC_1(VAR_6);
 VAR_5 = FUNC_0(VAR_6);

 FUNC_7("cdw0:%08x sqhd:%04x sqid:%04x "
     "cid:%04x p:%x sc:%02x sct:%x m:%x dnr:%x\n",
     FUNC_6(VAR_0->cdw0), FUNC_5(VAR_0->sqhd), FUNC_5(VAR_0->sqid),
     VAR_0->cid, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}

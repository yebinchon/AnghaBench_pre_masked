
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
struct isp_nexus {size_t tgt; scalar_t__ lun; int crnseed; struct isp_nexus* next; } ;
struct isp_fc {struct isp_nexus** nexus_hash; struct isp_nexus* nexus_free_list; } ;
typedef scalar_t__ lun_id_t ;
struct TYPE_6__ {struct isp_fc* fc; } ;
struct TYPE_7__ {TYPE_1__ pc; } ;
struct TYPE_8__ {TYPE_2__ isp_osinfo; } ;
typedef TYPE_3__ ispsoftc_t ;
typedef int XS_T ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (size_t,scalar_t__) ;
 size_t FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 size_t FUNC_4 (int *) ;
 struct isp_nexus* FUNC_5 (int,int ,int) ;

int
FUNC_6(ispsoftc_t *VAR_3, uint8_t *VAR_4, XS_T *VAR_5)
{
 lun_id_t VAR_6;
 uint32_t VAR_7, VAR_8;
 struct isp_fc *VAR_9;
 struct isp_nexus *VAR_10;
 int VAR_11;

 if (FUNC_0(VAR_3))
  return (0);

 VAR_7 = FUNC_2(VAR_5);
 VAR_8 = FUNC_4(VAR_5);
 VAR_6 = FUNC_3(VAR_5);
 VAR_9 = &VAR_3->isp_osinfo.pc.fc[VAR_7];
 VAR_11 = FUNC_1(VAR_8, VAR_6);
 VAR_10 = VAR_9->nexus_hash[VAR_11];

 while (VAR_10) {
  if (VAR_10->tgt == VAR_8 && VAR_10->lun == VAR_6)
   break;
  VAR_10 = VAR_10->next;
 }
 if (VAR_10 == ((void*)0)) {
  VAR_10 = VAR_9->nexus_free_list;
  if (VAR_10 == ((void*)0)) {
   VAR_10 = FUNC_5(sizeof (struct isp_nexus), VAR_0, VAR_2|VAR_1);
   if (VAR_10 == ((void*)0)) {
    return (-1);
   }
  } else {
   VAR_9->nexus_free_list = VAR_10->next;
  }
  VAR_10->tgt = VAR_8;
  VAR_10->lun = VAR_6;
  VAR_10->next = VAR_9->nexus_hash[VAR_11];
  VAR_9->nexus_hash[VAR_11] = VAR_10;
 }
 if (VAR_10->crnseed == 0)
  VAR_10->crnseed = 1;
 *VAR_4 = VAR_10->crnseed++;
 return (0);
}

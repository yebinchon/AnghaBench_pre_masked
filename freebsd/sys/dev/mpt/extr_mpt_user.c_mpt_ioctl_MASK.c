
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct thread {int dummy; } ;
struct mpt_softc {int dummy; } ;
struct mpt_raid_action32 {int len; int write; int ioc_status; int action_status; int action_data; int volume_status; void* buf; int action_data_word; int phys_disk_num; int volume_id; int volume_bus; int action; } ;
struct mpt_raid_action {int len; int write; int ioc_status; int action_status; int action_data; int volume_status; int * buf; int action_data_word; int phys_disk_num; int volume_id; int volume_bus; int action; } ;
struct mpt_page_memory {int * vaddr; } ;
struct mpt_ext_cfg_page_req32 {int len; int ioc_status; void* buf; int page_address; int header; } ;
struct mpt_ext_cfg_page_req {int len; int ioc_status; int * buf; int page_address; int header; } ;
struct mpt_cfg_page_req32 {int len; int ioc_status; void* buf; int page_address; int header; } ;
struct mpt_cfg_page_req {int len; int ioc_status; int * buf; int page_address; int header; } ;
struct cdev {struct mpt_softc* si_drv1; } ;
typedef scalar_t__ caddr_t ;
typedef int CONFIG_PAGE_HEADER ;
typedef int CONFIG_EXTENDED_PAGE_HEADER ;


 int VAR_0 ;
 int FUNC_0 (struct mpt_softc*) ;
 int FUNC_1 (struct mpt_softc*) ;
 void* FUNC_2 (void*) ;
 void* FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (struct mpt_softc*,struct mpt_page_memory*,int) ;
 int FUNC_8 (struct mpt_page_memory*) ;
 int FUNC_9 (struct mpt_softc*,struct mpt_raid_action*,struct mpt_page_memory*) ;
 int FUNC_10 (struct mpt_softc*,struct mpt_cfg_page_req*) ;
 int FUNC_11 (struct mpt_softc*,struct mpt_cfg_page_req*,struct mpt_page_memory*) ;
 int FUNC_12 (struct mpt_softc*,struct mpt_ext_cfg_page_req*) ;
 int FUNC_13 (struct mpt_softc*,struct mpt_ext_cfg_page_req*,struct mpt_page_memory*) ;
 int FUNC_14 (struct mpt_softc*,struct mpt_cfg_page_req*,struct mpt_page_memory*) ;

__attribute__((used)) static int
FUNC_15(struct cdev *VAR_1, u_long VAR_2, caddr_t VAR_3, int VAR_4, struct thread *VAR_5)
{
 struct mpt_softc *VAR_6;
 struct mpt_cfg_page_req *VAR_7;
 struct mpt_ext_cfg_page_req *VAR_8;
 struct mpt_raid_action *VAR_9;
 struct mpt_page_memory VAR_10;

 struct mpt_cfg_page_req32 *VAR_11;
 struct mpt_cfg_page_req VAR_12;
 struct mpt_ext_cfg_page_req32 *VAR_13;
 struct mpt_ext_cfg_page_req VAR_14;
 struct mpt_raid_action32 *VAR_15;
 struct mpt_raid_action VAR_16;

 int VAR_17;

 VAR_6 = VAR_1->si_drv1;
 VAR_7 = (void *)VAR_3;
 VAR_8 = (void *)VAR_3;
 VAR_9 = (void *)VAR_3;
 VAR_10.vaddr = ((void*)0);



 VAR_11 = (void *)VAR_3;
 VAR_13 = (void *)VAR_3;
 VAR_15 = (void *)VAR_3;
 switch (VAR_2) {
 case 136:
 case 134:
 case 128:
  VAR_7 = &VAR_12;
  VAR_7->header = VAR_11->header;
  VAR_7->page_address = VAR_11->page_address;
  VAR_7->buf = FUNC_2(VAR_11->buf);
  VAR_7->len = VAR_11->len;
  VAR_7->ioc_status = VAR_11->ioc_status;
  break;
 case 132:
 case 130:
  VAR_8 = &VAR_14;
  VAR_8->header = VAR_13->header;
  VAR_8->page_address = VAR_13->page_address;
  VAR_8->buf = FUNC_2(VAR_13->buf);
  VAR_8->len = VAR_13->len;
  VAR_8->ioc_status = VAR_13->ioc_status;
  break;
 case 138:
  VAR_9 = &VAR_16;
  VAR_9->action = VAR_15->action;
  VAR_9->volume_bus = VAR_15->volume_bus;
  VAR_9->volume_id = VAR_15->volume_id;
  VAR_9->phys_disk_num = VAR_15->phys_disk_num;
  VAR_9->action_data_word = VAR_15->action_data_word;
  VAR_9->buf = FUNC_2(VAR_15->buf);
  VAR_9->len = VAR_15->len;
  VAR_9->volume_status = VAR_15->volume_status;
  FUNC_4(VAR_15->action_data, VAR_9->action_data,
      sizeof(VAR_9->action_data));
  VAR_9->action_status = VAR_15->action_status;
  VAR_9->ioc_status = VAR_15->ioc_status;
  VAR_9->write = VAR_15->write;
  break;
 }


 switch (VAR_2) {

 case 136:

 case 137:
  FUNC_0(VAR_6);
  VAR_17 = FUNC_10(VAR_6, VAR_7);
  FUNC_1(VAR_6);
  break;

 case 134:

 case 135:
  VAR_17 = FUNC_7(VAR_6, &VAR_10, VAR_7->len);
  if (VAR_17)
   break;
  VAR_17 = FUNC_5(VAR_7->buf, VAR_10.vaddr,
      sizeof(CONFIG_PAGE_HEADER));
  if (VAR_17)
   break;
  FUNC_0(VAR_6);
  VAR_17 = FUNC_11(VAR_6, VAR_7, &VAR_10);
  FUNC_1(VAR_6);
  if (VAR_17)
   break;
  VAR_17 = FUNC_6(VAR_10.vaddr, VAR_7->buf, VAR_7->len);
  break;

 case 132:

 case 133:
  FUNC_0(VAR_6);
  VAR_17 = FUNC_12(VAR_6, VAR_8);
  FUNC_1(VAR_6);
  break;

 case 130:

 case 131:
  VAR_17 = FUNC_7(VAR_6, &VAR_10, VAR_8->len);
  if (VAR_17)
   break;
  VAR_17 = FUNC_5(VAR_8->buf, VAR_10.vaddr,
      sizeof(CONFIG_EXTENDED_PAGE_HEADER));
  if (VAR_17)
   break;
  FUNC_0(VAR_6);
  VAR_17 = FUNC_13(VAR_6, VAR_8, &VAR_10);
  FUNC_1(VAR_6);
  if (VAR_17)
   break;
  VAR_17 = FUNC_6(VAR_10.vaddr, VAR_8->buf,
      VAR_8->len);
  break;

 case 128:

 case 129:
  VAR_17 = FUNC_7(VAR_6, &VAR_10, VAR_7->len);
  if (VAR_17)
   break;
  VAR_17 = FUNC_5(VAR_7->buf, VAR_10.vaddr, VAR_7->len);
  if (VAR_17)
   break;
  FUNC_0(VAR_6);
  VAR_17 = FUNC_14(VAR_6, VAR_7, &VAR_10);
  FUNC_1(VAR_6);
  break;

 case 138:

 case 139:
  if (VAR_9->buf != ((void*)0)) {
   VAR_17 = FUNC_7(VAR_6, &VAR_10, VAR_9->len);
   if (VAR_17)
    break;
   VAR_17 = FUNC_5(VAR_9->buf, VAR_10.vaddr,
       VAR_9->len);
   if (VAR_17)
    break;
  }
  FUNC_0(VAR_6);
  VAR_17 = FUNC_9(VAR_6, VAR_9, &VAR_10);
  FUNC_1(VAR_6);
  if (VAR_17)
   break;
  if (VAR_9->buf != ((void*)0))
   VAR_17 = FUNC_6(VAR_10.vaddr, VAR_9->buf,
       VAR_9->len);
  break;
 default:
  VAR_17 = VAR_0;
  break;
 }

 FUNC_8(&VAR_10);

 if (VAR_17)
  return (VAR_17);



 switch (VAR_2) {
 case 136:
 case 134:
 case 128:
  VAR_11->header = VAR_7->header;
  VAR_11->page_address = VAR_7->page_address;
  VAR_11->buf = FUNC_3(VAR_7->buf);
  VAR_11->len = VAR_7->len;
  VAR_11->ioc_status = VAR_7->ioc_status;
  break;
 case 132:
 case 130:
  VAR_13->header = VAR_8->header;
  VAR_13->page_address = VAR_8->page_address;
  VAR_13->buf = FUNC_3(VAR_8->buf);
  VAR_13->len = VAR_8->len;
  VAR_13->ioc_status = VAR_8->ioc_status;
  break;
 case 138:
  VAR_15->action = VAR_9->action;
  VAR_15->volume_bus = VAR_9->volume_bus;
  VAR_15->volume_id = VAR_9->volume_id;
  VAR_15->phys_disk_num = VAR_9->phys_disk_num;
  VAR_15->action_data_word = VAR_9->action_data_word;
  VAR_15->buf = FUNC_3(VAR_9->buf);
  VAR_15->len = VAR_9->len;
  VAR_15->volume_status = VAR_9->volume_status;
  FUNC_4(VAR_9->action_data, VAR_15->action_data,
      sizeof(VAR_9->action_data));
  VAR_15->action_status = VAR_9->action_status;
  VAR_15->ioc_status = VAR_9->ioc_status;
  VAR_15->write = VAR_9->write;
  break;
 }


 return (0);
}

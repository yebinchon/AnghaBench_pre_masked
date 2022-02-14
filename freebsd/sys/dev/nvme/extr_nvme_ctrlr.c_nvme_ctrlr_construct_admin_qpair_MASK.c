
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct nvme_qpair {size_t domain; scalar_t__ cpu; scalar_t__ id; } ;
struct nvme_controller {size_t domain; struct nvme_qpair adminq; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*,scalar_t__*) ;
 int * VAR_4 ;
 int FUNC_2 (struct nvme_controller*,char*,scalar_t__) ;
 int FUNC_3 (struct nvme_qpair*,scalar_t__,int ,struct nvme_controller*) ;

__attribute__((used)) static int
FUNC_4(struct nvme_controller *VAR_5)
{
 struct nvme_qpair *VAR_6;
 uint32_t VAR_7;
 int VAR_8;

 VAR_6 = &VAR_5->adminq;
 VAR_6->id = 0;
 VAR_6->cpu = FUNC_0(&VAR_4[VAR_5->domain]) - 1;
 VAR_6->domain = VAR_5->domain;

 VAR_7 = VAR_0;
 FUNC_1("hw.nvme.admin_entries", &VAR_7);




 if (VAR_7 < VAR_3 ||
     VAR_7 > VAR_2) {
  FUNC_2(VAR_5, "invalid hw.nvme.admin_entries=%d "
      "specified\n", VAR_7);
  VAR_7 = VAR_0;
 }





 VAR_8 = FUNC_3(VAR_6, VAR_7, VAR_1,
      VAR_5);
 return (VAR_8);
}

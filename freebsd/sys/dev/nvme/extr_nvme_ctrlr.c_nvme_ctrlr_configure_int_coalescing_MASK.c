
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_controller {scalar_t__ int_coal_threshold; scalar_t__ int_coal_time; } ;


 int FUNC_0 (char*,scalar_t__*) ;
 int FUNC_1 (struct nvme_controller*,scalar_t__,scalar_t__,int *,int *) ;

__attribute__((used)) static void
FUNC_2(struct nvme_controller *VAR_0)
{

 VAR_0->int_coal_time = 0;
 FUNC_0("hw.nvme.int_coal_time",
     &VAR_0->int_coal_time);

 VAR_0->int_coal_threshold = 0;
 FUNC_0("hw.nvme.int_coal_threshold",
     &VAR_0->int_coal_threshold);

 FUNC_1(VAR_0, VAR_0->int_coal_time,
     VAR_0->int_coal_threshold, ((void*)0), ((void*)0));
}

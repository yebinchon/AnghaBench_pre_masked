
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int nsfeat; int npwg; } ;
struct nvme_namespace {int boundary; TYPE_1__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nvme_namespace*) ;

uint32_t
FUNC_1(struct nvme_namespace *VAR_2)
{

 if (((VAR_2->data.nsfeat >> VAR_1) &
     VAR_0) != 0 && VAR_2->data.npwg != 0) {
  return ((VAR_2->data.npwg + 1) * FUNC_0(VAR_2));
 }
 return (VAR_2->boundary);
}

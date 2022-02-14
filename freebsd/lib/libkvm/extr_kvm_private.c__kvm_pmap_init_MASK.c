
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef void* uint32_t ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ off_t ;
struct TYPE_5__ {int program; int * page_map; int pmfd; scalar_t__ page_map_off; void* page_map_size; } ;
typedef TYPE_1__ kvm_t ;
typedef int intmax_t ;


 int FUNC_0 (TYPE_1__*,int ,char*,void*,...) ;
 int * FUNC_1 (TYPE_1__*,void*) ;
 scalar_t__ FUNC_2 (int ,int *,void*,scalar_t__) ;

int
FUNC_3(kvm_t *VAR_0, uint32_t VAR_1, off_t VAR_2)
{
 ssize_t VAR_3 = VAR_1;

 VAR_0->page_map_size = VAR_1;
 VAR_0->page_map_off = VAR_2;
 VAR_0->page_map = FUNC_1(VAR_0, VAR_1);
 if (VAR_0->page_map == ((void*)0)) {
  FUNC_0(VAR_0, VAR_0->program, "cannot allocate %u bytes "
      "for page map", VAR_1);
  return (-1);
 }
 if (FUNC_2(VAR_0->pmfd, VAR_0->page_map, VAR_1, VAR_2) != VAR_3) {
  FUNC_0(VAR_0, VAR_0->program, "cannot read %d bytes from "
      "offset %jd for page map", VAR_1, (intmax_t)VAR_2);
  return (-1);
 }
 return (0);
}

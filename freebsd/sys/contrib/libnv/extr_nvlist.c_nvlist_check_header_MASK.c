
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvlist_header {scalar_t__ nvlh_magic; int nvlh_flags; void* nvlh_descriptors; void* nvlh_size; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (void*) ;
 void* FUNC_2 (void*) ;

__attribute__((used)) static bool
FUNC_3(struct nvlist_header *VAR_4)
{

 if (VAR_4->nvlh_magic != VAR_1) {
  FUNC_0(VAR_0);
  return (0);
 }
 if ((VAR_4->nvlh_flags & ~VAR_2) != 0) {
  FUNC_0(VAR_0);
  return (0);
 }

 if ((VAR_4->nvlh_flags & VAR_3) == 0) {
  VAR_4->nvlh_size = FUNC_2(VAR_4->nvlh_size);
  VAR_4->nvlh_descriptors = FUNC_2(VAR_4->nvlh_descriptors);
 }






 return (1);
}

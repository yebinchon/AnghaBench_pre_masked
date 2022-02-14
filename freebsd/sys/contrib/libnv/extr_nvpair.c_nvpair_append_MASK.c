
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_3__ {size_t nvp_nitems; size_t nvp_datasize; scalar_t__ nvp_data; } ;
typedef TYPE_1__ nvpair_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (void*,void const*,size_t) ;
 void* FUNC_2 (void*,size_t) ;

__attribute__((used)) static int
FUNC_3(nvpair_t *VAR_1, const void *VAR_2, size_t VAR_3, size_t VAR_4)
{
 void *VAR_5, *VAR_6, *VAR_7;
 size_t VAR_8;

 VAR_8 = VAR_1->nvp_nitems * VAR_3;
 VAR_5 = (void *)(uintptr_t)VAR_1->nvp_data;
 VAR_6 = FUNC_2(VAR_5, VAR_8 + VAR_3);
 if (VAR_6 == ((void*)0)) {
  FUNC_0(VAR_0);
  return (-1);
 }
 VAR_7 = (unsigned char *)VAR_6 + VAR_8;
 FUNC_1(VAR_7, VAR_2, VAR_3);

 VAR_1->nvp_data = (uint64_t)(uintptr_t)VAR_6;
 VAR_1->nvp_datasize += VAR_4;
 VAR_1->nvp_nitems++;
 return (0);
}

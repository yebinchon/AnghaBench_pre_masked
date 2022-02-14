
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct work_request_hdr {int wrh_hilo; } ;



__attribute__((used)) static void
FUNC_0(struct work_request_hdr *VAR_0, uint32_t VAR_1, uint32_t VAR_2)
{
 uint64_t VAR_3;

 VAR_3 = VAR_1;
 VAR_3 |= (((uint64_t)VAR_2)<<32);




 VAR_0->wrh_hilo = VAR_3;
}

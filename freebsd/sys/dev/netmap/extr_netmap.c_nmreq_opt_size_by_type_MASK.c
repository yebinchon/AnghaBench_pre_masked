
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint64_t ;
typedef int uint32_t ;
struct nmreq_option {int dummy; } ;
struct nmreq_opt_sync_kloop_mode {int dummy; } ;
struct nmreq_opt_extmem {int dummy; } ;
struct nmreq_opt_csb {int dummy; } ;



 int VAR_0 ;




__attribute__((used)) static size_t
FUNC_0(uint32_t VAR_1, uint64_t VAR_2)
{
 size_t VAR_3 = sizeof(struct nmreq_option);




 switch (VAR_1) {





 case 129:
  if (VAR_2 >= VAR_3)
   VAR_3 = VAR_2;
  break;
 case 131:
  VAR_3 = sizeof(struct nmreq_opt_csb);
  break;
 case 128:
  VAR_3 = sizeof(struct nmreq_opt_sync_kloop_mode);
  break;
 }

 return VAR_3 - sizeof(struct nmreq_option);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int value ;
typedef int ulong_t ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef int u_longlong_t ;
struct TYPE_5__ {scalar_t__ pa_addr; int * pa_file; } ;
typedef TYPE_1__ dt_printarg_t ;
struct TYPE_6__ {unsigned long long cte_bits; } ;
typedef TYPE_2__ ctf_encoding_t ;
typedef scalar_t__ caddr_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int*,size_t) ;
 int FUNC_1 (int *,char*,int ) ;

__attribute__((used)) static void
FUNC_2(dt_printarg_t *VAR_1, ulong_t VAR_2, ctf_encoding_t *VAR_3)
{
 FILE *VAR_4 = VAR_1->pa_file;
 caddr_t VAR_5 = VAR_1->pa_addr + VAR_2 / VAR_0;
 uint64_t VAR_6 = (1ULL << VAR_3->cte_bits) - 1;
 uint64_t VAR_7 = 0;
 size_t VAR_8 = (VAR_3->cte_bits + (VAR_0 - 1)) / VAR_0;
 uint8_t *VAR_9 = (uint8_t *)&VAR_7;
 uint8_t VAR_10;







 VAR_9 += sizeof (VAR_7) - VAR_8;
 VAR_2 += VAR_3->cte_bits;

 FUNC_0(VAR_5, VAR_9, VAR_8);
 VAR_10 = VAR_2 % VAR_0;






 VAR_10 = VAR_0 - VAR_10;






 if (VAR_2 % VAR_0 != 0)
  VAR_7 >>= VAR_10;
 VAR_7 &= VAR_6;

 (void) FUNC_1(VAR_4, "%#llx", (u_longlong_t)VAR_7);
}

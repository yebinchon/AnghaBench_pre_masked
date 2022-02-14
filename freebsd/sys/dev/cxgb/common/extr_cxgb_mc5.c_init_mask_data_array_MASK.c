
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mc5 {unsigned int tcam_size; scalar_t__ mode; int * adapter; } ;
typedef int adapter_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int,int,int) ;
 scalar_t__ FUNC_1 (int *,scalar_t__,scalar_t__) ;
 unsigned int FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3(struct mc5 *VAR_2, u32 VAR_3,
    u32 VAR_4, u32 VAR_5,
           int VAR_6)
{
 unsigned int VAR_7;
 adapter_t *VAR_8 = VAR_2->adapter;





 unsigned int VAR_9 = VAR_2->tcam_size;
 unsigned int VAR_10 = FUNC_2(VAR_8, VAR_0);

 if (VAR_2->mode == VAR_1) {
  VAR_9 *= 2;
  VAR_10 *= 2;
 }


 FUNC_0(VAR_8, 0, 0, 0);
 for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++)
  if (FUNC_1(VAR_8, VAR_4 + (VAR_7 << VAR_6),
         VAR_5))
   return -1;


 for (VAR_7 = 0; VAR_7 < VAR_10; VAR_7++) {
  FUNC_0(VAR_8, 0x3fffffff, 0xfff80000, 0xff);
  if (FUNC_1(VAR_8, VAR_3 + (VAR_7 << VAR_6),
         VAR_5))
   return -1;
  VAR_7++;
  FUNC_0(VAR_8, 0xffffffff, 0xffffffff, 0xff);
  if (FUNC_1(VAR_8, VAR_3 + (VAR_7 << VAR_6),
         VAR_5))
   return -1;
 }

 FUNC_0(VAR_8,
        VAR_2->mode == VAR_1 ? 0xfffffff9 : 0xfffffffd,
        0xffffffff, 0xff);
 for (; VAR_7 < VAR_9; VAR_7++)
  if (FUNC_1(VAR_8, VAR_3 + (VAR_7 << VAR_6),
         VAR_5))
   return -1;

 return 0;
}

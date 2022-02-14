
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mc5 {scalar_t__ part_type; int * adapter; } ;
typedef int adapter_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int *,int *,int *) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (struct mc5 const*) ;
 int FUNC_3 (struct mc5 const*) ;
 int FUNC_4 (int *,int ,int ) ;

int FUNC_5(const struct mc5 *VAR_7, unsigned int VAR_8,
        unsigned int VAR_9, u32 *VAR_10)
{
 u32 VAR_11;
 int VAR_12 = 0;
 adapter_t *VAR_13 = VAR_7->adapter;

 if (VAR_7->part_type == VAR_5)
  VAR_11 = VAR_6;
 else if (VAR_7->part_type == VAR_4)
  VAR_11 = VAR_3;
 else
  return -VAR_1;

 FUNC_3(VAR_7);

 while (VAR_9--) {
  FUNC_4(VAR_13, VAR_0, VAR_8++);
  if (FUNC_1(VAR_13, VAR_11)) {
   VAR_12 = -VAR_2;
   break;
  }
  FUNC_0(VAR_13, VAR_10 + 2, VAR_10 + 1, VAR_10);
  VAR_10 += 3;
 }

 FUNC_2(VAR_7);
 return VAR_12;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct octeon_device {scalar_t__ num_oqs; } ;


 int FUNC_0 (struct octeon_device*,int ) ;
 scalar_t__ FUNC_1 (struct octeon_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (struct octeon_device*,int ,int ,int ,int *) ;

int
FUNC_5(struct octeon_device *VAR_1)
{
 uint32_t VAR_2 = 0, VAR_3 = 0, VAR_4 = 0;

 if (FUNC_1(VAR_1)) {
  VAR_3 =
   FUNC_3(FUNC_0(VAR_1,
           VAR_0));
  VAR_2 =
   FUNC_2(FUNC_0(VAR_1,
          VAR_0));
 }

 VAR_1->num_oqs = 0;

 if (FUNC_4(VAR_1, VAR_4, VAR_3, VAR_2, ((void*)0))) {
  return (1);
 }

 VAR_1->num_oqs++;

 return (0);
}

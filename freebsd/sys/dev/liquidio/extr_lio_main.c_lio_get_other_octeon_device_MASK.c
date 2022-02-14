
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct octeon_device {scalar_t__ device; scalar_t__ octeon_id; } ;


 struct octeon_device* FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static struct octeon_device *
FUNC_3(struct octeon_device *VAR_0)
{
 struct octeon_device *VAR_1;

 VAR_1 = FUNC_0(VAR_0->octeon_id + 1);

 if ((VAR_1 != ((void*)0)) && VAR_1->device) {
  int VAR_2, VAR_3;

  VAR_2 = FUNC_1(VAR_0->device);
  VAR_3 = FUNC_1(VAR_1->device);

  if (VAR_2 == VAR_3) {
   int VAR_4, VAR_5;

   VAR_4 = FUNC_2(VAR_0->device);
   VAR_5 = FUNC_2(VAR_1->device);

   if (VAR_4 == VAR_5)
    return (VAR_1);
  }
 }
 return (((void*)0));
}

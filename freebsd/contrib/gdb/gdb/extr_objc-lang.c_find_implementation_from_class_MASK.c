
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objc_method {scalar_t__ name; scalar_t__ imp; } ;
struct objc_class {scalar_t__ super_class; scalar_t__ methods; } ;
typedef scalar_t__ CORE_ADDR ;


 int FUNC_0 (int ,char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (scalar_t__,struct objc_class*) ;
 int FUNC_3 (scalar_t__,unsigned long,struct objc_method*) ;
 unsigned long FUNC_4 (scalar_t__) ;
 int VAR_0 ;

__attribute__((used)) static CORE_ADDR
FUNC_5 (CORE_ADDR VAR_1, CORE_ADDR VAR_2)
{
  CORE_ADDR VAR_3 = VAR_1;

  while (VAR_3 != 0)
    {

      struct objc_class VAR_4;
      unsigned VAR_5 = 0;

      FUNC_2 (VAR_3, &VAR_4);

      for (;;)
 {
   CORE_ADDR VAR_6;
   unsigned long VAR_7;
   unsigned long VAR_8;

   VAR_6 = FUNC_1 (VAR_4.methods +
      (4 * VAR_5), 4);
   if (VAR_6 == 0)
     break;

   VAR_7 = FUNC_4 (VAR_6);

   for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
     {
       struct objc_method VAR_9;
       FUNC_3 (VAR_6, VAR_8, &VAR_9);







       if (VAR_9.name == VAR_2)


  return VAR_9.imp;
     }
   VAR_5++;
 }
      VAR_3 = VAR_4.super_class;
    }

  return 0;
}

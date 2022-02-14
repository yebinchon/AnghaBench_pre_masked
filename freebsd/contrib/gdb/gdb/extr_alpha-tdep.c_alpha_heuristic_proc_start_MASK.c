
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch_tdep {scalar_t__ vm_min_address; } ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 struct gdbarch_tdep* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static CORE_ADDR
FUNC_6 (CORE_ADDR VAR_5)
{
  struct gdbarch_tdep *VAR_6 = FUNC_1 (VAR_2);
  CORE_ADDR VAR_7 = VAR_5;
  CORE_ADDR VAR_8 = VAR_5 - VAR_3;
  CORE_ADDR VAR_9 = VAR_5;
  CORE_ADDR VAR_10;

  if (VAR_5 == 0)
    return 0;




  VAR_10 = FUNC_2 (VAR_5);
  if (VAR_10)
    return VAR_10;

  if (VAR_3 == VAR_1
      || VAR_8 < VAR_6->vm_min_address)
    VAR_8 = VAR_6->vm_min_address;




  for (VAR_5 -= 4; VAR_5 >= VAR_8; VAR_5 -= 4)
    {
      unsigned int VAR_11 = FUNC_0 (VAR_5);
      switch (VAR_11)
 {
 case 0:
 case 0x6bfa8001:
   return VAR_7;

 case 0x2ffe0000:
 case 0x47ff041f:
   break;

 default:
   VAR_7 = VAR_5;
   break;
 }
    }




  if (VAR_4 == VAR_0)
    {
      static int VAR_12 = 0;

      if (VAR_8 == VAR_6->vm_min_address)
 FUNC_5 ("Hit beginning of text section without finding");
      else
 FUNC_5 ("Hit heuristic-fence-post without finding");
      FUNC_5 ("enclosing function for address 0x%s", FUNC_3 (VAR_9));

      if (!VAR_12)
 {
   FUNC_4 ("This warning occurs if you are debugging a function without any symbols\n(for example, in a stripped executable).  In that case, you may wish to\nincrease the size of the search with the `set heuristic-fence-post' command.\n\nOtherwise, you told GDB there was a function where there isn't one, or\n(more likely) you have encountered a bug in GDB.\n");






   VAR_12 = 1;
 }
    }

  return 0;
}

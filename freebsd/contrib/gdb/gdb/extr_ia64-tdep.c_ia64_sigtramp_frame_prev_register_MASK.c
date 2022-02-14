
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ia64_frame_cache {scalar_t__* saved_regs; } ;
struct frame_info {int dummy; } ;
typedef enum lval_type { ____Placeholder_lval_type } lval_type ;
typedef scalar_t__ CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (void*,int) ;
 int FUNC_2 (int ,char*,char*,int ) ;
 int FUNC_3 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (scalar_t__,void*,int ) ;
 char** VAR_11 ;
 struct ia64_frame_cache* FUNC_5 (struct frame_info*,void**) ;
 int VAR_12 ;
 int FUNC_6 (void*,int ,int ) ;
 int VAR_13 ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (void*,int,scalar_t__) ;
 int VAR_14 ;

__attribute__((used)) static void
FUNC_10 (struct frame_info *VAR_15,
       void **VAR_16,
       int VAR_17, int *VAR_18,
       enum lval_type *VAR_19, CORE_ADDR *VAR_20,
       int *VAR_21, void *VAR_22)
{
  char VAR_23[VAR_5];
  char VAR_24[VAR_5];

  struct ia64_frame_cache *VAR_25 =
    FUNC_5 (VAR_15, VAR_16);

  FUNC_3 (VAR_17 >= 0);

  if (!VAR_14)
    FUNC_0 ("No registers.");

  *VAR_18 = 0;
  *VAR_20 = 0;
  *VAR_19 = VAR_13;
  *VAR_21 = -1;



  if (!VAR_22)
    VAR_22 = VAR_23;

  FUNC_6 (VAR_22, 0, FUNC_8 (VAR_8, VAR_17));

  if (VAR_17 == VAR_2)
    {
      CORE_ADDR VAR_26 = 0;
      CORE_ADDR VAR_27 = VAR_25->saved_regs[VAR_4];

      if (VAR_27 != 0)
 {
   *VAR_19 = VAR_12;
   *VAR_20 = VAR_27;
   FUNC_4 (VAR_27, VAR_24, FUNC_8 (VAR_8, VAR_2));
   VAR_26 = FUNC_1 (VAR_24, 8);
 }
      VAR_26 &= ~0xf;
      FUNC_9 (VAR_22, 8, VAR_26);
    }
 else if ((VAR_17 >= VAR_1 && VAR_17 <= VAR_0) ||
    (VAR_17 >= VAR_7 && VAR_17 <= VAR_6))
    {
      CORE_ADDR VAR_28 = 0;
      if (VAR_17 >= VAR_7)
 VAR_17 = VAR_1 + (VAR_17 - VAR_7);
      VAR_28 = VAR_25->saved_regs[VAR_17];
      if (VAR_28 != 0)
 {
   *VAR_19 = VAR_12;
   *VAR_20 = VAR_28;
   FUNC_4 (VAR_28, VAR_22, FUNC_8 (VAR_8, VAR_17));
 }
    }
  else
    {

      CORE_ADDR VAR_29 = VAR_25->saved_regs[VAR_17];
      if (VAR_29 != 0)
 {
   *VAR_19 = VAR_12;
   *VAR_20 = VAR_29;
   FUNC_4 (VAR_29, VAR_22, FUNC_8 (VAR_8, VAR_17));
 }
    }

  if (VAR_10 >= 1)
    FUNC_2 (VAR_9,
   "sigtramp prev register <%s> is 0x%s\n",
   (((unsigned) VAR_17 <= VAR_3)
    ? VAR_11[VAR_17] : "r??"),
   FUNC_7 (FUNC_1 (VAR_22, 8)));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct df_ref_info {unsigned int refs_size; scalar_t__ refs; } ;
struct df_ref {int dummy; } ;


 int FUNC_0 (scalar_t__,int ,unsigned int) ;
 scalar_t__ FUNC_1 (scalar_t__,unsigned int) ;

__attribute__((used)) static void
FUNC_2 (struct df_ref_info *VAR_0, unsigned int VAR_1)
{
  if (VAR_0->refs_size < VAR_1)
    {
      VAR_0->refs = FUNC_1 (VAR_0->refs,
     VAR_1 *sizeof (struct df_ref *));
      FUNC_0 (VAR_0->refs + VAR_0->refs_size, 0,
       (VAR_1 - VAR_0->refs_size) *sizeof (struct df_ref *));
      VAR_0->refs_size = VAR_1;
    }
}

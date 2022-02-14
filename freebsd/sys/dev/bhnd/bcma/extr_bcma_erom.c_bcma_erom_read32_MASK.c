
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bcma_erom {int offset; } ;


 int FUNC_0 (struct bcma_erom*,int *) ;

__attribute__((used)) static int
FUNC_1(struct bcma_erom *VAR_0, uint32_t *VAR_1)
{
 int VAR_2;

 if ((VAR_2 = FUNC_0(VAR_0, VAR_1)) == 0)
  VAR_0->offset += 4;

 return (VAR_2);
}

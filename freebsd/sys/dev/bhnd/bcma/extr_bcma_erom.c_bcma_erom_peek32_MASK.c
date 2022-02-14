
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bcma_erom {int offset; int eio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bcma_erom*,char*) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static int
FUNC_2(struct bcma_erom *VAR_2, uint32_t *VAR_3)
{
 if (VAR_2->offset >= (VAR_0 - sizeof(uint32_t))) {
  FUNC_0(VAR_2, "BCMA EROM table missing terminating EOF\n");
  return (VAR_1);
 }

 *VAR_3 = FUNC_1(VAR_2->eio, VAR_2->offset, 4);
 return (0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vm {int dummy; } ;


 int FUNC_0 (struct vm*,int,int,int *) ;

__attribute__((used)) static int
FUNC_1(struct vm *VAR_0, int VAR_1, unsigned int VAR_2, int *VAR_3,
    uint64_t *VAR_4)
{
 int VAR_5, VAR_6;

 VAR_5 = 0;
 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_3[VAR_6], &VAR_4[VAR_6]);
  if (VAR_5)
   break;
 }
 return (VAR_5);
}

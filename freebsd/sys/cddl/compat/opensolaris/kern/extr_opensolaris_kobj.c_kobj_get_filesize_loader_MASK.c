
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct _buf {int ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct _buf *VAR_2, uint64_t *VAR_3)
{
 void *VAR_4;

 VAR_4 = FUNC_0(VAR_2->ptr, VAR_1);
 if (VAR_4 == ((void*)0))
  return (VAR_0);
 *VAR_3 = (uint64_t)*(size_t *)VAR_4;
 return (0);
}

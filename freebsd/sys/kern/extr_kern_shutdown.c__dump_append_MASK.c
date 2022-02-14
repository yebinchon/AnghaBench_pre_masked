
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
struct dumperinfo {size_t dumpoff; int * kdcrypto; } ;


 int FUNC_0 (struct dumperinfo*,void*,int ,size_t,size_t) ;
 int FUNC_1 (struct dumperinfo*,void*,int ,size_t,size_t) ;

__attribute__((used)) static int
FUNC_2(struct dumperinfo *VAR_0, void *VAR_1, vm_offset_t VAR_2,
    size_t VAR_3)
{
 int VAR_4;







  VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_0->dumpoff, VAR_3);
 if (VAR_4 == 0)
  VAR_0->dumpoff += VAR_3;
 return (VAR_4);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
struct dumperinfo {int (* dumper ) (int ,void*,int ,int ,size_t) ;int priv; } ;
typedef int off_t ;


 int FUNC_0 (struct dumperinfo*,int ,size_t) ;
 int FUNC_1 (int ,void*,int ,int ,size_t) ;

int
FUNC_2(struct dumperinfo *VAR_0, void *VAR_1, vm_offset_t VAR_2,
    off_t VAR_3, size_t VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_3, VAR_4);
 if (VAR_5 != 0)
  return (VAR_5);
 return (VAR_0->dumper(VAR_0->priv, VAR_1, VAR_2, VAR_3, VAR_4));
}

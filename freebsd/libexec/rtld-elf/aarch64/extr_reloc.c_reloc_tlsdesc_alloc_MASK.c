
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_data {int tls_index; int tls_offs; int dtv_gen; } ;
typedef int Elf_Addr ;


 int VAR_0 ;
 struct tls_data* FUNC_0 (int) ;

__attribute__((used)) static Elf_Addr
FUNC_1(int VAR_1, Elf_Addr VAR_2)
{
 struct tls_data *VAR_3;

 VAR_3 = FUNC_0(sizeof(struct tls_data));
 VAR_3->dtv_gen = VAR_0;
 VAR_3->tls_index = VAR_1;
 VAR_3->tls_offs = VAR_2;

 return ((Elf_Addr)VAR_3);
}

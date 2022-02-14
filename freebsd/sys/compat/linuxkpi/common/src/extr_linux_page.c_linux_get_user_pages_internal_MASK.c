
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_prot_t ;
typedef int vm_map_t ;
struct page {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,unsigned long,size_t,int,struct page**,int) ;

__attribute__((used)) static int
FUNC_1(vm_map_t VAR_4, unsigned long VAR_5, int VAR_6,
    int VAR_7, struct page **VAR_8)
{
 vm_prot_t VAR_9;
 size_t VAR_10;
 int VAR_11;

 VAR_9 = VAR_7 ? (VAR_2 | VAR_3) : VAR_2;
 VAR_10 = ((size_t)VAR_6) << VAR_1;
 VAR_11 = FUNC_0(VAR_4, VAR_5, VAR_10, VAR_9, VAR_8, VAR_6);
 return (VAR_11 == -1 ? -VAR_0 : VAR_6);
}

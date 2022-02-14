
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct memelfnote {scalar_t__ datasz; int name; } ;
struct elf_note {int dummy; } ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct memelfnote *VAR_0)
{
 int VAR_1;

 VAR_1 = sizeof(struct elf_note);
 VAR_1 += FUNC_0((FUNC_1(VAR_0->name) + 1), 4);
 VAR_1 += FUNC_0(VAR_0->datasz, 4);

 return VAR_1;
}

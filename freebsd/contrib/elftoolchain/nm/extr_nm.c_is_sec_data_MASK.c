
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sh_flags; scalar_t__ sh_type; } ;
typedef TYPE_1__ GElf_Shdr ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static bool
FUNC_1(GElf_Shdr *VAR_2)
{

 FUNC_0(VAR_2 != ((void*)0) && "shdr is NULL");

 return (((VAR_2->sh_flags & VAR_0) != 0) && VAR_2->sh_type != VAR_1);
}

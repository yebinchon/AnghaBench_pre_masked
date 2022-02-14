
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int sh_offset; } ;
typedef TYPE_1__ GElf_Shdr ;
typedef int GElf_Ehdr ;
typedef int Elf ;


 int VAR_0 ;
 int * FUNC_0 (int,int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,TYPE_1__*,char const*) ;
 int * FUNC_3 (int *,int *) ;

__attribute__((used)) static u64 FUNC_4(int VAR_1, const char *VAR_2)
{
 Elf *VAR_3;
 GElf_Ehdr VAR_4;
 GElf_Shdr VAR_5;
 u64 VAR_6 = 0;

 VAR_3 = FUNC_0(VAR_1, VAR_0, ((void*)0));
 if (VAR_3 == ((void*)0))
  return 0;

 do {
  if (FUNC_3(VAR_3, &VAR_4) == ((void*)0))
   break;

  if (!FUNC_2(VAR_3, &VAR_4, &VAR_5, VAR_2))
   break;

  VAR_6 = VAR_5.sh_offset;
 } while (0);

 FUNC_1(VAR_3);
 return VAR_6;
}

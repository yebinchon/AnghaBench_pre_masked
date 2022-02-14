
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint64_t ;
struct _Elf_Extent_List {int dummy; } ;
struct _Elf_Extent {int ex_type; void* ex_desc; void* ex_size; void* ex_start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (struct _Elf_Extent*,struct _Elf_Extent*,int ) ;
 int FUNC_2 (struct _Elf_Extent_List*,struct _Elf_Extent*,int ) ;
 int FUNC_3 (struct _Elf_Extent_List*,void*,void*,struct _Elf_Extent**) ;
 int FUNC_4 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 struct _Elf_Extent* FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6(struct _Elf_Extent_List *VAR_6, int VAR_7,
    uint64_t VAR_8, uint64_t VAR_9, void *VAR_10)
{
 struct _Elf_Extent *VAR_11, *VAR_12;

 FUNC_4(VAR_7 >= VAR_0 && VAR_7 <= VAR_1);

 VAR_12 = ((void*)0);





 if (!FUNC_3(VAR_6, VAR_8, VAR_9, &VAR_12)) {
  FUNC_0(VAR_2, 0);
  return (0);
 }


 if ((VAR_11 = FUNC_5(sizeof(struct _Elf_Extent))) == ((void*)0)) {
  FUNC_0(VAR_3, VAR_4);
  return (0);
 }
 VAR_11->ex_start = VAR_8;
 VAR_11->ex_size = VAR_9;
 VAR_11->ex_desc = VAR_10;
 VAR_11->ex_type = VAR_7;


 if (VAR_12)
  FUNC_1(VAR_12, VAR_11, VAR_5);
 else
  FUNC_2(VAR_6, VAR_11, VAR_5);
 return (1);
}

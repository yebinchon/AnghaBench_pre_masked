
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef size_t uint32_t ;
struct section {size_t* buf; int sz; int nocopy; int is; } ;
struct elfcopy {scalar_t__* secndx; int ein; } ;
struct TYPE_6__ {size_t* d_buf; } ;
struct TYPE_5__ {int sh_size; int sh_entsize; } ;
typedef TYPE_1__ GElf_Shdr ;
typedef TYPE_2__ Elf_Data ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,size_t*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*,int ) ;
 int * FUNC_5 (int ,TYPE_1__*) ;
 size_t* FUNC_6 (int) ;

__attribute__((used)) static void
FUNC_7(struct elfcopy *VAR_3, struct section *VAR_4)
{
 GElf_Shdr VAR_5;
 Elf_Data *VAR_6;
 uint32_t *VAR_7, *VAR_8;
 uint64_t VAR_9;
 size_t VAR_10;
 int VAR_11, VAR_12;

 if (!FUNC_2(VAR_3->ein, &VAR_10))
  FUNC_4(VAR_0, "elf_getshnum failed: %s",
      FUNC_0(-1));

 if (FUNC_5(VAR_4->is, &VAR_5) == ((void*)0))
  FUNC_4(VAR_0, "gelf_getehdr() failed: %s",
      FUNC_0(-1));

 if ((VAR_6 = FUNC_1(VAR_4->is, ((void*)0))) == ((void*)0))
  FUNC_4(VAR_0, "elf_getdata() failed: %s",
      FUNC_0(-1));

 if (VAR_5.sh_size == 0)
  return;

 if (VAR_5.sh_entsize == 0)
  VAR_5.sh_entsize = 4;

 VAR_7 = VAR_6->d_buf;





 if ((*VAR_7 & 0x1) == 0)
  return;

 if ((VAR_4->buf = FUNC_6(VAR_5.sh_size)) == ((void*)0))
  FUNC_3(VAR_0, "malloc failed");

 VAR_4->sz = VAR_5.sh_size;

 VAR_8 = VAR_4->buf;


 *VAR_8 = *VAR_7;


 VAR_9 = VAR_5.sh_size / VAR_5.sh_entsize;
 for(VAR_11 = 1, VAR_12 = 1; (uint64_t)VAR_11 < VAR_9; VAR_11++) {
  if (VAR_7[VAR_11] != VAR_2 && VAR_7[VAR_11] < VAR_10 &&
      VAR_3->secndx[VAR_7[VAR_11]] != 0)
   VAR_8[VAR_12++] = VAR_3->secndx[VAR_7[VAR_11]];
  else
   VAR_4->sz -= 4;
 }

 VAR_4->nocopy = 1;
}

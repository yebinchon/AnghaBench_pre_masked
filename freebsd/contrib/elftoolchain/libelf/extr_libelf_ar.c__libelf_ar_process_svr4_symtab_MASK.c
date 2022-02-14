
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef void* off_t ;
struct TYPE_9__ {size_t e_rawsymtabsz; size_t e_symtabsz; TYPE_3__* e_symtab; scalar_t__ e_rawsymtab; } ;
struct TYPE_10__ {TYPE_1__ e_ar; } ;
struct TYPE_12__ {size_t e_rawsize; TYPE_2__ e_u; } ;
struct TYPE_11__ {unsigned long as_hash; char* as_name; void* as_off; } ;
typedef TYPE_3__ Elf_Arsym ;
typedef TYPE_4__ Elf ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,size_t) ;
 size_t VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 unsigned long FUNC_3 (char*) ;
 int FUNC_4 (TYPE_3__*) ;
 TYPE_3__* FUNC_5 (int) ;

Elf_Arsym *
FUNC_6(Elf *VAR_3, size_t *VAR_4)
{
 uint32_t VAR_5;
 size_t VAR_6, VAR_7;
 Elf_Arsym *VAR_8, *VAR_9;
 unsigned char *VAR_10, *VAR_11, *VAR_12;

 FUNC_2(VAR_3 != ((void*)0));
 FUNC_2(VAR_4 != ((void*)0));
 FUNC_2(VAR_3->e_u.e_ar.e_symtab == ((void*)0));

 VAR_8 = ((void*)0);

 if (VAR_3->e_u.e_ar.e_rawsymtabsz < VAR_1)
  goto symtaberror;

 VAR_10 = (unsigned char *) VAR_3->e_u.e_ar.e_rawsymtab;
 VAR_12 = VAR_10 + VAR_3->e_u.e_ar.e_rawsymtabsz;

 FUNC_0(VAR_10, VAR_7);
 VAR_10 += VAR_1;

 if (VAR_7 == 0 || VAR_10 + VAR_7 * VAR_1 >= VAR_12)
  goto symtaberror;


 if ((VAR_8 = FUNC_5(sizeof(Elf_Arsym) * (VAR_7+1))) == ((void*)0)) {
  FUNC_1(VAR_2, 0);
  return (((void*)0));
 }

 VAR_11 = VAR_10 + (VAR_7 * VAR_1);

 for (VAR_6 = VAR_7, VAR_9 = VAR_8; VAR_6 > 0; VAR_6--) {
  if (VAR_11 >= VAR_12)
   goto symtaberror;

  FUNC_0(VAR_10, VAR_5);
  if (VAR_5 >= VAR_3->e_rawsize)
   goto symtaberror;

  VAR_9->as_off = (off_t) VAR_5;
  VAR_9->as_hash = FUNC_3((char *) VAR_11);
  VAR_9->as_name = (char *) VAR_11;

  VAR_10 += VAR_1;
  VAR_9++;

  for (; VAR_11 < VAR_12 && *VAR_11++ != '\0';)
   ;
 }


 VAR_9->as_name = ((void*)0);
 VAR_9->as_hash = ~0UL;
 VAR_9->as_off = (off_t) 0;

 *VAR_4 = VAR_3->e_u.e_ar.e_symtabsz = VAR_7 + 1;
 VAR_3->e_u.e_ar.e_symtab = VAR_8;

 return (VAR_8);

symtaberror:
 if (VAR_8)
  FUNC_4(VAR_8);
 FUNC_1(VAR_0, 0);
 return (((void*)0));
}

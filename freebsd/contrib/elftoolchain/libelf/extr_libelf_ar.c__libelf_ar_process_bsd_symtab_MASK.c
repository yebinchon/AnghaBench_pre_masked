
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef void* off_t ;
struct TYPE_9__ {int e_rawsymtabsz; size_t e_symtabsz; TYPE_3__* e_symtab; scalar_t__ e_rawsymtab; } ;
struct TYPE_10__ {TYPE_1__ e_ar; } ;
struct TYPE_12__ {size_t e_rawsize; TYPE_2__ e_u; } ;
struct TYPE_11__ {unsigned long as_hash; char* as_name; void* as_off; } ;
typedef TYPE_3__ Elf_Arsym ;
typedef TYPE_4__ Elf ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,long) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 unsigned long FUNC_3 (char*) ;
 int FUNC_4 (TYPE_3__*) ;
 TYPE_3__* FUNC_5 (int) ;

Elf_Arsym *
FUNC_6(Elf *VAR_2, size_t *VAR_3)
{
 Elf_Arsym *VAR_4, *VAR_5;
 unsigned int VAR_6, VAR_7;
 unsigned char *VAR_8, *VAR_9, *VAR_10, *VAR_11, *VAR_12;
 const size_t VAR_13 = 2 * sizeof(long);
 long VAR_14, VAR_15, VAR_16, VAR_17;

 FUNC_2(VAR_2 != ((void*)0));
 FUNC_2(VAR_3 != ((void*)0));
 FUNC_2(VAR_2->e_u.e_ar.e_symtab == ((void*)0));

 VAR_4 = ((void*)0);





 if (VAR_2->e_u.e_ar.e_rawsymtabsz < 2 * sizeof(long))
  goto symtaberror;

 VAR_9 = VAR_10 = (unsigned char *) VAR_2->e_u.e_ar.e_rawsymtab;
 VAR_8 = VAR_10 + VAR_2->e_u.e_ar.e_rawsymtabsz;





 FUNC_0(VAR_9, VAR_14);

 if (VAR_14 < 0 || VAR_10 + VAR_14 >= VAR_8 ||
     ((size_t) VAR_14 % VAR_13 != 0))
  goto symtaberror;




 VAR_11 = VAR_9 + VAR_14;
 FUNC_0(VAR_11, VAR_17);

 VAR_12 = VAR_11;
 if (VAR_17 < 0 || VAR_12 + VAR_17 > VAR_8)
  goto symtaberror;

 VAR_7 = (size_t) VAR_14 / VAR_13;




 if ((VAR_4 = FUNC_5(sizeof(Elf_Arsym) * (VAR_7 + 1))) == ((void*)0)) {
  FUNC_1(VAR_1, 0);
  return (((void*)0));
 }


 for (VAR_6 = 0, VAR_5 = VAR_4; VAR_6 < VAR_7; VAR_6++, VAR_5++) {
  FUNC_0(VAR_9, VAR_16);
  FUNC_0(VAR_9, VAR_15);

  if (VAR_16 < 0 || VAR_15 < 0 ||
      (size_t) VAR_15 >= VAR_2->e_rawsize)
   goto symtaberror;

  VAR_11 = VAR_12 + VAR_16;

  if (VAR_11 >= VAR_8)
   goto symtaberror;

  VAR_5->as_off = (off_t) VAR_15;
  VAR_5->as_hash = FUNC_3((char *) VAR_11);
  VAR_5->as_name = (char *) VAR_11;
 }


 VAR_5->as_name = ((void*)0);
 VAR_5->as_hash = ~0UL;
 VAR_5->as_off = (off_t) 0;


 VAR_2->e_u.e_ar.e_symtab = VAR_4;

 *VAR_3 = VAR_2->e_u.e_ar.e_symtabsz = VAR_7 + 1;

 return (VAR_4);

symtaberror:
 if (VAR_4)
  FUNC_4(VAR_4);
 FUNC_1(VAR_0, 0);
 return (((void*)0));
}

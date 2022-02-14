
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_15__ {int cu_pointer_size; int cu_length_size; int cu_version; } ;
struct TYPE_14__ {scalar_t__ (* read ) (scalar_t__,scalar_t__*,int) ;} ;
struct TYPE_13__ {scalar_t__ ld_hipc; scalar_t__ ld_lopc; } ;
struct TYPE_12__ {scalar_t__ ds_size; scalar_t__ ds_data; } ;
typedef scalar_t__ Dwarf_Unsigned ;
typedef int Dwarf_Signed ;
typedef TYPE_1__ Dwarf_Section ;
typedef TYPE_2__ Dwarf_Locdesc ;
typedef int Dwarf_Error ;
typedef TYPE_3__* Dwarf_Debug ;
typedef TYPE_4__* Dwarf_CU ;


 int FUNC_0 (TYPE_3__*,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*,scalar_t__,int,int,int,int ,int *) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__*,int) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__*,int) ;
 int FUNC_4 (scalar_t__,scalar_t__*,int) ;

__attribute__((used)) static int
FUNC_5(Dwarf_Debug VAR_2, Dwarf_CU VAR_3, Dwarf_Section *VAR_4,
    Dwarf_Unsigned *VAR_5, Dwarf_Locdesc **VAR_6, Dwarf_Signed *VAR_7,
    Dwarf_Unsigned *VAR_8, Dwarf_Error *VAR_9)
{
 uint64_t VAR_10, VAR_11;
 int VAR_12, VAR_13, VAR_14;

 if (VAR_8 != ((void*)0))
  *VAR_8 = 0;

 for (VAR_12 = 0; *VAR_5 < VAR_4->ds_size; VAR_12++) {
  VAR_10 = VAR_2->read(VAR_4->ds_data, VAR_5, VAR_3->cu_pointer_size);
  VAR_11 = VAR_2->read(VAR_4->ds_data, VAR_5, VAR_3->cu_pointer_size);
  if (VAR_6 != ((void*)0)) {
   VAR_6[VAR_12]->ld_lopc = VAR_10;
   VAR_6[VAR_12]->ld_hipc = VAR_11;
  }

  if (VAR_8 != ((void*)0))
   *VAR_8 += 2 * VAR_3->cu_pointer_size;


  if (VAR_10 == 0 && VAR_11 ==0) {
   VAR_12++;
   break;
  }


  if ((VAR_3->cu_pointer_size == 4 && VAR_10 == ~0U) ||
      (VAR_3->cu_pointer_size == 8 && VAR_10 == ~0ULL))
   continue;


  VAR_13 = VAR_2->read(VAR_4->ds_data, VAR_5, 2);
  if (*VAR_5 + VAR_13 > VAR_4->ds_size) {
   FUNC_0(VAR_2, VAR_9,
       VAR_0);
   return (VAR_0);
  }

  if (VAR_8 != ((void*)0))
   *VAR_8 += VAR_13;

  if (VAR_6 != ((void*)0)) {
   VAR_14 = FUNC_1(VAR_2, VAR_6[VAR_12],
       VAR_4->ds_data + *VAR_5, VAR_13, VAR_3->cu_pointer_size,
       VAR_3->cu_length_size == 4 ? 4 : 8, VAR_3->cu_version,
       VAR_9);
   if (VAR_14 != VAR_1)
    return (VAR_14);
  }

  *VAR_5 += VAR_13;
 }

 if (VAR_7 != ((void*)0))
  *VAR_7 = VAR_12;

 return (VAR_1);
}

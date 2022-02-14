
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_12__ {int cu_pointer_size; } ;
struct TYPE_11__ {scalar_t__ (* read ) (int ,scalar_t__*,int) ;} ;
struct TYPE_10__ {int dwr_type; scalar_t__ dwr_addr2; scalar_t__ dwr_addr1; } ;
struct TYPE_9__ {scalar_t__ ds_size; int ds_data; } ;
typedef scalar_t__ Dwarf_Unsigned ;
typedef TYPE_1__ Dwarf_Section ;
typedef TYPE_2__ Dwarf_Ranges ;
typedef TYPE_3__* Dwarf_Debug ;
typedef TYPE_4__* Dwarf_CU ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,scalar_t__*,int) ;
 scalar_t__ FUNC_1 (int ,scalar_t__*,int) ;

__attribute__((used)) static int
FUNC_2(Dwarf_Debug VAR_4, Dwarf_CU VAR_5, Dwarf_Section *VAR_6,
    uint64_t VAR_7, Dwarf_Ranges *VAR_8, Dwarf_Unsigned *VAR_9)
{
 Dwarf_Unsigned VAR_10, VAR_11;
 int VAR_12;

 VAR_12 = 0;
 while (VAR_7 < VAR_6->ds_size) {

  VAR_10 = VAR_4->read(VAR_6->ds_data, &VAR_7, VAR_5->cu_pointer_size);
  VAR_11 = VAR_4->read(VAR_6->ds_data, &VAR_7, VAR_5->cu_pointer_size);

  if (VAR_8 != ((void*)0)) {
   VAR_8[VAR_12].dwr_addr1 = VAR_10;
   VAR_8[VAR_12].dwr_addr2 = VAR_11;
   if (VAR_10 == 0 && VAR_11 == 0)
    VAR_8[VAR_12].dwr_type = VAR_2;
   else if ((VAR_10 == ~0U && VAR_5->cu_pointer_size == 4) ||
       (VAR_10 == ~0ULL && VAR_5->cu_pointer_size == 8))
    VAR_8[VAR_12].dwr_type = VAR_1;
   else
    VAR_8[VAR_12].dwr_type = VAR_3;
  }

  VAR_12++;

  if (VAR_10 == 0 && VAR_11 == 0)
   break;
 }

 if (VAR_9 != ((void*)0))
  *VAR_9 = VAR_12;

 return (VAR_0);
}

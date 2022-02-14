
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_16__ {int * ds_name; int ds_data; int ds_size; int ds_addr; } ;
struct TYPE_15__ {int dbg_seccnt; int dbg_types_sec; int dbg_info_sec; TYPE_6__* dbg_section; int dbg_offset_size; int dbg_pointer_size; int decode; int write; int read; TYPE_1__* dbg_iface; } ;
struct TYPE_14__ {scalar_t__ (* get_byte_order ) (void*) ;int (* get_section_count ) (void*) ;scalar_t__ (* get_section_info ) (void*,int,TYPE_2__*,int*) ;scalar_t__ (* load_section ) (void*,int,int *,int*) ;int (* get_length_size ) (void*) ;int (* get_pointer_size ) (void*) ;} ;
struct TYPE_13__ {int * name; int size; int addr; } ;
struct TYPE_12__ {void* object; TYPE_3__* methods; } ;
typedef int Dwarf_Unsigned ;
typedef int Dwarf_Section ;
typedef TYPE_2__ Dwarf_Obj_Access_Section ;
typedef TYPE_3__ Dwarf_Obj_Access_Methods ;
typedef int Dwarf_Half ;
typedef int Dwarf_Error ;
typedef TYPE_4__* Dwarf_Debug ;


 int FUNC_0 (TYPE_4__*,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_4__*,int *) ;
 int FUNC_2 (TYPE_4__*,char*) ;
 int FUNC_3 (TYPE_4__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int ) ;
 TYPE_6__* FUNC_5 (int,int) ;
 scalar_t__ FUNC_6 (void*) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (void*) ;
 scalar_t__ FUNC_10 (void*,int,TYPE_2__*,int*) ;
 scalar_t__ FUNC_11 (void*,int,int *,int*) ;

__attribute__((used)) static int
FUNC_12(Dwarf_Debug VAR_10, Dwarf_Error *VAR_11)
{
 const Dwarf_Obj_Access_Methods *VAR_12;
 Dwarf_Obj_Access_Section VAR_13;
 void *VAR_14;
 Dwarf_Unsigned VAR_15;
 Dwarf_Half VAR_16;
 int VAR_17;

 FUNC_4(VAR_10 != ((void*)0));
 FUNC_4(VAR_10->dbg_iface != ((void*)0));

 VAR_12 = VAR_10->dbg_iface->methods;
 VAR_14 = VAR_10->dbg_iface->object;

 FUNC_4(VAR_12 != ((void*)0));
 FUNC_4(VAR_14 != ((void*)0));

 if (VAR_12->get_byte_order(VAR_14) == VAR_3) {
  VAR_10->read = VAR_7;
  VAR_10->write = VAR_9;
  VAR_10->decode = VAR_5;
 } else {
  VAR_10->read = VAR_6;
  VAR_10->write = VAR_8;
  VAR_10->decode = VAR_4;
 }

 VAR_10->dbg_pointer_size = VAR_12->get_pointer_size(VAR_14);
 VAR_10->dbg_offset_size = VAR_12->get_length_size(VAR_14);

 VAR_15 = VAR_12->get_section_count(VAR_14);

 if (VAR_15 == 0) {
  FUNC_0(VAR_10, VAR_11, VAR_0);
  return (VAR_0);
 }

 VAR_10->dbg_seccnt = VAR_15;

 if ((VAR_10->dbg_section = FUNC_5(VAR_15 + 1, sizeof(Dwarf_Section))) ==
     ((void*)0)) {
  FUNC_0(VAR_10, VAR_11, VAR_1);
  return (VAR_1);
 }

 for (VAR_16 = 0; VAR_16 < VAR_15; VAR_16++) {
  if (VAR_12->get_section_info(VAR_14, VAR_16, &VAR_13, &VAR_17) != VAR_2) {
   FUNC_0(VAR_10, VAR_11, VAR_17);
   return (VAR_17);
  }

  VAR_10->dbg_section[VAR_16].ds_addr = VAR_13.addr;
  VAR_10->dbg_section[VAR_16].ds_size = VAR_13.size;
  VAR_10->dbg_section[VAR_16].ds_name = VAR_13.name;

  if (VAR_12->load_section(VAR_14, VAR_16, &VAR_10->dbg_section[VAR_16].ds_data, &VAR_17)
      != VAR_2) {
   FUNC_0(VAR_10, VAR_11, VAR_17);
   return (VAR_17);
  }
 }
 VAR_10->dbg_section[VAR_15].ds_name = ((void*)0);

 VAR_10->dbg_info_sec = FUNC_2(VAR_10, ".debug_info");


 VAR_10->dbg_types_sec = FUNC_1(VAR_10, ((void*)0));


 FUNC_3(VAR_10);

 return (VAR_2);
}

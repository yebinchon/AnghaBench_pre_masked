
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_17__ {int d_version; int d_type; scalar_t__ d_size; scalar_t__ d_align; scalar_t__ d_off; int * d_buf; } ;
struct _Libelf_Data {TYPE_5__ d_data; } ;
struct TYPE_18__ {scalar_t__ e_kind; int e_class; scalar_t__ e_rawsize; int e_version; int * e_rawfile; } ;
struct TYPE_14__ {scalar_t__ sh_type; scalar_t__ sh_offset; scalar_t__ sh_size; scalar_t__ sh_addralign; } ;
struct TYPE_13__ {scalar_t__ sh_type; scalar_t__ sh_addralign; scalar_t__ sh_size; scalar_t__ sh_offset; } ;
struct TYPE_15__ {TYPE_2__ s_shdr64; TYPE_1__ s_shdr32; } ;
struct TYPE_16__ {int s_rawdata; TYPE_3__ s_shdr; TYPE_6__* s_elf; } ;
struct TYPE_12__ {TYPE_5__ d_data; } ;
typedef TYPE_4__ Elf_Scn ;
typedef TYPE_5__ Elf_Data ;
typedef TYPE_6__ Elf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 struct _Libelf_Data* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct _Libelf_Data*,int ) ;
 TYPE_11__* FUNC_3 (struct _Libelf_Data*,int ) ;
 struct _Libelf_Data* FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int) ;
 int VAR_8 ;

Elf_Data *
FUNC_6(Elf_Scn *VAR_9, Elf_Data *VAR_10)
{
 Elf *VAR_11;
 int VAR_12;
 uint32_t VAR_13;
 struct _Libelf_Data *VAR_14;
 uint64_t VAR_15, VAR_16, VAR_17;

 if (VAR_9 == ((void*)0) || (VAR_11 = VAR_9->s_elf) == ((void*)0) || VAR_11->e_rawfile == ((void*)0)) {
  FUNC_0(VAR_0, 0);
  return (((void*)0));
 }

 FUNC_5(VAR_11->e_kind == VAR_3);

 VAR_14 = (struct _Libelf_Data *) VAR_10;

 if (VAR_14 == ((void*)0) && (VAR_14 = FUNC_1(&VAR_9->s_rawdata)) != ((void*)0))
  return (&VAR_14->d_data);

 if (VAR_14 != ((void*)0))
  return (&FUNC_3(VAR_14, VAR_8)->d_data);

 VAR_12 = VAR_11->e_class;

 FUNC_5(VAR_12 == VAR_1 || VAR_12 == VAR_2);

 if (VAR_12 == VAR_1) {
  VAR_13 = VAR_9->s_shdr.s_shdr32.sh_type;
  VAR_16 = (uint64_t) VAR_9->s_shdr.s_shdr32.sh_offset;
  VAR_17 = (uint64_t) VAR_9->s_shdr.s_shdr32.sh_size;
  VAR_15 = (uint64_t) VAR_9->s_shdr.s_shdr32.sh_addralign;
 } else {
  VAR_13 = VAR_9->s_shdr.s_shdr64.sh_type;
  VAR_16 = VAR_9->s_shdr.s_shdr64.sh_offset;
  VAR_17 = VAR_9->s_shdr.s_shdr64.sh_size;
  VAR_15 = VAR_9->s_shdr.s_shdr64.sh_addralign;
 }

 if (VAR_13 == VAR_7) {
  FUNC_0(VAR_5, 0);
  return (((void*)0));
 }

 if (VAR_13 != VAR_6 &&
     (VAR_16 > VAR_11->e_rawsize || VAR_17 > VAR_11->e_rawsize - VAR_16)) {
  FUNC_0(VAR_5, 0);
  return (((void*)0));
 }

 if ((VAR_14 = FUNC_4(VAR_9)) == ((void*)0))
  return (((void*)0));

 VAR_14->d_data.d_buf = (VAR_13 == VAR_6 || VAR_17 == 0) ? ((void*)0) :
     VAR_11->e_rawfile + VAR_16;
 VAR_14->d_data.d_off = 0;
 VAR_14->d_data.d_align = VAR_15;
 VAR_14->d_data.d_size = VAR_17;
 VAR_14->d_data.d_type = VAR_4;
 VAR_14->d_data.d_version = VAR_11->e_version;

 FUNC_2(&VAR_9->s_rawdata, VAR_14, VAR_8);

 return (&VAR_14->d_data);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef size_t uint64_t ;
struct _Elf_Extent {scalar_t__ ex_type; size_t ex_start; } ;
typedef int src ;
typedef int off_t ;
typedef int dst ;
struct TYPE_14__ {size_t e_nphdr; } ;
struct TYPE_15__ {TYPE_1__ e_elf; } ;
struct TYPE_19__ {int e_class; int e_byteorder; int e_version; TYPE_2__ e_u; } ;
struct TYPE_18__ {scalar_t__ e_phoff; } ;
struct TYPE_17__ {size_t e_phoff; } ;
struct TYPE_16__ {unsigned char* d_buf; size_t d_size; int d_type; int d_version; } ;
typedef TYPE_3__ Elf_Data ;
typedef TYPE_4__ Elf64_Ehdr ;
typedef TYPE_5__ Elf32_Ehdr ;
typedef TYPE_6__ Elf ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (TYPE_6__*,int,int ) ;
 int FUNC_1 (TYPE_6__*) ;
 size_t FUNC_2 (int ,int) ;
 size_t FUNC_3 (int ,int,int ,size_t) ;
 unsigned char* FUNC_4 (TYPE_6__*,int) ;
 size_t FUNC_5 (int ,int,int ) ;
 int * FUNC_6 (TYPE_3__*,TYPE_3__*,int ,int,int,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (TYPE_3__*,int ,int) ;

__attribute__((used)) static off_t
FUNC_9(Elf *VAR_4, unsigned char *VAR_5, struct _Elf_Extent *VAR_6)
{
 int VAR_7, VAR_8;
 void *VAR_9;
 Elf32_Ehdr *VAR_10;
 Elf64_Ehdr *VAR_11;
 Elf_Data VAR_12, VAR_13;
 size_t VAR_14, VAR_15;
 uint64_t VAR_16;

 FUNC_7(VAR_6->ex_type == VAR_1);

 VAR_7 = VAR_4->e_class;
 VAR_9 = FUNC_0(VAR_4, VAR_7, 0);
 VAR_15 = VAR_4->e_u.e_elf.e_nphdr;

 FUNC_7(VAR_15 > 0);

 if (VAR_7 == VAR_0) {
  VAR_10 = (Elf32_Ehdr *) VAR_9;
  VAR_16 = (uint64_t) VAR_10->e_phoff;
 } else {
  VAR_11 = (Elf64_Ehdr *) VAR_9;
  VAR_16 = VAR_11->e_phoff;
 }

 VAR_8 = FUNC_1(VAR_4);

 FUNC_7(VAR_16 > 0);
 FUNC_7(VAR_6->ex_start == VAR_16);
 FUNC_7(VAR_16 % FUNC_2(VAR_3, VAR_7) == 0);

 (void) FUNC_8(&VAR_12, 0, sizeof(VAR_12));
 (void) FUNC_8(&VAR_13, 0, sizeof(VAR_13));

 VAR_14 = FUNC_3(VAR_3, VAR_7, VAR_4->e_version, VAR_15);
 FUNC_7(VAR_14 > 0);

 VAR_13.d_buf = FUNC_4(VAR_4, VAR_7);
 VAR_13.d_version = VAR_12.d_version = VAR_4->e_version;
 VAR_13.d_type = VAR_3;
 VAR_13.d_size = VAR_15 * FUNC_5(VAR_3, VAR_7,
     VAR_4->e_version);

 VAR_12.d_size = VAR_14;
 VAR_12.d_buf = VAR_5 + VAR_6->ex_start;

 if (FUNC_6(&VAR_12, &VAR_13, VAR_4->e_byteorder, VAR_7, VAR_8, VAR_2) ==
     ((void*)0))
  return ((off_t) -1);

 return ((off_t) (VAR_16 + VAR_14));
}

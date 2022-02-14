
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct _Elf_Extent {scalar_t__ ex_type; scalar_t__ ex_start; } ;
typedef int src ;
typedef int off_t ;
typedef int dst ;
struct TYPE_10__ {int e_class; int e_byteorder; int e_version; } ;
struct TYPE_9__ {unsigned char* d_buf; size_t d_size; int d_version; int d_type; } ;
typedef TYPE_1__ Elf_Data ;
typedef TYPE_2__ Elf ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (TYPE_2__*,int,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 size_t FUNC_2 (int ,int,int ,size_t) ;
 size_t FUNC_3 (int ,int,int ) ;
 int * FUNC_4 (TYPE_1__*,TYPE_1__*,int ,int,int,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;

__attribute__((used)) static off_t
FUNC_7(Elf *VAR_3, unsigned char *VAR_4, struct _Elf_Extent *VAR_5)
{
 int VAR_6, VAR_7;
 void *VAR_8;
 size_t VAR_9, VAR_10;
 Elf_Data VAR_11, VAR_12;

 FUNC_5(VAR_5->ex_type == VAR_0);
 FUNC_5(VAR_5->ex_start == 0);

 VAR_6 = VAR_3->e_class;

 VAR_8 = FUNC_0(VAR_3, VAR_6, 0);
 FUNC_5(VAR_8 != ((void*)0));

 VAR_9 = FUNC_2(VAR_2, VAR_6, VAR_3->e_version, (size_t) 1);
 VAR_10 = FUNC_3(VAR_2, VAR_6, VAR_3->e_version);

 VAR_7 = FUNC_1(VAR_3);

 (void) FUNC_6(&VAR_11, 0, sizeof(VAR_11));
 (void) FUNC_6(&VAR_12, 0, sizeof(VAR_12));

 VAR_12.d_buf = VAR_8;
 VAR_12.d_size = VAR_10;
 VAR_12.d_type = VAR_2;
 VAR_12.d_version = VAR_11.d_version = VAR_3->e_version;

 VAR_11.d_buf = VAR_4;
 VAR_11.d_size = VAR_9;

 if (FUNC_4(&VAR_11, &VAR_12, VAR_3->e_byteorder, VAR_6, VAR_7, VAR_1) ==
     ((void*)0))
  return ((off_t) -1);

 return ((off_t) VAR_9);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct preloaded_file {struct file_metadata* f_metadata; int f_size; int f_addr; scalar_t__ f_args; int f_type; int f_name; struct preloaded_file* f_next; } ;
struct file_metadata {int md_type; struct file_metadata* md_next; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ,int) ;
 int FUNC_1 (scalar_t__,scalar_t__,int) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (scalar_t__,struct file_metadata*,int) ;
 int FUNC_4 (scalar_t__,int ,int) ;
 int FUNC_5 (scalar_t__,int ,int) ;
 int FUNC_6 (scalar_t__,int ,int) ;
 scalar_t__ FUNC_7 (int ) ;
 struct preloaded_file* FUNC_8 (int *,int *) ;
 int VAR_1 ;

__attribute__((used)) static vm_offset_t
FUNC_9(vm_offset_t VAR_2, int VAR_3)
{
    struct preloaded_file *VAR_4;
    struct file_metadata *VAR_5;
    uint64_t VAR_6;
    uint32_t VAR_7;
    int VAR_8;

    VAR_8 = VAR_2 != 0;

    for (VAR_4 = FUNC_8(((void*)0), ((void*)0)); VAR_4 != ((void*)0); VAR_4 = VAR_4->f_next) {

 FUNC_4(VAR_2, VAR_4->f_name, VAR_8);
 FUNC_6(VAR_2, VAR_4->f_type, VAR_8);
 if (VAR_4->f_args)
     FUNC_1(VAR_2, VAR_4->f_args, VAR_8);
 if (VAR_3) {
  VAR_6 = VAR_4->f_addr;
  FUNC_0(VAR_2, VAR_6, VAR_8);
  VAR_6 = VAR_4->f_size;
  FUNC_5(VAR_2, VAR_6, VAR_8);
 } else {
  VAR_7 = VAR_4->f_addr;



  FUNC_0(VAR_2, VAR_7, VAR_8);
  FUNC_5(VAR_2, VAR_4->f_size, VAR_8);
 }
 for (VAR_5 = VAR_4->f_metadata; VAR_5 != ((void*)0); VAR_5 = VAR_5->md_next) {
     if (!(VAR_5->md_type & VAR_0)) {
  FUNC_3(VAR_2, VAR_5, VAR_8);
     }
 }
    }
    FUNC_2(VAR_2, VAR_8);
    return(VAR_2);
}

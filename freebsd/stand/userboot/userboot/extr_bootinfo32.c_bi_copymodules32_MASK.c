
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
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
 struct preloaded_file* FUNC_7 (int *,int *) ;

__attribute__((used)) static vm_offset_t
FUNC_8(vm_offset_t VAR_1)
{
    struct preloaded_file *VAR_2;
    struct file_metadata *VAR_3;
    int VAR_4;

    VAR_4 = VAR_1 != 0;

    for (VAR_2 = FUNC_7(((void*)0), ((void*)0)); VAR_2 != ((void*)0); VAR_2 = VAR_2->f_next) {

 FUNC_4(VAR_1, VAR_2->f_name, VAR_4);
 FUNC_6(VAR_1, VAR_2->f_type, VAR_4);
 if (VAR_2->f_args)
     FUNC_1(VAR_1, VAR_2->f_args, VAR_4);
 FUNC_0(VAR_1, VAR_2->f_addr, VAR_4);
 FUNC_5(VAR_1, VAR_2->f_size, VAR_4);
 for (VAR_3 = VAR_2->f_metadata; VAR_3 != ((void*)0); VAR_3 = VAR_3->md_next)
     if (!(VAR_3->md_type & VAR_0))
  FUNC_3(VAR_1, VAR_3, VAR_4);
    }
    FUNC_2(VAR_1, VAR_4);
    return(VAR_1);
}

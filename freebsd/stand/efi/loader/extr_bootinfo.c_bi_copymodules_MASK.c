
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef int uint64_t ;
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
FUNC_9(vm_offset_t VAR_2)
{
 struct preloaded_file *VAR_3;
 struct file_metadata *VAR_4;
 int VAR_5;
 uint64_t VAR_6;

 VAR_5 = VAR_2 != 0;

 for (VAR_3 = FUNC_8(((void*)0), ((void*)0)); VAR_3 != ((void*)0); VAR_3 = VAR_3->f_next) {
  FUNC_4(VAR_2, VAR_3->f_name, VAR_5);
  FUNC_6(VAR_2, VAR_3->f_type, VAR_5);
  if (VAR_3->f_args)
   FUNC_1(VAR_2, VAR_3->f_args, VAR_5);
  VAR_6 = VAR_3->f_addr;



  FUNC_0(VAR_2, VAR_6, VAR_5);
  VAR_6 = VAR_3->f_size;
  FUNC_5(VAR_2, VAR_6, VAR_5);
  for (VAR_4 = VAR_3->f_metadata; VAR_4 != ((void*)0); VAR_4 = VAR_4->md_next)
   if (!(VAR_4->md_type & VAR_0))
    FUNC_3(VAR_2, VAR_4, VAR_5);
 }
 FUNC_2(VAR_2, VAR_5);
 return(VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct preloaded_file {char* f_name; scalar_t__ f_size; scalar_t__ f_addr; } ;
struct kernel_module {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct preloaded_file*,scalar_t__) ;
 int FUNC_2 (char*,int ,struct preloaded_file**) ;
 struct preloaded_file* FUNC_3 (int *,char*) ;
 struct preloaded_file* FUNC_4 (char*,char*,int ) ;
 int FUNC_5 (struct preloaded_file*) ;
 int FUNC_6 (char*,char*,...) ;
 scalar_t__ FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_9(char *VAR_3, uint64_t VAR_4,
    struct preloaded_file **VAR_5)
{
 struct preloaded_file *VAR_6, *VAR_7, *VAR_8;
 struct kernel_module *VAR_9;
 int VAR_10, VAR_11;


 VAR_6 = FUNC_3(((void*)0), "elf multiboot kernel");
 if (VAR_6 == ((void*)0))
  return (VAR_0);





 VAR_7 = FUNC_3(((void*)0), "elf kernel");
 if (VAR_7 == ((void*)0)) {





  VAR_8 = FUNC_4(VAR_3, "elf kernel", 0);
  if (VAR_8 == ((void*)0)) {
   FUNC_6(
   "Unable to load %s as a multiboot payload kernel\n",
   VAR_3);
   return (VAR_1);
  }


  FUNC_8("kernelname", VAR_3, 1);
  VAR_10 = FUNC_1(VAR_8, VAR_8->f_addr + VAR_8->f_size);
  if (VAR_10) {
   FUNC_6("Unable to load kernel %s metadata error: %d\n",
       VAR_8->f_name, VAR_10);
   return (VAR_1);
  }
  VAR_11 = FUNC_5(VAR_8);
  VAR_8->f_size = FUNC_7(VAR_8->f_size, VAR_2);
  VAR_8->f_size += FUNC_0(VAR_11);
  *VAR_5 = VAR_8;
 } else {

  VAR_10 = FUNC_2(VAR_3, VAR_4, VAR_5);
  if (VAR_10 != 0) {
   FUNC_6("Unable to load %s as an object file, error: %d",
       VAR_3, VAR_10);
   return (VAR_10);
  }
 }

 return (0);
}

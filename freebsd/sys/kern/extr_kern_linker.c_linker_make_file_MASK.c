
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* linker_file_t ;
typedef scalar_t__ linker_class_t ;
typedef int kobj_class_t ;
struct TYPE_4__ {int refs; int modules; int common; scalar_t__ loadcnt; int * deps; scalar_t__ ndeps; int id; void* pathname; void* filename; scalar_t__ flags; scalar_t__ userrefs; scalar_t__ ctors_size; scalar_t__ ctors_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_1__*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (int ,int ,int ) ;
 int VAR_6 ;
 char* FUNC_6 (char const*) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 void* FUNC_7 (char const*,int ) ;
 int FUNC_8 (int *,int ) ;

linker_file_t
FUNC_9(const char *VAR_9, linker_class_t VAR_10)
{
 linker_file_t VAR_11;
 const char *VAR_12;

 if (!VAR_4)
  FUNC_8(&VAR_5, VAR_3);
 VAR_12 = FUNC_6(VAR_9);

 FUNC_0(VAR_0, ("linker_make_file: new file, filename='%s' for pathname='%s'\n", VAR_12, VAR_9));
 VAR_11 = (linker_file_t)FUNC_5((kobj_class_t)VAR_10, VAR_1, VAR_2);
 if (VAR_11 == ((void*)0))
  return (((void*)0));
 VAR_11->ctors_addr = 0;
 VAR_11->ctors_size = 0;
 VAR_11->refs = 1;
 VAR_11->userrefs = 0;
 VAR_11->flags = 0;
 VAR_11->filename = FUNC_7(VAR_12, VAR_1);
 VAR_11->pathname = FUNC_7(VAR_9, VAR_1);
 FUNC_1(VAR_11->id);
 VAR_11->ndeps = 0;
 VAR_11->deps = ((void*)0);
 VAR_11->loadcnt = ++VAR_8;
 FUNC_2(&VAR_11->common);
 FUNC_3(&VAR_11->modules);
 FUNC_4(&VAR_7, VAR_11, VAR_6);
 return (VAR_11);
}

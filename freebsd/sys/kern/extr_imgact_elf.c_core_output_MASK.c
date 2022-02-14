
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct coredump_params {int * comp; } ;
typedef scalar_t__ off_t ;
struct TYPE_2__ {int p_comm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct coredump_params*,void*,void*,size_t) ;
 int FUNC_1 (struct coredump_params*,void*,int,scalar_t__,int ) ;
 TYPE_1__* VAR_4 ;
 int FUNC_2 (int ,char*,void*,size_t,scalar_t__,int ) ;
 void* VAR_5 ;

__attribute__((used)) static int
FUNC_3(void *VAR_6, size_t VAR_7, off_t VAR_8, struct coredump_params *VAR_9,
    void *VAR_10)
{
 int VAR_11;

 if (VAR_9->comp != ((void*)0))
  return (FUNC_0(VAR_9, VAR_6, VAR_10, VAR_7));






 VAR_11 = FUNC_1(VAR_9, VAR_6, VAR_7, VAR_8, VAR_3);
 if (VAR_11 == VAR_0) {
  FUNC_2(VAR_1, "Failed to fully fault in a core file segment "
      "at VA %p with size 0x%zx to be written at offset 0x%jx "
      "for process %s\n", VAR_6, VAR_7, VAR_8, VAR_4->p_comm);






  VAR_11 = FUNC_1(VAR_9, VAR_5, 1, VAR_8 + VAR_7 - 1,
      VAR_2);
 }
 return (VAR_11);
}

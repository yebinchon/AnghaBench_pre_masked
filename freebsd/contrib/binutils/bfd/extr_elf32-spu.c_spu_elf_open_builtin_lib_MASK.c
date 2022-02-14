
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _ovl_stream {int dummy; } ;
typedef int bfd_boolean ;
typedef int bfd ;


 int * FUNC_0 (char*,char*,int ,void*,int ,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;

bfd_boolean
FUNC_1 (bfd **VAR_2, const struct _ovl_stream *VAR_3)
{
  *VAR_2 = FUNC_0 ("builtin ovl_mgr",
         "elf32-spu",
         VAR_0,
         (void *) VAR_3,
         VAR_1,
         ((void*)0),
         ((void*)0));
  return *VAR_2 != ((void*)0);
}

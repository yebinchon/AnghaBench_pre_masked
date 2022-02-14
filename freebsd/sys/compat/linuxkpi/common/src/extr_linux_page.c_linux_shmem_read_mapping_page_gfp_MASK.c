
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct page* vm_page_t ;
typedef int vm_object_t ;
struct page {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 struct page* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct page**,int ,int,int) ;

struct page *
FUNC_5(vm_object_t VAR_6, int VAR_7, gfp_t VAR_8)
{
 vm_page_t VAR_9;
 int VAR_10;

 if ((VAR_8 & VAR_1) != 0)
  FUNC_3("GFP_NOWAIT is unimplemented");

 FUNC_1(VAR_6);
 VAR_10 = FUNC_4(&VAR_9, VAR_6, VAR_7, VAR_3 |
     VAR_2 | VAR_4);
 FUNC_2(VAR_6);
 if (VAR_10 != VAR_5)
  return (FUNC_0(-VAR_0));
 return (VAR_9);
}

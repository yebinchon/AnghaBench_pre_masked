
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct bge_revision {scalar_t__ br_chipid; int * br_name; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 struct bge_revision* VAR_0 ;
 struct bge_revision* VAR_1 ;

__attribute__((used)) static const struct bge_revision *
FUNC_1(uint32_t VAR_2)
{
 const struct bge_revision *VAR_3;

 for (VAR_3 = VAR_1; VAR_3->br_name != ((void*)0); VAR_3++) {
  if (VAR_3->br_chipid == VAR_2)
   return (VAR_3);
 }

 for (VAR_3 = VAR_0; VAR_3->br_name != ((void*)0); VAR_3++) {
  if (VAR_3->br_chipid == FUNC_0(VAR_2))
   return (VAR_3);
 }

 return (((void*)0));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct bge_vendor {scalar_t__ v_id; int * v_name; } ;


 struct bge_vendor* VAR_0 ;

__attribute__((used)) static const struct bge_vendor *
FUNC_0(uint16_t VAR_1)
{
 const struct bge_vendor *VAR_2;

 for (VAR_2 = VAR_0; VAR_2->v_name != ((void*)0); VAR_2++)
  if (VAR_2->v_id == VAR_1)
   return (VAR_2);

 return (((void*)0));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vr_type {scalar_t__ vr_vid; scalar_t__ vr_did; int * vr_name; } ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 struct vr_type* VAR_0 ;

__attribute__((used)) static const struct vr_type *
FUNC_2(device_t VAR_1)
{
 const struct vr_type *VAR_2 = VAR_0;

 for (VAR_2 = VAR_0; VAR_2->vr_name != ((void*)0); VAR_2++)
  if ((FUNC_1(VAR_1) == VAR_2->vr_vid) &&
      (FUNC_0(VAR_1) == VAR_2->vr_did))
   return (VAR_2);
 return (((void*)0));
}

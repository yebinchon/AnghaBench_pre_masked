
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct hfsc_class {scalar_t__ cl_cfmin; scalar_t__ level; scalar_t__ cl_vt; TYPE_1__* cl_parent; } ;
struct TYPE_2__ {scalar_t__ cl_cvtmin; } ;


 struct hfsc_class* FUNC_0 (struct hfsc_class*,scalar_t__) ;

__attribute__((used)) static struct hfsc_class *
FUNC_1(struct hfsc_class *VAR_0, u64 VAR_1)
{

 if (VAR_0->cl_cfmin > VAR_1)
  return ((void*)0);

 while (VAR_0->level > 0) {
  VAR_0 = FUNC_0(VAR_0, VAR_1);
  if (VAR_0 == ((void*)0))
   return ((void*)0);



  if (VAR_0->cl_parent->cl_cvtmin < VAR_0->cl_vt)
   VAR_0->cl_parent->cl_cvtmin = VAR_0->cl_vt;
 }
 return VAR_0;
}

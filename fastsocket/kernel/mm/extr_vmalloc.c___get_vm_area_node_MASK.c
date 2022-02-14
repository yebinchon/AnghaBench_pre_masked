
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmap_area {int dummy; } ;
struct vm_struct {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct vmap_area*) ;
 unsigned long FUNC_2 (unsigned long) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 struct vmap_area* FUNC_3 (unsigned long,unsigned long,unsigned long,unsigned long,int,int) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 () ;
 int FUNC_6 (struct vm_struct*,struct vmap_area*,unsigned long,void*) ;
 int FUNC_7 (struct vm_struct*) ;
 struct vm_struct* FUNC_8 (int,int,int) ;
 int FUNC_9 (struct vm_struct*,struct vmap_area*,unsigned long,void*) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static struct vm_struct *FUNC_11(unsigned long VAR_6,
  unsigned long VAR_7, unsigned long VAR_8, unsigned long VAR_9,
  unsigned long VAR_10, int VAR_11, gfp_t VAR_12, void *VAR_13)
{
 static struct vmap_area *VAR_14;
 struct vm_struct *VAR_15;

 FUNC_0(FUNC_5());
 if (VAR_8 & VAR_4) {
  int VAR_16 = FUNC_4(VAR_6);

  if (VAR_16 > VAR_1)
   VAR_16 = VAR_1;
  else if (VAR_16 < VAR_2)
   VAR_16 = VAR_2;

  VAR_7 = 1ul << VAR_16;
 }

 VAR_6 = FUNC_2(VAR_6);
 if (FUNC_10(!VAR_6))
  return ((void*)0);

 VAR_15 = FUNC_8(sizeof(*VAR_15), VAR_12 & VAR_0, VAR_11);
 if (FUNC_10(!VAR_15))
  return ((void*)0);




 VAR_6 += VAR_3;

 VAR_14 = FUNC_3(VAR_6, VAR_7, VAR_9, VAR_10, VAR_11, VAR_12);
 if (FUNC_1(VAR_14)) {
  FUNC_7(VAR_15);
  return ((void*)0);
 }
 if (VAR_8 & VAR_5)
  FUNC_9(VAR_15, VAR_14, VAR_8, VAR_13);
 else
  FUNC_6(VAR_15, VAR_14, VAR_8, VAR_13);

 return VAR_15;
}

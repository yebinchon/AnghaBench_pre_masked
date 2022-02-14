
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_struct {int dummy; } ;
typedef int pgprot_t ;
typedef int gfp_t ;


 unsigned long FUNC_0 (unsigned long) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct vm_struct* FUNC_1 (unsigned long,unsigned long,int,int ,int ,int,int ,void*) ;
 void* FUNC_2 (struct vm_struct*,int ,int ,int,void*) ;
 int FUNC_3 (struct vm_struct*) ;
 int FUNC_4 (void*,unsigned long,int,int ) ;
 unsigned long VAR_5 ;

__attribute__((used)) static void *FUNC_5(unsigned long VAR_6, unsigned long VAR_7,
       gfp_t VAR_8, pgprot_t VAR_9,
       int VAR_10, void *VAR_11)
{
 struct vm_struct *VAR_12;
 void *VAR_13;
 unsigned long VAR_14 = VAR_6;

 VAR_6 = FUNC_0(VAR_6);
 if (!VAR_6 || (VAR_6 >> VAR_0) > VAR_5)
  return ((void*)0);

 VAR_12 = FUNC_1(VAR_6, VAR_7, VAR_3 | VAR_4, VAR_2,
      VAR_1, VAR_10, VAR_8, VAR_11);

 if (!VAR_12)
  return ((void*)0);

 VAR_13 = FUNC_2(VAR_12, VAR_8, VAR_9, VAR_10, VAR_11);
 if (!VAR_13)
  return ((void*)0);





 FUNC_3(VAR_12);






 FUNC_4(VAR_13, VAR_14, 3, VAR_8);

 return VAR_13;
}

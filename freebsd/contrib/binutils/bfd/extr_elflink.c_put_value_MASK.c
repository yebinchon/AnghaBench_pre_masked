
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long bfd_vma ;
typedef int bfd_byte ;
typedef int bfd ;


 int FUNC_0 () ;
 int FUNC_1 (int *,unsigned long,int *) ;
 int FUNC_2 (int *,unsigned long,int *) ;
 int FUNC_3 (int *,unsigned long,int *) ;
 int FUNC_4 (int *,unsigned long,int *) ;

__attribute__((used)) static void
FUNC_5 (bfd_vma VAR_0,
    unsigned long VAR_1,
    bfd * VAR_2,
    bfd_vma VAR_3,
    bfd_byte * VAR_4)
{
  VAR_4 += (VAR_0 - VAR_1);

  for (; VAR_0; VAR_0 -= VAR_1, VAR_4 -= VAR_1, VAR_3 >>= (VAR_1 * 8))
    {
      switch (VAR_1)
 {
 default:
 case 0:
   FUNC_0 ();
 case 1:
   FUNC_4 (VAR_2, VAR_3, VAR_4);
   break;
 case 2:
   FUNC_1 (VAR_2, VAR_3, VAR_4);
   break;
 case 4:
   FUNC_2 (VAR_2, VAR_3, VAR_4);
   break;
 case 8:



   FUNC_0 ();

   break;
 }
    }
}

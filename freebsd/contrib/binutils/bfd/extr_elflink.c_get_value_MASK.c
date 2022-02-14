
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_vma ;
typedef int bfd_byte ;
typedef int bfd ;


 int FUNC_0 () ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static bfd_vma
FUNC_5 (bfd_vma VAR_0,
    unsigned long VAR_1,
    bfd * VAR_2,
    bfd_byte * VAR_3)
{
  bfd_vma VAR_4 = 0;

  for (; VAR_0; VAR_0 -= VAR_1, VAR_3 += VAR_1)
    {
      switch (VAR_1)
 {
 default:
 case 0:
   FUNC_0 ();
 case 1:
   VAR_4 = (VAR_4 << (8 * VAR_1)) | FUNC_4 (VAR_2, VAR_3);
   break;
 case 2:
   VAR_4 = (VAR_4 << (8 * VAR_1)) | FUNC_1 (VAR_2, VAR_3);
   break;
 case 4:
   VAR_4 = (VAR_4 << (8 * VAR_1)) | FUNC_2 (VAR_2, VAR_3);
   break;
 case 8:



   FUNC_0 ();

   break;
 }
    }
  return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_vma ;


 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void
FUNC_3 (unsigned char *VAR_0, bfd_vma VAR_1, int VAR_2)
{
  switch (VAR_2)
    {
    case 8:
      VAR_0[7] = VAR_1 & 0xff;
      VAR_0[6] = (VAR_1 >> 8) & 0xff;
      VAR_0[5] = (VAR_1 >> 16) & 0xff;
      VAR_0[4] = (VAR_1 >> 24) & 0xff;
      VAR_1 >>= 16;
      VAR_1 >>= 16;

    case 4:
      VAR_0[3] = VAR_1 & 0xff;
      VAR_0[2] = (VAR_1 >> 8) & 0xff;
      VAR_1 >>= 16;

    case 2:
      VAR_0[1] = VAR_1 & 0xff;
      VAR_1 >>= 8;

    case 1:
      VAR_0[0] = VAR_1 & 0xff;
      break;

    default:
      FUNC_2 (FUNC_0("Unhandled data length: %d\n"), VAR_2);
      FUNC_1 ();
    }
}

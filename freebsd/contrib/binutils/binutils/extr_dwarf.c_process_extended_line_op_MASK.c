
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long address; unsigned int last_file_entry; } ;





 char* FUNC_0 (char*) ;
 unsigned long FUNC_1 (unsigned char*,unsigned int) ;
 int FUNC_2 (char*,...) ;
 unsigned int FUNC_3 (unsigned char*,unsigned int*,int ) ;
 int FUNC_4 (int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int
FUNC_7 (unsigned char *VAR_1, int VAR_2)
{
  unsigned char VAR_3;
  unsigned int VAR_4;
  unsigned int VAR_5;
  unsigned char *VAR_6;
  unsigned long VAR_7;

  VAR_5 = FUNC_3 (VAR_1, & VAR_4, 0);
  VAR_1 += VAR_4;

  if (VAR_5 == 0)
    {
      FUNC_6 (FUNC_0("badly formed extended line op encountered!\n"));
      return VAR_4;
    }

  VAR_5 += VAR_4;
  VAR_3 = *VAR_1++;

  FUNC_2 (FUNC_0("  Extended opcode %d: "), VAR_3);

  switch (VAR_3)
    {
    case 129:
      FUNC_2 (FUNC_0("End of Sequence\n\n"));
      FUNC_4 (VAR_2);
      break;

    case 128:
      VAR_7 = FUNC_1 (VAR_1, VAR_5 - VAR_4 - 1);
      FUNC_2 (FUNC_0("set Address to 0x%lx\n"), VAR_7);
      VAR_0.address = VAR_7;
      break;

    case 130:
      FUNC_2 (FUNC_0("  define new File Table entry\n"));
      FUNC_2 (FUNC_0("  Entry\tDir\tTime\tSize\tName\n"));

      FUNC_2 (FUNC_0("   %d\t"), ++VAR_0.last_file_entry);
      VAR_6 = VAR_1;
      VAR_1 += FUNC_5 ((char *) VAR_1) + 1;
      FUNC_2 (FUNC_0("%lu\t"), FUNC_3 (VAR_1, & VAR_4, 0));
      VAR_1 += VAR_4;
      FUNC_2 (FUNC_0("%lu\t"), FUNC_3 (VAR_1, & VAR_4, 0));
      VAR_1 += VAR_4;
      FUNC_2 (FUNC_0("%lu\t"), FUNC_3 (VAR_1, & VAR_4, 0));
      FUNC_2 (FUNC_0("%s\n\n"), VAR_6);
      break;

    default:
      FUNC_2 (FUNC_0("UNKNOWN: length %d\n"), VAR_5 - VAR_4);
      break;
    }

  return VAR_5;
}

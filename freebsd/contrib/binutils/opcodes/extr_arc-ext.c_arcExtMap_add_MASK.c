
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ExtInstruction {char flags; char* name; } ;
struct ExtAuxRegister {char* name; unsigned char address; struct ExtAuxRegister* next; } ;
struct TYPE_2__ {char** coreRegisters; char** condCodes; struct ExtAuxRegister* auxRegisters; struct ExtInstruction** instructions; } ;






 TYPE_1__ VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (int) ;

int
FUNC_4(void *VAR_1, unsigned long VAR_2)
{
  unsigned char *VAR_3 = VAR_1;
  unsigned char *VAR_4 = VAR_3;


  FUNC_0();

  while (VAR_4 && VAR_4 < (VAR_3 + VAR_2))
    {
      if (VAR_4[0] == 0)
 return -1;

      switch (VAR_4[1])
 {
 case 128:
   {
     char VAR_5 = VAR_4[2];
     char VAR_6 = VAR_4[3];
     char * VAR_7 = (char *) FUNC_3(( (int)*VAR_4-5) * sizeof(char));
     struct ExtInstruction * VAR_8 =
       (struct ExtInstruction *) FUNC_3(sizeof(struct ExtInstruction));

     if (VAR_5==3)
       VAR_5 = 0x1f - 0x10 + VAR_6 - 0x09 + 1;
     else
       VAR_5 -= 0x10;
     VAR_8 -> flags = (char) *(VAR_4+4);
     FUNC_2 (VAR_7, (char *) (VAR_4+5));
     VAR_8 -> name = VAR_7;
     VAR_0.instructions[(int) VAR_5] = VAR_8;
   }
   break;

 case 129:
   {
     char * VAR_9 = (char *) FUNC_3(((int)*VAR_4-3) * sizeof(char));

     FUNC_2(VAR_9, (char *) (VAR_4+3));
     VAR_0.coreRegisters[VAR_4[2]-32] = VAR_9;
   }
   break;

 case 130:
   {
     char * VAR_10 = (char *) FUNC_3( ((int)*VAR_4-3) * sizeof(char));
     FUNC_2(VAR_10, (char *) (VAR_4+3));
     VAR_0.condCodes[VAR_4[2]-16] = VAR_10;
   }
   break;

 case 131:
   {

     struct ExtAuxRegister *VAR_11 =
       (struct ExtAuxRegister *)FUNC_1(sizeof(struct ExtAuxRegister));
     char * VAR_12 = (char *) FUNC_3 ( ((int)*VAR_4-6) * sizeof(char));

     FUNC_2 (VAR_12, (char *) (VAR_4+6));
     VAR_11->name = VAR_12;
     VAR_11->address = VAR_4[2]<<24 | VAR_4[3]<<16 | VAR_4[4]<<8 | VAR_4[5];
     VAR_11->next = VAR_0.auxRegisters;
     VAR_0.auxRegisters = VAR_11;
   }
   break;

 default:
   return -1;

 }
      VAR_4 += VAR_4[0];
    }

  return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int (* read_memory_func ) (int ,char*,int,TYPE_1__*) ;scalar_t__ endian; int (* memory_error_func ) (int,int ,TYPE_1__*) ;} ;
typedef TYPE_1__ disassemble_info ;
typedef int bfd_vma ;
typedef char bfd_byte ;
typedef int CGEN_CPU_DESC ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,TYPE_1__*,char*,int,int,int) ;
 int FUNC_1 (int ,char*,int,TYPE_1__*) ;
 int FUNC_2 (int,int ,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3 (CGEN_CPU_DESC VAR_2, bfd_vma VAR_3, disassemble_info *VAR_4)
{
  int VAR_5;
  int VAR_6;
  int VAR_7;
  int VAR_8;
  int VAR_9;
  bfd_byte VAR_10[VAR_1];
  char VAR_11[1];
  char VAR_12[4];



  VAR_9 = 0;


  VAR_6 = 8;
  VAR_5 = (*VAR_4->read_memory_func) (VAR_3, VAR_10, VAR_6, VAR_4);

  if (VAR_5 != 0)
    {
      (*VAR_4->memory_error_func) (VAR_5, VAR_3, VAR_4);
      return -1;
    }
  if (VAR_4->endian == VAR_0)
    {
      VAR_11[0] = VAR_10[0];
      VAR_12[0] = VAR_10[0];
      VAR_12[1] = VAR_10[1];
      VAR_12[2] = VAR_10[2];
      VAR_12[3] = VAR_10[3];
    }
  else
    {
      VAR_11[0] = VAR_10[1];
      VAR_12[0] = VAR_10[1];
      VAR_12[1] = VAR_10[0];
      VAR_12[2] = VAR_10[3];
      VAR_12[3] = VAR_10[2];
    }




  if ((VAR_11[0] & 0x80) && (VAR_11[0] & 0x40))
    {
      if ((VAR_12[0] & 0xf0) == 0xf0 && (VAR_12[1] & 0x07) == 0x07
   && ((VAR_12[2] & 0xfe) != 0xf0 || (VAR_12[3] & 0xf4) != 0))
 {

          VAR_7 = 0;

          VAR_8 = 8;
 }
      else
 {

          VAR_7 = 4;
          VAR_8 = 4;
 }
    }
  else
    {

      VAR_7 = 2;
      VAR_8 = 6;
    }


  VAR_5 = FUNC_0 (VAR_2, VAR_3, VAR_4, VAR_10, VAR_7,
     VAR_8, VAR_9);

  return VAR_5;
}

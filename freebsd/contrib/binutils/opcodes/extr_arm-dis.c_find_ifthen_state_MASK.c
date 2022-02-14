
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct disassemble_info {int (* read_memory_func ) (scalar_t__,int *,int,struct disassemble_info*) ;scalar_t__ (* symbol_at_address_func ) (scalar_t__,struct disassemble_info*) ;} ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_byte ;
typedef scalar_t__ bfd_boolean ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,struct disassemble_info*) ;
 int FUNC_1 (scalar_t__,int *,int,struct disassemble_info*) ;

__attribute__((used)) static void
FUNC_2 (bfd_vma VAR_2, struct disassemble_info *VAR_3,
     bfd_boolean VAR_4)
{
  unsigned char VAR_5[2];
  unsigned int VAR_6;
  int VAR_7;


  int VAR_8;
  int VAR_9;
  unsigned int VAR_10;
  bfd_vma VAR_11;

  VAR_0 = VAR_2;
  VAR_1 = 0;

  VAR_11 = VAR_2;
  VAR_8 = 1;
  VAR_9 = 0;
  VAR_10 = 0;



  for (;;)
    {
      if (VAR_11 == 0 || VAR_3->symbol_at_address_func(VAR_11, VAR_3))
 {


   if (VAR_10 && (VAR_8 & 1))
     break;

   return;
 }
      VAR_11 -= 2;
      VAR_7 = VAR_3->read_memory_func (VAR_11, (bfd_byte *)VAR_5, 2, VAR_3);
      if (VAR_7)
 return;

      if (VAR_4)
 VAR_6 = (VAR_5[0]) | (VAR_5[1] << 8);
      else
 VAR_6 = (VAR_5[1]) | (VAR_5[0] << 8);
      if (VAR_10)
 {
   if ((VAR_6 & 0xf800) < 0xe800)
     {



       if (VAR_8 & 1)
  break;
       VAR_10 = 0;
     }
 }
      if ((VAR_6 & 0xff00) == 0xbf00 && (VAR_6 & 0xf) != 0)
 {

   VAR_10 = VAR_6;
   VAR_9 = VAR_8 >> 1;
 }
      if ((VAR_6 & 0xf800) >= 0xe800)
 VAR_8++;
      else
 VAR_8 = (VAR_8 + 2) | 1;

      if (VAR_8 >= 8 && !VAR_10)
 return;
    }

  VAR_1 = (VAR_10 & 0xe0) | ((VAR_10 << VAR_9) & 0x1f);
  if ((VAR_1 & 0xf) == 0)
    VAR_1 = 0;
}

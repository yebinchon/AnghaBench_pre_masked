
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comp_unit_head {int initial_length_size; int offset_size; } ;
typedef int bfd_byte ;
typedef int bfd ;
typedef int LONGEST ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static LONGEST
FUNC_2 (bfd *VAR_0, char *VAR_1, struct comp_unit_head *VAR_2,
                     int *VAR_3)
{
  LONGEST VAR_4 = 0;

  VAR_4 = FUNC_0 (VAR_0, (bfd_byte *) VAR_1);

  if (VAR_4 == 0xffffffff)
    {
      VAR_4 = FUNC_1 (VAR_0, (bfd_byte *) VAR_1 + 4);
      *VAR_3 = 12;
      if (VAR_2 != ((void*)0))
 {
   VAR_2->initial_length_size = 12;
   VAR_2->offset_size = 8;
 }
    }
  else if (VAR_4 == 0)
    {


      VAR_4 = FUNC_1 (VAR_0, (bfd_byte *) VAR_1);
      *VAR_3 = 8;
      if (VAR_2 != ((void*)0))
 {
   VAR_2->initial_length_size = 8;
   VAR_2->offset_size = 8;
 }
    }
  else
    {
      *VAR_3 = 4;
      if (VAR_2 != ((void*)0))
 {
   VAR_2->initial_length_size = 4;
   VAR_2->offset_size = 4;
 }
    }

 return VAR_4;
}

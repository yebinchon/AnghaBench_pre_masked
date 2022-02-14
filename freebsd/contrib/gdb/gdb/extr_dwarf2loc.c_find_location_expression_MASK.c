
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dwarf2_loclist_baton {unsigned int base_address; char* data; int size; TYPE_1__* objfile; } ;
struct TYPE_2__ {int section_offsets; } ;
typedef unsigned int CORE_ADDR ;


 unsigned int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_2 (char*,char*,unsigned int*) ;
 unsigned int FUNC_3 (char*,int) ;

__attribute__((used)) static char *
FUNC_4 (struct dwarf2_loclist_baton *VAR_2,
     size_t *VAR_3, CORE_ADDR VAR_4)
{
  CORE_ADDR VAR_5, VAR_6;
  char *VAR_7, *VAR_8;
  unsigned int VAR_9 = VAR_0 / VAR_1, VAR_10;
  CORE_ADDR VAR_11 = ~(~(CORE_ADDR)1 << (VAR_9 * 8 - 1));

  CORE_ADDR VAR_12 = FUNC_0 (VAR_2->objfile->section_offsets,
        FUNC_1 (VAR_2->objfile));
  CORE_ADDR VAR_13 = VAR_2->base_address + VAR_12;

  VAR_7 = VAR_2->data;
  VAR_8 = VAR_2->data + VAR_2->size;

  while (1)
    {
      VAR_5 = FUNC_2 (VAR_7, VAR_8, &VAR_10);
      VAR_7 += VAR_10;
      VAR_6 = FUNC_2 (VAR_7, VAR_8, &VAR_10);
      VAR_7 += VAR_10;


      if (VAR_5 == 0 && VAR_6 == 0)
 return ((void*)0);


      if ((VAR_5 & VAR_11) == VAR_11)
 {
   VAR_13 = VAR_6;
   continue;
 }


      VAR_5 += VAR_13;
      VAR_6 += VAR_13;

      VAR_10 = FUNC_3 (VAR_7, 2);
      VAR_7 += 2;

      if (VAR_4 >= VAR_5 && VAR_4 < VAR_6)
 {
   *VAR_3 = VAR_10;
   return VAR_7;
 }

      VAR_7 += VAR_10;
    }
}

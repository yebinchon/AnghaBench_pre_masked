
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {unsigned int section_table_size; TYPE_2__** section_table; } ;
typedef TYPE_1__ ieee_data_type ;
typedef int bfd_size_type ;
typedef int bfd ;
struct TYPE_9__ {unsigned int target_index; } ;
typedef TYPE_2__ asection ;


 char* FUNC_0 (int *,int) ;
 TYPE_2__* FUNC_1 (int *,char*) ;
 TYPE_2__** FUNC_2 (TYPE_2__**,int) ;
 int FUNC_3 (char*,char*,unsigned int) ;

__attribute__((used)) static asection *
FUNC_4 (bfd *VAR_0, ieee_data_type *VAR_1, unsigned int VAR_2)
{
  if (VAR_2 >= VAR_1->section_table_size)
    {
      unsigned int VAR_3, VAR_4;
      asection **VAR_5;
      bfd_size_type VAR_6;

      VAR_3 = VAR_1->section_table_size;
      if (VAR_3 == 0)
 VAR_3 = 20;
      while (VAR_3 <= VAR_2)
 VAR_3 *= 2;

      VAR_6 = VAR_3;
      VAR_6 *= sizeof (asection *);
      VAR_5 = FUNC_2 (VAR_1->section_table, VAR_6);
      if (VAR_5 == ((void*)0))
 return ((void*)0);

      for (VAR_4 = VAR_1->section_table_size; VAR_4 < VAR_3; VAR_4++)
 VAR_5[VAR_4] = ((void*)0);

      VAR_1->section_table = VAR_5;
      VAR_1->section_table_size = VAR_3;
    }

  if (VAR_1->section_table[VAR_2] == (asection *) ((void*)0))
    {
      char *VAR_7 = FUNC_0 (VAR_0, (bfd_size_type) 11);
      asection *VAR_8;

      if (!VAR_7)
 return ((void*)0);
      FUNC_3 (VAR_7, " fsec%4d", VAR_2);
      VAR_8 = FUNC_1 (VAR_0, VAR_7);
      VAR_1->section_table[VAR_2] = VAR_8;
      VAR_8->target_index = VAR_2;
      VAR_1->section_table[VAR_2] = VAR_8;
    }
  return VAR_1->section_table[VAR_2];
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct target_ops {int (* to_xfer_memory ) (int ,char*,int,int,struct mem_attrib*,struct target_ops*) ;scalar_t__ to_has_all_memory; int to_has_memory; struct target_ops* beneath; } ;
struct section_table {int the_bfd_section; int bfd; } ;
struct mem_attrib {int dummy; } ;
struct TYPE_5__ {int (* to_xfer_memory ) (int ,char*,int,int,struct mem_attrib*,TYPE_1__*) ;} ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 TYPE_1__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,char*,int,int,struct mem_attrib*,TYPE_1__*) ;
 int FUNC_2 (int ,char*,int,int,struct mem_attrib*,struct target_ops*) ;
 struct section_table* FUNC_3 (TYPE_1__*,int ) ;
 struct target_ops* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int ,char*,int,int ,struct mem_attrib*,TYPE_1__*) ;

int
FUNC_5 (CORE_ADDR VAR_5, char *VAR_6, int VAR_7, int VAR_8,
  struct mem_attrib *VAR_9)
{
  int VAR_10;
  int VAR_11 = 0;
  struct target_ops *VAR_12;


  if (VAR_7 == 0)
    return 0;



  VAR_2 = 0;

  if (!VAR_8 && VAR_4)
    {
      struct section_table *VAR_13;



      VAR_13 = FUNC_3 (&VAR_1, VAR_5);
      if (VAR_13 != ((void*)0)
   && (FUNC_0 (VAR_13->bfd, VAR_13->the_bfd_section)
       & VAR_0))
 return FUNC_4 (VAR_5, VAR_6, VAR_7, 0, VAR_9, &VAR_1);
    }


  VAR_10 = VAR_1.to_xfer_memory
    (VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, &VAR_1);


  if (VAR_10 <= 0)
    {
      for (VAR_12 = VAR_3; VAR_12 != ((void*)0); VAR_12 = VAR_12->beneath)
 {
   if (!VAR_12->to_has_memory)
     continue;

   VAR_10 = VAR_12->to_xfer_memory (VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_12);
   if (VAR_10 > 0)
     break;
   if (VAR_12->to_has_all_memory)
     break;
 }

      if (VAR_10 <= 0)
 return -1;
    }

  return VAR_10;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct target_ops {int (* to_xfer_memory ) (int,void*,int,int,int *,struct target_ops*) ;TYPE_1__* beneath; } ;
struct bfd_section {int dummy; } ;
typedef int file_ptr ;
typedef enum target_object { ____Placeholder_target_object } target_object ;
typedef int bfd_size_type ;
typedef int ULONGEST ;
struct TYPE_2__ {int (* to_xfer_partial ) (TYPE_1__*,int,char const*,void*,void const*,int,int) ;} ;
typedef int LONGEST ;





 struct bfd_section* FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,struct bfd_section*,void*,int ,int) ;
 int FUNC_2 (int ,struct bfd_section*) ;
 int VAR_0 ;
 int FUNC_3 (int,void*,int,int,int *,struct target_ops*) ;
 int FUNC_4 (int,void const*,int,int,int *,struct target_ops*) ;
 int FUNC_5 (int,void*,int,int,int *,struct target_ops*) ;
 int FUNC_6 (int,void const*,int,int,int *,struct target_ops*) ;
 int FUNC_7 (TYPE_1__*,int,char const*,void*,void const*,int,int) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static LONGEST
FUNC_9 (struct target_ops *VAR_1, enum target_object VAR_2,
     const char *VAR_3, void *VAR_4,
     const void *VAR_5, ULONGEST VAR_6, LONGEST VAR_7)
{
  switch (VAR_2)
    {
    case 128:
      if (VAR_4)
 return (*VAR_1->to_xfer_memory) (VAR_6, VAR_4, VAR_7, 0 ,
           ((void*)0), VAR_1);
      if (VAR_5)
 return (*VAR_1->to_xfer_memory) (VAR_6, VAR_5, VAR_7, 1 ,
           ((void*)0), VAR_1);
      return -1;

    case 130:
      if (VAR_4)
 {



   struct bfd_section *VAR_8;
   bfd_size_type VAR_9;
   char *VAR_10;

   VAR_8 = FUNC_0 (VAR_0, ".auxv");
   if (VAR_8 == ((void*)0))
     return -1;

   VAR_9 = FUNC_2 (VAR_0, VAR_8);
   if (VAR_6 >= VAR_9)
     return 0;
   VAR_9 -= VAR_6;
   if (VAR_9 > VAR_7)
     VAR_9 = VAR_7;
   if (VAR_9 > 0 &&
       ! FUNC_1 (VAR_0, VAR_8, VAR_4,
       (file_ptr) VAR_6, VAR_9))
     {
       FUNC_8 ("Couldn't read NT_AUXV note in core file.");
       return -1;
     }

   return VAR_9;
 }
      return -1;

    case 129:
      {
 ULONGEST VAR_11;
 VAR_11 = *(ULONGEST*)VAR_3 + VAR_6;
 if (VAR_4)
   return (*VAR_1->to_xfer_memory) (VAR_11, VAR_4, VAR_7, 0 ,
      ((void*)0), VAR_1);
 if (VAR_5)
   return (*VAR_1->to_xfer_memory) (VAR_11, VAR_5, VAR_7, 1 ,
      ((void*)0), VAR_1);
 return -1;
      }

    default:
      if (VAR_1->beneath != ((void*)0))
 return VAR_1->beneath->to_xfer_partial (VAR_1->beneath, VAR_2, VAR_3,
           VAR_4, VAR_5, VAR_6, VAR_7);
      return -1;
    }
}

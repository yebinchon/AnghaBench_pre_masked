
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct bfd_link_info {scalar_t__ shared; } ;
typedef int flagword ;
typedef void* bfd_boolean ;
typedef int bfd ;
struct TYPE_6__ {scalar_t__ size; } ;
typedef TYPE_1__ asection ;
struct TYPE_7__ {void* got_needed; void* dynamic_sections_needed; int * dynobj; void* dynamic_sections_created; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 TYPE_1__* FUNC_0 (int *,char*) ;
 TYPE_1__* FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,TYPE_1__*,int) ;
 TYPE_2__* FUNC_3 (struct bfd_link_info*) ;

__attribute__((used)) static bfd_boolean
FUNC_4 (bfd *VAR_10,
          struct bfd_link_info *VAR_11,
          bfd_boolean VAR_12)
{
  asection *VAR_13;

  if (! FUNC_3 (VAR_11)->dynamic_sections_created)
    {
      flagword VAR_14;

      FUNC_3 (VAR_11)->dynobj = VAR_10;

      VAR_14 = (VAR_2 | VAR_7 | VAR_4 | VAR_5
        | VAR_6);




      VAR_13 = FUNC_1 (VAR_10, ".dynamic", VAR_14);
      if (VAR_13 == ((void*)0)
   || ! FUNC_2 (VAR_10, VAR_13, 2))
 return VAR_1;



      VAR_13 = FUNC_1 (VAR_10, ".got", VAR_14);
      if (VAR_13 == ((void*)0)
   || ! FUNC_2 (VAR_10, VAR_13, 2))
 return VAR_1;



      VAR_13 = FUNC_1 (VAR_10, ".plt", VAR_14 | VAR_3);
      if (VAR_13 == ((void*)0)
   || ! FUNC_2 (VAR_10, VAR_13, 2))
 return VAR_1;



      VAR_13 = FUNC_1 (VAR_10, ".dynrel", VAR_14 | VAR_8);
      if (VAR_13 == ((void*)0)
   || ! FUNC_2 (VAR_10, VAR_13, 2))
 return VAR_1;



      VAR_13 = FUNC_1 (VAR_10, ".hash", VAR_14 | VAR_8);
      if (VAR_13 == ((void*)0)
   || ! FUNC_2 (VAR_10, VAR_13, 2))
 return VAR_1;



      VAR_13 = FUNC_1 (VAR_10, ".dynsym", VAR_14 | VAR_8);
      if (VAR_13 == ((void*)0)
   || ! FUNC_2 (VAR_10, VAR_13, 2))
 return VAR_1;



      VAR_13 = FUNC_1 (VAR_10, ".dynstr", VAR_14 | VAR_8);
      if (VAR_13 == ((void*)0)
   || ! FUNC_2 (VAR_10, VAR_13, 2))
 return VAR_1;

      FUNC_3 (VAR_11)->dynamic_sections_created = VAR_9;
    }

  if ((VAR_12 && ! FUNC_3 (VAR_11)->dynamic_sections_needed)
      || VAR_11->shared)
    {
      bfd *VAR_15;

      VAR_15 = FUNC_3 (VAR_11)->dynobj;

      VAR_13 = FUNC_0 (VAR_15, ".got");
      if (VAR_13->size == 0)
 VAR_13->size = VAR_0;

      FUNC_3 (VAR_11)->dynamic_sections_needed = VAR_9;
      FUNC_3 (VAR_11)->got_needed = VAR_9;
    }

  return VAR_9;
}

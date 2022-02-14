
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct ieee_name_type_hash_entry {int dummy; } ;
struct TYPE_9__ {int root; } ;
struct TYPE_8__ {int root; } ;
struct TYPE_10__ {struct ieee_buf* head; } ;
struct ieee_handle {int type_indx; int name_indx; TYPE_2__ tags; TYPE_1__ typedefs; TYPE_3__ data; TYPE_3__ vars; void* error; TYPE_3__ global_types; int * filename; TYPE_3__ fnargs; TYPE_3__ fntype; TYPE_3__ linenos; TYPE_3__ cxx; TYPE_3__ types; int * abfd; } ;
struct ieee_buf {scalar_t__ c; int buf; struct ieee_buf* next; } ;
typedef scalar_t__ file_ptr ;
typedef scalar_t__ bfd_size_type ;
typedef void* bfd_boolean ;
typedef int bfd ;
typedef int asection ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 () ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int) ;
 int * FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,int ,void*) ;
 int FUNC_7 (int *,int *,int ,scalar_t__,scalar_t__) ;
 int FUNC_8 (int *,int *,int) ;
 int FUNC_9 (int *,int *,scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_10 (void*,int *,void*) ;
 int FUNC_11 (int ,char*,char*,char const*,char*) ;
 int VAR_5 ;
 int FUNC_12 (struct ieee_handle*,TYPE_3__*,TYPE_3__*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (struct ieee_handle*,TYPE_3__*) ;
 int FUNC_15 (struct ieee_handle*) ;
 int VAR_7 ;
 int FUNC_16 (struct ieee_handle*,TYPE_3__*) ;
 int FUNC_17 (TYPE_2__*,int ,void*) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_18 (struct ieee_handle*,int) ;
 int FUNC_19 (struct ieee_handle*,char*) ;
 int FUNC_20 (struct ieee_handle*,int) ;
 int VAR_11 ;
 int FUNC_21 (struct ieee_handle*,int ,int) ;
 int VAR_12 ;

bfd_boolean
FUNC_22 (bfd *VAR_13, void *VAR_14)
{
  struct ieee_handle VAR_15;
  asection *VAR_16;
  const char *VAR_17;
  struct ieee_buf *VAR_18;

  FUNC_21 (&VAR_15, 0, sizeof VAR_15);
  VAR_15.abfd = VAR_13;
  VAR_15.type_indx = 256;
  VAR_15.name_indx = 32;

  if (!FUNC_4 (&VAR_15.typedefs.root, VAR_8,
       sizeof (struct ieee_name_type_hash_entry))
      || !FUNC_4 (&VAR_15.tags.root, VAR_8,
          sizeof (struct ieee_name_type_hash_entry)))
    return VAR_0;

  if (! FUNC_16 (&VAR_15, &VAR_15.global_types)
      || ! FUNC_16 (&VAR_15, &VAR_15.data)
      || ! FUNC_16 (&VAR_15, &VAR_15.types)
      || ! FUNC_16 (&VAR_15, &VAR_15.vars)
      || ! FUNC_16 (&VAR_15, &VAR_15.cxx)
      || ! FUNC_16 (&VAR_15, &VAR_15.linenos)
      || ! FUNC_16 (&VAR_15, &VAR_15.fntype)
      || ! FUNC_16 (&VAR_15, &VAR_15.fnargs))
    return VAR_0;

  if (! FUNC_10 (VAR_14, &VAR_7, (void *) &VAR_15))
    return VAR_0;

  if (VAR_15.filename != ((void*)0))
    {
      if (! FUNC_15 (&VAR_15))
 return VAR_0;
    }


  VAR_15.error = VAR_0;
  FUNC_17 (&VAR_15.tags,
    VAR_11,
    (void *) &VAR_15);
  if (VAR_15.error)
    return VAR_0;


  if (! FUNC_13 (&VAR_15.global_types))
    {


      if (! FUNC_14 (&VAR_15, &VAR_15.global_types)
   || ! FUNC_18 (&VAR_15, (int) VAR_9)
   || ! FUNC_20 (&VAR_15, VAR_15.name_indx)
   || ! FUNC_19 (&VAR_15, "")
   || ! FUNC_18 (&VAR_15, (int) VAR_10)
   || ! FUNC_20 (&VAR_15, VAR_15.type_indx)
   || ! FUNC_18 (&VAR_15, 0xce)
   || ! FUNC_20 (&VAR_15, VAR_15.name_indx)
   || ! FUNC_20 (&VAR_15, 'P')
   || ! FUNC_20 (&VAR_15, (int) VAR_4 + 32)
   || ! FUNC_18 (&VAR_15, (int) VAR_6))
 return VAR_0;

      if (! FUNC_12 (&VAR_15, &VAR_15.global_types, &VAR_15.data))
 return VAR_0;
      VAR_15.data = VAR_15.global_types;
    }



  VAR_15.error = VAR_0;
  if (! FUNC_16 (&VAR_15, &VAR_15.vars))
    return VAR_0;
  FUNC_6 (VAR_13, VAR_5, (void *) &VAR_15);
  if (VAR_15.error)
    return VAR_0;
  if (! FUNC_13 (&VAR_15.vars))
    {
      if (! FUNC_14 (&VAR_15, &VAR_15.vars)
   || ! FUNC_18 (&VAR_15, (int) VAR_6))
 return VAR_0;

      if (! FUNC_12 (&VAR_15, &VAR_15.data, &VAR_15.vars))
 return VAR_0;
    }





  if (FUNC_13 (&VAR_15.data))
    {

      return VAR_3;
    }
  VAR_17 = ((void*)0);
  VAR_16 = FUNC_5 (VAR_13, ".debug");
  if (VAR_16 == ((void*)0))
    VAR_17 = "bfd_make_section";
  if (VAR_17 == ((void*)0))
    {
      if (! FUNC_8 (VAR_13, VAR_16, VAR_1 | VAR_2))
 VAR_17 = "bfd_set_section_flags";
    }
  if (VAR_17 == ((void*)0))
    {
      bfd_size_type VAR_19;

      VAR_19 = 0;
      for (VAR_18 = VAR_15.data.head; VAR_18 != ((void*)0); VAR_18 = VAR_18->next)
 VAR_19 += VAR_18->c;
      if (! FUNC_9 (VAR_13, VAR_16, VAR_19))
 VAR_17 = "bfd_set_section_size";
    }
  if (VAR_17 == ((void*)0))
    {
      file_ptr VAR_20;

      VAR_20 = 0;
      for (VAR_18 = VAR_15.data.head; VAR_18 != ((void*)0); VAR_18 = VAR_18->next)
 {
   if (! FUNC_7 (VAR_13, VAR_16, VAR_18->buf, VAR_20, VAR_18->c))
     {
       VAR_17 = "bfd_set_section_contents";
       break;
     }
   VAR_20 += VAR_18->c;
 }
    }

  if (VAR_17 != ((void*)0))
    {
      FUNC_11 (VAR_12, "%s: %s: %s\n", FUNC_2 (VAR_13), VAR_17,
        FUNC_0 (FUNC_1 ()));
      return VAR_0;
    }

  FUNC_3 (&VAR_15.typedefs.root);
  FUNC_3 (&VAR_15.tags.root);

  return VAR_3;
}

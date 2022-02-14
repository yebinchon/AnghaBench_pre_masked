
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_9__ ;
typedef struct TYPE_34__ TYPE_8__ ;
typedef struct TYPE_33__ TYPE_7__ ;
typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;
typedef struct TYPE_26__ TYPE_15__ ;
typedef struct TYPE_25__ TYPE_13__ ;


struct TYPE_27__ {int value; void* section; } ;
struct TYPE_31__ {TYPE_8__* abfd; } ;
struct TYPE_32__ {TYPE_1__ def; TYPE_5__ undef; } ;
struct TYPE_33__ {scalar_t__ type; TYPE_6__ u; } ;
struct xcoff_link_hash_entry {int flags; scalar_t__ smclas; TYPE_7__ root; struct xcoff_link_hash_entry* descriptor; } ;
struct xcoff_import_file {char* path; char const* file; char const* member; struct xcoff_import_file* next; } ;
struct TYPE_29__ {scalar_t__ _l_zeroes; int _l_offset; } ;
struct TYPE_30__ {int _l_name; TYPE_3__ _l_l; } ;
struct internal_ldsym {int l_smtype; scalar_t__ l_smclas; int l_value; TYPE_4__ _l; } ;
struct internal_ldhdr {int l_stoff; int l_nsyms; } ;
struct bfd_link_info {TYPE_2__* hash; } ;
typedef scalar_t__ bfd_size_type ;
typedef char bfd_byte ;
typedef int bfd_boolean ;
struct TYPE_34__ {scalar_t__ xvec; int flags; struct TYPE_34__* my_archive; } ;
typedef TYPE_8__ bfd ;
typedef int asection ;
struct TYPE_35__ {struct xcoff_import_file* imports; } ;
struct TYPE_28__ {scalar_t__ creator; } ;
struct TYPE_26__ {char* contents; int keep_contents; } ;
struct TYPE_25__ {unsigned int import_file_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*) ;
 void* VAR_11 ;
 struct xcoff_import_file* FUNC_2 (TYPE_8__*,scalar_t__) ;
 int VAR_12 ;
 int VAR_13 ;
 char* FUNC_3 (TYPE_8__*) ;
 int * FUNC_4 (TYPE_8__*,char*) ;
 void* VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 char* FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_8__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_8__*) ;
 int FUNC_9 (TYPE_8__*,struct internal_ldhdr*) ;
 int FUNC_10 (TYPE_8__*,char*,struct internal_ldhdr*) ;
 int FUNC_11 (TYPE_8__*,char*,struct internal_ldsym*) ;
 TYPE_15__* FUNC_12 (TYPE_8__*,int *) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*,int ,int) ;
 int FUNC_15 (char*,char const*) ;
 scalar_t__ FUNC_16 (char const*) ;
 char* FUNC_17 (char const*,char) ;
 int FUNC_18 (int ,char*) ;
 int FUNC_19 (int ,char*) ;
 TYPE_13__* FUNC_20 (TYPE_8__*) ;
 int FUNC_21 (TYPE_8__*,int *) ;
 TYPE_9__* FUNC_22 (struct bfd_link_info*) ;
 struct xcoff_link_hash_entry* FUNC_23 (TYPE_9__*,char const*,int ,int ,int ) ;

__attribute__((used)) static bfd_boolean
FUNC_24 (bfd *VAR_18, struct bfd_link_info *VAR_19)
{
  asection *VAR_20;
  bfd_byte *VAR_21;
  struct internal_ldhdr VAR_22;
  const char *VAR_23;
  bfd_byte *VAR_24, *VAR_25;
  struct xcoff_import_file *VAR_26;
  const char *VAR_27;
  const char *VAR_28;
  const char *VAR_29;
  unsigned int VAR_30;
  struct xcoff_import_file **VAR_31;



   if (VAR_19->hash->creator != VAR_18->xvec)
    {
      FUNC_1)
 (FUNC_0("%s: XCOFF shared object when not producing XCOFF output"),
  FUNC_3 (VAR_18));
      FUNC_7 (VAR_12);
      return VAR_1;
    }
  VAR_20 = FUNC_4 (VAR_18, ".loader");
  if (VAR_20 == ((void*)0))
    {
      FUNC_1)
 (FUNC_0("%s: dynamic object with no .loader section"),
  FUNC_3 (VAR_18));
      FUNC_7 (VAR_13);
      return VAR_1;
    }

  if (! FUNC_21 (VAR_18, VAR_20))
    return VAR_1;
  VAR_21 = FUNC_12 (VAR_18, VAR_20)->contents;



  FUNC_6 (VAR_18);

  FUNC_10 (VAR_18, VAR_21, &VAR_22);

  VAR_23 = (char *) VAR_21 + VAR_22.l_stoff;

  VAR_24 = VAR_21 + FUNC_9(VAR_18, &VAR_22);

  VAR_25 = VAR_24 + VAR_22.l_nsyms * FUNC_8(VAR_18);

  for (; VAR_24 < VAR_25; VAR_24 += FUNC_8(VAR_18))
    {
      struct internal_ldsym VAR_32;
      char VAR_33[VAR_3 + 1];
      const char *VAR_34;
      struct xcoff_link_hash_entry *VAR_35;

      FUNC_11 (VAR_18, VAR_24, &VAR_32);


      if ((VAR_32.l_smtype & VAR_2) == 0)
 continue;

      if (VAR_32._l._l_l._l_zeroes == 0)
 VAR_34 = VAR_23 + VAR_32._l._l_l._l_offset;
      else
 {
   FUNC_14 (VAR_33, VAR_32._l._l_name, VAR_3);
   VAR_33[VAR_3] = '\0';
   VAR_34 = VAR_33;
 }






      VAR_35 = FUNC_23 (FUNC_22 (VAR_19), VAR_34, VAR_4,
      VAR_4, VAR_4);
      if (VAR_35 == ((void*)0))
 return VAR_1;

      VAR_35->flags |= VAR_5;




      if ((VAR_35->root.type == VAR_16
    || VAR_35->root.type == VAR_17)
   && (VAR_35->root.u.undef.abfd == ((void*)0)
       || (VAR_35->root.u.undef.abfd->flags & VAR_0) == 0))
 VAR_35->root.u.undef.abfd = VAR_18;

      if (VAR_35->root.type == VAR_15)
 {
   VAR_35->root.type = VAR_16;
   VAR_35->root.u.undef.abfd = VAR_18;

 }

      if (VAR_35->smclas == VAR_9
   || VAR_35->root.type == VAR_16
   || VAR_35->root.type == VAR_17)
 VAR_35->smclas = VAR_32.l_smclas;






      if (VAR_35->smclas == VAR_10
   && (VAR_35->root.type == VAR_16
       || VAR_35->root.type == VAR_17))
 {

   VAR_35->root.type = VAR_14;
   VAR_35->root.u.def.section = VAR_11;
   VAR_35->root.u.def.value = VAR_32.l_value;
 }



      if (VAR_35->smclas == VAR_7
   || (VAR_35->smclas == VAR_10 && VAR_34[0] != '.'))
 VAR_35->flags |= VAR_6;
      if ((VAR_35->flags & VAR_6) != 0)
 {
   struct xcoff_link_hash_entry *VAR_36;

   VAR_36 = VAR_35->descriptor;
   if (VAR_36 == ((void*)0))
     {
       char *VAR_37;

       VAR_37 = FUNC_5 ((bfd_size_type) FUNC_16 (VAR_34) + 2);
       if (VAR_37 == ((void*)0))
  return VAR_1;
       VAR_37[0] = '.';
       FUNC_15 (VAR_37 + 1, VAR_34);
       VAR_36 = FUNC_23 (FUNC_22 (VAR_19), VAR_37,
         VAR_4, VAR_4, VAR_4);
       FUNC_13 (VAR_37);
       if (VAR_36 == ((void*)0))
  return VAR_1;

       if (VAR_36->root.type == VAR_15)
  {
    VAR_36->root.type = VAR_16;
    VAR_36->root.u.undef.abfd = VAR_18;


  }

       VAR_36->descriptor = VAR_35;
       VAR_35->descriptor = VAR_36;
     }

   VAR_36->flags |= VAR_5;
   if (VAR_36->smclas == VAR_9)
     VAR_36->smclas = VAR_8;




   if (VAR_35->smclas == VAR_10
       && (VAR_36->root.type == VAR_16
    || VAR_36->root.type == VAR_17))
     {
       VAR_36->smclas = VAR_10;
       VAR_36->root.type = VAR_14;
       VAR_36->root.u.def.section = VAR_11;
       VAR_36->root.u.def.value = VAR_32.l_value;
     }
 }
    }

  if (VAR_21 != ((void*)0) && ! FUNC_12 (VAR_18, VAR_20)->keep_contents)
    {
      FUNC_13 (FUNC_12 (VAR_18, VAR_20)->contents);
      FUNC_12 (VAR_18, VAR_20)->contents = ((void*)0);
    }


  VAR_26 = FUNC_2 (VAR_18, (bfd_size_type) sizeof (struct xcoff_import_file));
  if (VAR_26 == ((void*)0))
    return VAR_1;
  VAR_26->next = ((void*)0);




  VAR_26->path = "";
  if (VAR_18->my_archive == ((void*)0))
    {
      VAR_27 = FUNC_3 (VAR_18);
      VAR_28 = "";
    }
  else
    {
      VAR_27 = FUNC_3 (VAR_18->my_archive);
      VAR_28 = FUNC_3 (VAR_18);
    }
  VAR_29 = FUNC_17 (VAR_27, '/');
  if (VAR_29 != ((void*)0))
    VAR_27 = VAR_29 + 1;
  VAR_26->file = VAR_27;
  VAR_26->member = VAR_28;



  for (VAR_31 = &FUNC_22 (VAR_19)->imports, VAR_30 = 1;
       *VAR_31 != ((void*)0);
       VAR_31 = &(*VAR_31)->next, ++VAR_30)
    ;
  *VAR_31 = VAR_26;

  FUNC_20 (VAR_18)->import_file_id = VAR_30;

  return VAR_4;
}

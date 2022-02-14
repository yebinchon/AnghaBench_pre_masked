
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int bfd_byte ;
typedef scalar_t__ bfd_boolean ;
typedef int bfd ;
struct TYPE_18__ {unsigned int sh_info; int sh_size; int sh_link; int sh_offset; } ;
struct TYPE_19__ {unsigned int cverrefs; unsigned int cverdefs; TYPE_3__* verdef; TYPE_5__ dynverdef_hdr; TYPE_1__* verref; TYPE_5__ dynverref_hdr; } ;
struct TYPE_17__ {size_t vda_next; struct TYPE_17__* vda_nextptr; int * vda_nodename; int vda_name; } ;
struct TYPE_16__ {unsigned int vd_ndx; size_t vd_next; unsigned int vd_cnt; size_t vd_aux; int * vd_nodename; TYPE_4__* vd_auxptr; struct TYPE_16__* vd_nextdef; int * vd_bfd; scalar_t__ vd_flags; int vd_version; } ;
struct TYPE_15__ {size_t vna_next; unsigned int vna_other; struct TYPE_15__* vna_nextptr; int * vna_nodename; int vna_name; } ;
struct TYPE_14__ {unsigned int vn_cnt; size_t vn_aux; size_t vn_next; struct TYPE_14__* vn_nextref; TYPE_2__* vn_auxptr; int * vn_filename; int vn_file; int * vn_bfd; } ;
typedef TYPE_1__ Elf_Internal_Verneed ;
typedef TYPE_2__ Elf_Internal_Vernaux ;
typedef TYPE_3__ Elf_Internal_Verdef ;
typedef TYPE_4__ Elf_Internal_Verdaux ;
typedef TYPE_5__ Elf_Internal_Shdr ;
typedef int Elf_External_Verneed ;
typedef int Elf_External_Vernaux ;
typedef int Elf_External_Verdef ;
typedef int Elf_External_Verdaux ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int *,TYPE_4__*) ;
 int FUNC_2 (int *,int *,TYPE_3__*) ;
 int FUNC_3 (int *,int *,TYPE_2__*) ;
 int FUNC_4 (int *,int *,TYPE_1__*) ;
 TYPE_4__* FUNC_5 (int *,int) ;
 void* FUNC_6 (int *,unsigned int,int) ;
 int FUNC_7 (int *,int,int *) ;
 int * FUNC_8 (int *) ;
 void* FUNC_9 (int *,int ,int ) ;
 int * FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int *,int ,int ) ;
 void* FUNC_12 (int *,unsigned int,int) ;
 scalar_t__ FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *) ;
 TYPE_8__* FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (TYPE_3__*,TYPE_3__*,int) ;

bfd_boolean
FUNC_18 (bfd *VAR_5, bfd_boolean VAR_6)
{
  bfd_byte *VAR_7 = ((void*)0);
  unsigned int VAR_8 = 0;

  if (FUNC_14 (VAR_5) != 0)
    {
      Elf_Internal_Shdr *VAR_9;
      Elf_External_Verneed *VAR_10;
      Elf_Internal_Verneed *VAR_11;
      unsigned int VAR_12;
      bfd_byte *VAR_13;

      VAR_9 = &FUNC_15 (VAR_5)->dynverref_hdr;

      FUNC_15 (VAR_5)->verref = FUNC_12 (VAR_5, VAR_9->sh_info,
           sizeof (Elf_Internal_Verneed));
      if (FUNC_15 (VAR_5)->verref == ((void*)0))
 goto error_return;

      FUNC_15 (VAR_5)->cverrefs = VAR_9->sh_info;

      VAR_7 = FUNC_10 (VAR_9->sh_size);
      if (VAR_7 == ((void*)0))
 {
error_return_verref:
   FUNC_15 (VAR_5)->verref = ((void*)0);
   FUNC_15 (VAR_5)->cverrefs = 0;
   goto error_return;
 }
      if (FUNC_11 (VAR_5, VAR_9->sh_offset, VAR_1) != 0
   || FUNC_7 (VAR_7, VAR_9->sh_size, VAR_5) != VAR_9->sh_size)
 goto error_return_verref;

      if (VAR_9->sh_info && VAR_9->sh_size < sizeof (Elf_External_Verneed))
 goto error_return_verref;

      FUNC_0 (sizeof (Elf_External_Verneed)
    == sizeof (Elf_External_Vernaux));
      VAR_13 = VAR_7 + VAR_9->sh_size - sizeof (Elf_External_Verneed);
      VAR_10 = (Elf_External_Verneed *) VAR_7;
      VAR_11 = FUNC_15 (VAR_5)->verref;
      for (VAR_12 = 0; VAR_12 < VAR_9->sh_info; VAR_12++, VAR_11++)
 {
   Elf_External_Vernaux *VAR_14;
   Elf_Internal_Vernaux *VAR_15;
   unsigned int VAR_16;

   FUNC_4 (VAR_5, VAR_10, VAR_11);

   VAR_11->vn_bfd = VAR_5;

   VAR_11->vn_filename =
     FUNC_9 (VAR_5, VAR_9->sh_link,
          VAR_11->vn_file);
   if (VAR_11->vn_filename == ((void*)0))
     goto error_return_verref;

   if (VAR_11->vn_cnt == 0)
     VAR_11->vn_auxptr = ((void*)0);
   else
     {
       VAR_11->vn_auxptr = FUNC_6 (VAR_5, VAR_11->vn_cnt,
      sizeof (Elf_Internal_Vernaux));
       if (VAR_11->vn_auxptr == ((void*)0))
  goto error_return_verref;
     }

   if (VAR_11->vn_aux
       > (size_t) (VAR_13 - (bfd_byte *) VAR_10))
     goto error_return_verref;

   VAR_14 = ((Elf_External_Vernaux *)
        ((bfd_byte *) VAR_10 + VAR_11->vn_aux));
   VAR_15 = VAR_11->vn_auxptr;
   for (VAR_16 = 0; VAR_16 < VAR_11->vn_cnt; VAR_16++, VAR_15++)
     {
       FUNC_3 (VAR_5, VAR_14, VAR_15);

       VAR_15->vna_nodename =
  FUNC_9 (VAR_5, VAR_9->sh_link,
       VAR_15->vna_name);
       if (VAR_15->vna_nodename == ((void*)0))
  goto error_return_verref;

       if (VAR_16 + 1 < VAR_11->vn_cnt)
  VAR_15->vna_nextptr = VAR_15 + 1;
       else
  VAR_15->vna_nextptr = ((void*)0);

       if (VAR_15->vna_next
    > (size_t) (VAR_13 - (bfd_byte *) VAR_14))
  goto error_return_verref;

       VAR_14 = ((Elf_External_Vernaux *)
     ((bfd_byte *) VAR_14 + VAR_15->vna_next));

       if (VAR_15->vna_other > VAR_8)
  VAR_8 = VAR_15->vna_other;
     }

   if (VAR_12 + 1 < VAR_9->sh_info)
     VAR_11->vn_nextref = VAR_11 + 1;
   else
     VAR_11->vn_nextref = ((void*)0);

   if (VAR_11->vn_next
       > (size_t) (VAR_13 - (bfd_byte *) VAR_10))
     goto error_return_verref;

   VAR_10 = ((Elf_External_Verneed *)
        ((bfd_byte *) VAR_10 + VAR_11->vn_next));
 }

      FUNC_16 (VAR_7);
      VAR_7 = ((void*)0);
    }

  if (FUNC_13 (VAR_5) != 0)
    {
      Elf_Internal_Shdr *VAR_17;
      Elf_External_Verdef *VAR_18;
      Elf_Internal_Verdef *VAR_19;
      Elf_Internal_Verdef *VAR_20;
      Elf_Internal_Verdef VAR_21;
      unsigned int VAR_22;
      unsigned int VAR_23;
      bfd_byte *VAR_24, *VAR_25;

      VAR_17 = &FUNC_15 (VAR_5)->dynverdef_hdr;

      VAR_7 = FUNC_10 (VAR_17->sh_size);
      if (VAR_7 == ((void*)0))
 goto error_return;
      if (FUNC_11 (VAR_5, VAR_17->sh_offset, VAR_1) != 0
   || FUNC_7 (VAR_7, VAR_17->sh_size, VAR_5) != VAR_17->sh_size)
 goto error_return;

      if (VAR_17->sh_info && VAR_17->sh_size < sizeof (Elf_External_Verdef))
 goto error_return;

      FUNC_0 (sizeof (Elf_External_Verdef)
    >= sizeof (Elf_External_Verdaux));
      VAR_24 = VAR_7 + VAR_17->sh_size
    - sizeof (Elf_External_Verdef);
      VAR_25 = VAR_7 + VAR_17->sh_size
    - sizeof (Elf_External_Verdaux);




      VAR_18 = (Elf_External_Verdef *) VAR_7;
      VAR_23 = 0;
      for (VAR_22 = 0; VAR_22 < VAR_17->sh_info; ++VAR_22)
 {
   FUNC_2 (VAR_5, VAR_18, &VAR_21);

   if ((VAR_21.vd_ndx & ((unsigned) VAR_3)) > VAR_23)
     VAR_23 = VAR_21.vd_ndx & ((unsigned) VAR_3);

   if (VAR_21.vd_next
       > (size_t) (VAR_24 - (bfd_byte *) VAR_18))
     goto error_return;

   VAR_18 = ((Elf_External_Verdef *)
       ((bfd_byte *) VAR_18 + VAR_21.vd_next));
 }

      if (VAR_6)
 {
   if (VAR_8 > VAR_23)
     VAR_23 = ++VAR_8;
   else
     VAR_8 = ++VAR_23;
 }
      FUNC_15 (VAR_5)->verdef = FUNC_12 (VAR_5, VAR_23,
           sizeof (Elf_Internal_Verdef));
      if (FUNC_15 (VAR_5)->verdef == ((void*)0))
 goto error_return;

      FUNC_15 (VAR_5)->cverdefs = VAR_23;

      VAR_18 = (Elf_External_Verdef *) VAR_7;
      VAR_20 = FUNC_15 (VAR_5)->verdef;
      for (VAR_22 = 0; VAR_22 < VAR_17->sh_info; VAR_22++)
 {
   Elf_External_Verdaux *VAR_26;
   Elf_Internal_Verdaux *VAR_27;
   unsigned int VAR_28;

   FUNC_2 (VAR_5, VAR_18, &VAR_21);

   if ((VAR_21.vd_ndx & VAR_3) == 0)
     {
error_return_verdef:
       FUNC_15 (VAR_5)->verdef = ((void*)0);
       FUNC_15 (VAR_5)->cverdefs = 0;
       goto error_return;
     }

   VAR_19 = &VAR_20[(VAR_21.vd_ndx & VAR_3) - 1];
   FUNC_17 (VAR_19, &VAR_21, sizeof (Elf_Internal_Verdef));

   VAR_19->vd_bfd = VAR_5;

   if (VAR_19->vd_cnt == 0)
     VAR_19->vd_auxptr = ((void*)0);
   else
     {
       VAR_19->vd_auxptr = FUNC_6 (VAR_5, VAR_19->vd_cnt,
            sizeof (Elf_Internal_Verdaux));
       if (VAR_19->vd_auxptr == ((void*)0))
  goto error_return_verdef;
     }

   if (VAR_19->vd_aux
       > (size_t) (VAR_25 - (bfd_byte *) VAR_18))
     goto error_return_verdef;

   VAR_26 = ((Elf_External_Verdaux *)
        ((bfd_byte *) VAR_18 + VAR_19->vd_aux));
   VAR_27 = VAR_19->vd_auxptr;
   for (VAR_28 = 0; VAR_28 < VAR_19->vd_cnt; VAR_28++, VAR_27++)
     {
       FUNC_1 (VAR_5, VAR_26, VAR_27);

       VAR_27->vda_nodename =
  FUNC_9 (VAR_5, VAR_17->sh_link,
       VAR_27->vda_name);
       if (VAR_27->vda_nodename == ((void*)0))
  goto error_return_verdef;

       if (VAR_28 + 1 < VAR_19->vd_cnt)
  VAR_27->vda_nextptr = VAR_27 + 1;
       else
  VAR_27->vda_nextptr = ((void*)0);

       if (VAR_27->vda_next
    > (size_t) (VAR_25 - (bfd_byte *) VAR_26))
  goto error_return_verdef;

       VAR_26 = ((Elf_External_Verdaux *)
     ((bfd_byte *) VAR_26 + VAR_27->vda_next));
     }

   if (VAR_19->vd_cnt)
     VAR_19->vd_nodename = VAR_19->vd_auxptr->vda_nodename;

   if ((size_t) (VAR_19 - VAR_20) + 1 < VAR_23)
     VAR_19->vd_nextdef = VAR_19 + 1;
   else
     VAR_19->vd_nextdef = ((void*)0);

   VAR_18 = ((Elf_External_Verdef *)
       ((bfd_byte *) VAR_18 + VAR_19->vd_next));
 }

      FUNC_16 (VAR_7);
      VAR_7 = ((void*)0);
    }
  else if (VAR_6)
    {
      if (VAR_8 < 3)
 VAR_8 = 3;
      else
 VAR_8++;

      FUNC_15 (VAR_5)->verdef = FUNC_12 (VAR_5, VAR_8,
           sizeof (Elf_Internal_Verdef));
      if (FUNC_15 (VAR_5)->verdef == ((void*)0))
 goto error_return;

      FUNC_15 (VAR_5)->cverdefs = VAR_8;
    }


  if (VAR_6)
    {
      Elf_Internal_Verdef *VAR_29;
      Elf_Internal_Verdaux *VAR_30;

      VAR_29 = &FUNC_15 (VAR_5)->verdef[VAR_8 - 1];;

      VAR_29->vd_version = VAR_4;
      VAR_29->vd_flags = 0;
      VAR_29->vd_ndx = VAR_8;
      VAR_29->vd_cnt = 1;

      VAR_29->vd_bfd = VAR_5;

      VAR_29->vd_nodename = FUNC_8 (VAR_5);
      if (VAR_29->vd_nodename == ((void*)0))
 goto error_return_verdef;
      VAR_29->vd_nextdef = ((void*)0);
      VAR_29->vd_auxptr = FUNC_5 (VAR_5, sizeof (Elf_Internal_Verdaux));
      if (VAR_29->vd_auxptr == ((void*)0))
 goto error_return_verdef;

      VAR_30 = VAR_29->vd_auxptr;
      VAR_30->vda_nodename = VAR_29->vd_nodename;
      VAR_30->vda_nextptr = ((void*)0);
    }

  return VAR_2;

 error_return:
  if (VAR_7 != ((void*)0))
    FUNC_16 (VAR_7);
  return VAR_0;
}

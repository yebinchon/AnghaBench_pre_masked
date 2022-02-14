
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {int id; int flags; int align; int size; int* data; TYPE_4__* sec; TYPE_3__** sympp; TYPE_3__* sym; int name; } ;
typedef TYPE_1__ sinfo ;
typedef int flagword ;
struct TYPE_17__ {char* name; int ordinal; int hint; int import_name; int noname; int data; } ;
typedef TYPE_2__ export_type ;
typedef int bfd_vma ;
typedef int bfd ;
struct TYPE_18__ {scalar_t__ value; void* flags; TYPE_4__* section; void* name; } ;
typedef TYPE_3__ asymbol ;
struct TYPE_19__ {int reloc_count; TYPE_5__** orelocation; void* name; struct TYPE_19__* output_section; } ;
typedef TYPE_4__ asection ;
struct TYPE_20__ {int address; TYPE_3__** sym_ptr_ptr; void* howto; int addend; } ;
typedef TYPE_5__ arelent ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;




 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;



 char* VAR_21 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_3__*,int ) ;
 void* FUNC_5 (int *) ;
 TYPE_4__* FUNC_6 (int *,int ) ;
 int VAR_22 ;
 int * FUNC_7 (char*,int ) ;
 int * FUNC_8 (char*,int ) ;
 int FUNC_9 (int *,int,char*) ;
 void* FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int ,int ) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,TYPE_4__*,int) ;
 int FUNC_15 (int *,TYPE_4__*,int*,int ,int) ;
 int FUNC_16 (int *,TYPE_4__*,int) ;
 int FUNC_17 (int *,TYPE_4__*,int) ;
 int FUNC_18 (int *,TYPE_4__*,int ) ;
 int FUNC_19 (int *,TYPE_3__**,int) ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 int FUNC_20 (int ,char*) ;
 void* VAR_25 ;
 int FUNC_21 (int ,char*) ;
 scalar_t__ VAR_26 ;
 void* FUNC_22 (char*,char*) ;
 void* FUNC_23 (char*,char*) ;
 int FUNC_24 (int*,int ,int) ;
 int FUNC_25 (int*,int ,int) ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 int VAR_29 ;
 TYPE_1__* VAR_30 ;
 int FUNC_26 (char*,char*,char*,int) ;
 int FUNC_27 (char*,char*) ;
 int FUNC_28 (char*) ;
 char* FUNC_29 (int ) ;
 void* FUNC_30 (int) ;

__attribute__((used)) static bfd *
FUNC_31 (export_type *VAR_31, int VAR_32)
{
  bfd * VAR_33;
  asymbol * VAR_34;
  asymbol * VAR_35 = 0;
  asymbol * VAR_36;
  asymbol * VAR_37;
  asymbol ** VAR_38;
  asymbol ** VAR_39;
  asymbol * VAR_40[VAR_20 + 4 + 0 + 1];
  flagword VAR_41;
  char * VAR_42 = FUNC_30 (FUNC_28 (VAR_21) + 10);
  int VAR_43 = 0;


  FUNC_26 (VAR_42, "%s%05d.o", VAR_21, VAR_32);

  VAR_33 = FUNC_8 (VAR_42, VAR_12);

  if (!VAR_33)

    FUNC_20 (FUNC_0("bfd_open failed open stub file: %s"), VAR_42);


  FUNC_21 (FUNC_0("Creating stub file: %s"), VAR_42);

  FUNC_12 (VAR_33, VAR_22);
  FUNC_11 (VAR_33, VAR_10, 0);






  VAR_41 = FUNC_2 (VAR_33);


  for (VAR_32 = 0; VAR_32 < VAR_20; VAR_32++)
    {
      sinfo *VAR_44 = VAR_30 + VAR_32;

      if (VAR_44->id != VAR_32)
 FUNC_1();
      VAR_44->sec = FUNC_6 (VAR_33, VAR_44->name);
      FUNC_16 (VAR_33,
        VAR_44->sec,
        VAR_44->flags & VAR_41);

      FUNC_14(VAR_33, VAR_44->sec, VAR_44->align);
      VAR_44->sec->output_section = VAR_44->sec;
      VAR_44->sym = FUNC_5(VAR_33);
      VAR_44->sym->name = VAR_44->sec->name;
      VAR_44->sym->section = VAR_44->sec;
      VAR_44->sym->flags = VAR_6;
      VAR_44->sym->value = 0;
      VAR_40[VAR_43] = VAR_44->sym;
      VAR_44->sympp = VAR_40 + VAR_43;
      VAR_44->size = 0;
      VAR_44->data = ((void*)0);

      VAR_43++;
    }

  if (! VAR_31->data)
    {
      VAR_34 = FUNC_5 (VAR_33);
      VAR_34->name = FUNC_22 ("", VAR_31->name);
 VAR_34->section = VAR_30[128].sec;

      VAR_34->flags = VAR_5;
      VAR_34->value = 0;





      VAR_40[VAR_43++] = VAR_34;
    }




  if (VAR_24)
    {
      VAR_35 = FUNC_5 (VAR_33);
      VAR_35->name = FUNC_22 ("___imp", VAR_31->name);
      VAR_35->section = VAR_30[133].sec;
      VAR_35->flags = VAR_5;
      VAR_35->value = 0;
    }

  VAR_36 = FUNC_5 (VAR_33);
  VAR_36->name = FUNC_22 ("__imp_", VAR_31->name);
  VAR_36->section = VAR_30[133].sec;
  VAR_36->flags = VAR_5;
  VAR_36->value = 0;

  VAR_37 = FUNC_5 (VAR_33);

  VAR_37->name = VAR_25;
  VAR_37->section = (asection *) &VAR_23;
  VAR_37->flags = 0;
  VAR_37->value = 0;

  VAR_39 = VAR_40 + VAR_43;
  if (VAR_24)
    VAR_40[VAR_43++] = VAR_35;
  VAR_40[VAR_43++] = VAR_36;

  VAR_38 = VAR_40 + VAR_43;
  VAR_40[VAR_43++] = VAR_37;
  VAR_40[VAR_43] = 0;

  for (VAR_32 = 0; VAR_32 < VAR_20; VAR_32++)
    {
      sinfo *VAR_45 = VAR_30 + VAR_32;
      asection *VAR_46 = VAR_45->sec;
      arelent *VAR_47;
      arelent **VAR_48;

      switch (VAR_32)
 {
 case 128:
   if (! VAR_31->data)
     {
       VAR_45->size = VAR_15;
       VAR_45->data = FUNC_30 (VAR_15);
       FUNC_24 (VAR_45->data, VAR_13, VAR_15);


       VAR_47 = FUNC_30 (sizeof (arelent));

       VAR_48 = FUNC_30 (sizeof (arelent *) * 2);
       VAR_48[0] = VAR_47;
       VAR_48[1] = 0;

       VAR_47->address = VAR_14;
       VAR_47->addend = 0;

       if (VAR_26 == VAR_17)
  {
    VAR_47->howto = FUNC_10 (VAR_33,
            VAR_0);
    VAR_47->sym_ptr_ptr = VAR_39;
  }
       else if (VAR_26 == VAR_19)
  {
    VAR_47->howto = FUNC_10 (VAR_33,
            VAR_3);
    VAR_47->sym_ptr_ptr = VAR_39;
  }
       else
  {
    VAR_47->howto = FUNC_10 (VAR_33, VAR_1);
    VAR_47->sym_ptr_ptr = VAR_30[133].sympp;
  }
       VAR_46->orelocation = VAR_48;
       VAR_46->reloc_count = 1;
     }
   break;
 case 134:
 case 133:
   VAR_45->data = FUNC_30 (4);
   VAR_45->size = 4;

   if (VAR_31->noname)
     {
       VAR_45->data[0] = VAR_31->ordinal ;
       VAR_45->data[1] = VAR_31->ordinal >> 8;
       VAR_45->data[2] = VAR_31->ordinal >> 16;
       VAR_45->data[3] = 0x80;
     }
   else
     {
       VAR_46->reloc_count = 1;
       FUNC_25 (VAR_45->data, 0, VAR_45->size);
       VAR_47 = FUNC_30 (sizeof (arelent));
       VAR_48 = FUNC_30 (sizeof (arelent *) * 2);
       VAR_48[0] = VAR_47;
       VAR_48[1] = 0;
       VAR_47->address = 0;
       VAR_47->addend = 0;
       VAR_47->howto = FUNC_10 (VAR_33, VAR_4);
       VAR_47->sym_ptr_ptr = VAR_30[132].sympp;
       VAR_46->orelocation = VAR_48;
     }

   break;

 case 132:
   if (!VAR_31->noname)
     {



       int VAR_49 = VAR_31->hint;
       VAR_45->size = FUNC_28 (FUNC_29 (VAR_31->import_name)) + 3;
       VAR_45->data = FUNC_30 (VAR_45->size);
       VAR_45->data[0] = VAR_49 & 0xff;
       VAR_45->data[1] = VAR_49 >> 8;
       FUNC_27 ((char *) VAR_45->data + 2, FUNC_29 (VAR_31->import_name));
     }
   break;
 case 131:
   VAR_45->size = 4;
   VAR_45->data = FUNC_30 (4);
   FUNC_25 (VAR_45->data, 0, VAR_45->size);
   VAR_47 = FUNC_30 (sizeof (arelent));
   VAR_48 = FUNC_30 (sizeof (arelent *) * 2);
   VAR_48[0] = VAR_47;
   VAR_47->address = 0;
   VAR_47->addend = 0;
   VAR_47->howto = FUNC_10 (VAR_33, VAR_4);
   VAR_47->sym_ptr_ptr = VAR_38;
   VAR_46->orelocation = VAR_48;
   VAR_46->reloc_count = 1;
   break;
 }
    }

  {
    bfd_vma VAR_50 = 0;

    for (VAR_32 = 0; VAR_32 < VAR_20; VAR_32++)
      {
 sinfo *VAR_51 = VAR_30 + VAR_32;

 FUNC_17 (VAR_33, VAR_51->sec, VAR_51->size);
 FUNC_18 (VAR_33, VAR_51->sec, VAR_50);
      }
  }

  for (VAR_32 = 0; VAR_32 < VAR_20; VAR_32++)
    {
      sinfo *VAR_52 = VAR_30 + VAR_32;

      if (VAR_32 == 133 && VAR_28)
 continue;

      if (VAR_32 == 134 && VAR_27)
 continue;

      FUNC_15 (VAR_33, VAR_52->sec,
    VAR_52->data, 0,
    VAR_52->size);
    }

  FUNC_19 (VAR_33, VAR_40, VAR_43);
  FUNC_3 (VAR_33);
  VAR_33 = FUNC_7 (VAR_42, VAR_11);
  return VAR_33;
}

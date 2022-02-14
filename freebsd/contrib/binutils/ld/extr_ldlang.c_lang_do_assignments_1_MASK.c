
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_45__ TYPE_9__ ;
typedef struct TYPE_44__ TYPE_8__ ;
typedef struct TYPE_43__ TYPE_7__ ;
typedef struct TYPE_42__ TYPE_6__ ;
typedef struct TYPE_41__ TYPE_5__ ;
typedef struct TYPE_40__ TYPE_4__ ;
typedef struct TYPE_39__ TYPE_3__ ;
typedef struct TYPE_38__ TYPE_2__ ;
typedef struct TYPE_37__ TYPE_23__ ;
typedef struct TYPE_36__ TYPE_22__ ;
typedef struct TYPE_35__ TYPE_21__ ;
typedef struct TYPE_34__ TYPE_1__ ;
typedef struct TYPE_33__ TYPE_18__ ;
typedef struct TYPE_32__ TYPE_17__ ;
typedef struct TYPE_31__ TYPE_16__ ;
typedef struct TYPE_30__ TYPE_15__ ;
typedef struct TYPE_29__ TYPE_14__ ;
typedef struct TYPE_28__ TYPE_13__ ;
typedef struct TYPE_27__ TYPE_12__ ;
typedef struct TYPE_26__ TYPE_11__ ;
typedef struct TYPE_25__ TYPE_10__ ;


struct TYPE_28__ {TYPE_15__* head; } ;
struct TYPE_29__ {TYPE_13__ children; } ;
struct TYPE_27__ {unsigned int size; } ;
struct TYPE_26__ {int exp; } ;
struct TYPE_25__ {int * fill; } ;
struct TYPE_45__ {TYPE_17__* section; } ;
struct TYPE_44__ {int howto; scalar_t__ addend_value; int addend_exp; } ;
struct TYPE_42__ {int type; scalar_t__ value; int exp; } ;
struct TYPE_39__ {TYPE_15__* head; } ;
struct TYPE_40__ {TYPE_3__ children; } ;
struct TYPE_38__ {TYPE_15__* head; } ;
struct TYPE_31__ {TYPE_22__* bfd_section; int * fill; TYPE_2__ children; int ignored; } ;
struct TYPE_34__ {int type; TYPE_15__* next; } ;
struct TYPE_30__ {TYPE_14__ group_statement; TYPE_12__ padding_statement; TYPE_11__ assignment_statement; TYPE_10__ fill_statement; TYPE_9__ input_section; TYPE_8__ reloc_statement; TYPE_6__ data_statement; TYPE_4__ wild_statement; TYPE_16__ output_section_statement; TYPE_1__ header; } ;
typedef TYPE_15__ lang_statement_union_type ;
typedef TYPE_16__ lang_output_section_statement_type ;
typedef int fill_type ;
typedef int bfd_vma ;
struct TYPE_32__ {int flags; unsigned int size; } ;
typedef TYPE_17__ asection ;
struct TYPE_43__ {scalar_t__ value; int valid_p; TYPE_5__* section; } ;
struct TYPE_41__ {scalar_t__ vma; } ;
struct TYPE_37__ {TYPE_15__* head; } ;
struct TYPE_36__ {int flags; unsigned int size; int vma; } ;
struct TYPE_35__ {TYPE_7__ result; } ;
struct TYPE_33__ {int relocatable; } ;



 unsigned int VAR_0 ;
 int FUNC_0 () ;

 unsigned int VAR_1 ;

 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 unsigned int VAR_6 ;

 int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (unsigned int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 TYPE_22__* VAR_7 ;
 unsigned int FUNC_5 (int ) ;
 TYPE_23__ VAR_8 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,TYPE_22__*,int *) ;
 TYPE_21__ VAR_9 ;
 TYPE_18__ VAR_10 ;

__attribute__((used)) static bfd_vma
FUNC_8 (lang_statement_union_type *VAR_11,
         lang_output_section_statement_type *VAR_12,
         fill_type *VAR_13,
         bfd_vma VAR_14)
{
  for (; VAR_11 != ((void*)0); VAR_11 = VAR_11->header.next)
    {
      switch (VAR_11->header.type)
 {
 case 140:
   VAR_14 = FUNC_8 (VAR_8.head,
           VAR_12, VAR_13, VAR_14);
   break;

 case 133:
   {
     lang_output_section_statement_type *VAR_15;

     VAR_15 = &(VAR_11->output_section_statement);
     if (VAR_15->bfd_section != ((void*)0) && !VAR_15->ignored)
       {
  VAR_14 = VAR_15->bfd_section->vma;

  FUNC_8 (VAR_15->children.head, VAR_15, VAR_15->fill, VAR_14);


  if ((VAR_15->bfd_section->flags & VAR_4) != 0
      || (VAR_15->bfd_section->flags & VAR_5) == 0
      || VAR_10.relocatable)
    VAR_14 += FUNC_1 (VAR_15->bfd_section->size);
       }
   }
   break;

 case 128:

   VAR_14 = FUNC_8 (VAR_11->wild_statement.children.head,
           VAR_12, VAR_13, VAR_14);
   break;

 case 134:
 case 132:
 case 129:
   break;

 case 139:
   FUNC_7 (VAR_11->data_statement.exp, VAR_7, &VAR_14);
   if (VAR_9.result.valid_p)
     VAR_11->data_statement.value = (VAR_9.result.value
           + VAR_9.result.section->vma);
   else
     FUNC_6 (FUNC_3("%F%P: invalid data statement\n"));
   {
     unsigned int VAR_16;
     switch (VAR_11->data_statement.type)
       {
       default:
  FUNC_4 ();
       case 145:
       case 143:
  VAR_16 = VAR_2;
  break;
       case 146:
  VAR_16 = VAR_1;
  break;
       case 144:
  VAR_16 = VAR_6;
  break;
       case 147:
  VAR_16 = VAR_0;
  break;
       }
     if (VAR_16 < FUNC_2 ((unsigned) 1))
       VAR_16 = FUNC_2 ((unsigned) 1);
     VAR_14 += FUNC_1 (VAR_16);
   }
   break;

 case 130:
   FUNC_7 (VAR_11->reloc_statement.addend_exp,
    VAR_7, &VAR_14);
   if (VAR_9.result.valid_p)
     VAR_11->reloc_statement.addend_value = VAR_9.result.value;
   else
     FUNC_6 (FUNC_3("%F%P: invalid reloc statement\n"));
   VAR_14 += FUNC_1 (FUNC_5 (VAR_11->reloc_statement.howto));
   break;

 case 136:
   {
     asection *VAR_17 = VAR_11->input_section.section;

     if ((VAR_17->flags & VAR_3) == 0)
       VAR_14 += FUNC_1 (VAR_17->size);
   }
   break;

 case 135:
   break;

 case 138:
   VAR_13 = VAR_11->fill_statement.fill;
   break;

 case 141:
   FUNC_7 (VAR_11->assignment_statement.exp,
    VAR_12->bfd_section,
    &VAR_14);
   break;

 case 131:
   VAR_14 += FUNC_1 (VAR_11->padding_statement.size);
   break;

 case 137:
   VAR_14 = FUNC_8 (VAR_11->group_statement.children.head,
           VAR_12, VAR_13, VAR_14);
   break;

 default:
   FUNC_0 ();
   break;

 case 142:
   break;
 }
    }
  return VAR_14;
}

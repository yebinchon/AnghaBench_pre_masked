
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_8__ ;
typedef struct TYPE_33__ TYPE_7__ ;
typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;


struct TYPE_27__ {scalar_t__ external_part; scalar_t__ me_record; } ;
struct TYPE_31__ {TYPE_1__ r; int * offset; } ;
struct TYPE_34__ {unsigned char* input_p; scalar_t__ first_byte; TYPE_7__* abfd; } ;
struct TYPE_30__ {int number_of_maus_in_address; int number_of_bits_mau; } ;
struct TYPE_29__ {char* processor; char const* module_name; } ;
struct TYPE_32__ {TYPE_5__ w; TYPE_8__ h; TYPE_4__ ad; TYPE_3__ mb; scalar_t__ section_table_size; int * section_table; scalar_t__ external_reference_max_index; int external_reference_min_index; int external_symbol_min_index; scalar_t__ external_symbol_max_index; scalar_t__ section_count; void* read_data; void* read_symbols; } ;
typedef TYPE_6__ ieee_data_type ;
typedef int file_ptr ;
typedef int buffer ;
typedef int bfd_target ;
typedef scalar_t__ bfd_size_type ;
typedef int bfd_boolean ;
typedef int bfd_arch_info_type ;
struct TYPE_28__ {TYPE_6__* ieee_data; } ;
struct TYPE_33__ {char const* filename; TYPE_2__ tdata; int const* xvec; int flags; int const* arch_info; } ;
typedef TYPE_7__ bfd ;


 scalar_t__ FUNC_0 (char*,char*) ;
 void* VAR_0 ;
 int VAR_1 ;
 TYPE_6__* FUNC_1 (TYPE_7__*) ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 char FUNC_2 (char) ;
 scalar_t__ FUNC_3 (TYPE_7__*,scalar_t__) ;
 int FUNC_4 (void*,scalar_t__,TYPE_7__*) ;
 int VAR_7 ;
 int FUNC_5 (TYPE_7__*,TYPE_6__*) ;
 int * FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (TYPE_7__*,int ,int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_9 (TYPE_7__*) ;
 int FUNC_10 (TYPE_7__*) ;
 int FUNC_11 (TYPE_7__*) ;
 int FUNC_12 (TYPE_7__*) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_13 (TYPE_8__*) ;
 int FUNC_14 (TYPE_8__*,int *) ;
 int FUNC_15 (TYPE_8__*,int *) ;
 int FUNC_16 (TYPE_8__*) ;
 void* FUNC_17 (TYPE_8__*) ;
 scalar_t__ FUNC_18 (char*,char*) ;
 int FUNC_19 (char*,char*) ;
 int FUNC_20 (char*,char*,int) ;
 int FUNC_21 (char*,char*,int) ;
 int FUNC_22 (TYPE_8__*) ;
 unsigned int FUNC_23 (TYPE_8__*) ;

__attribute__((used)) static const bfd_target *
FUNC_24 (bfd *VAR_12)
{
  char *VAR_13;
  unsigned int VAR_14;
  ieee_data_type *VAR_15;
  unsigned char VAR_16[300];
  ieee_data_type *VAR_17 = FUNC_1 (VAR_12);
  bfd_size_type VAR_18;

  VAR_12->tdata.ieee_data = 0;
  FUNC_9 (VAR_12);

  VAR_15 = FUNC_1 (VAR_12);
  if (FUNC_7 (VAR_12, (file_ptr) 0, VAR_6) != 0)
    goto fail;


  FUNC_4 ((void *) VAR_16, (bfd_size_type) sizeof (VAR_16), VAR_12);

  VAR_15->h.input_p = VAR_16;
  if (FUNC_23 (&(VAR_15->h)) != VAR_4)
    goto got_wrong_format;

  VAR_15->read_symbols = VAR_0;
  VAR_15->read_data = VAR_0;
  VAR_15->section_count = 0;
  VAR_15->external_symbol_max_index = 0;
  VAR_15->external_symbol_min_index = VAR_2;
  VAR_15->external_reference_min_index = VAR_3;
  VAR_15->external_reference_max_index = 0;
  VAR_15->h.abfd = VAR_12;
  VAR_15->section_table = ((void*)0);
  VAR_15->section_table_size = 0;

  VAR_13 = VAR_15->mb.processor = FUNC_17 (&(VAR_15->h));
  if (FUNC_18 (VAR_13, "LIBRARY") == 0)
    goto got_wrong_format;
  VAR_15->mb.module_name = FUNC_17 (&(VAR_15->h));
  if (VAR_12->filename == (const char *) ((void*)0))
    VAR_12->filename = VAR_15->mb.module_name;


  {
    const bfd_arch_info_type *VAR_19;
    char VAR_20[10];





    if ((VAR_13[0] == '6') && (VAR_13[1] == '8'))
      {
 if (VAR_13[2] == '3')
   {
     switch (VAR_13[3])
       {
       case '0':
       case '2':
       case '5':
  FUNC_19 (VAR_20, "68000");
  break;

       case '3':

       case '6':
       case '7':
  FUNC_19 (VAR_20, "68332");
  break;

       case '4':
  if (VAR_13[4] == '9')
    FUNC_19 (VAR_20, "68030");
  else
    FUNC_19 (VAR_20, "68332");
  break;

       default:
  FUNC_19 (VAR_20, "68332");
       }
   }
 else if (FUNC_2 (VAR_13[3]) == 'F')
   FUNC_19 (VAR_20, "68332");
 else if ((FUNC_2 (VAR_13[3]) == 'C')
   && ((FUNC_2 (VAR_13[2]) == 'E')
       || (FUNC_2 (VAR_13[2]) == 'H')
       || (FUNC_2 (VAR_13[2]) == 'L')))
   {
     FUNC_19 (VAR_20, "68");
     FUNC_20 (VAR_20, VAR_13 + 4, 7);
     VAR_20[9] = '\0';
   }
 else
   {
     FUNC_21 (VAR_20, VAR_13, 9);
     VAR_20[9] = '\0';
   }
      }
    else if ((FUNC_0 (VAR_13, "cpu32"))
      || (FUNC_0 (VAR_13, "CPU32")))
      FUNC_19 (VAR_20, "68332");
    else
      {
 FUNC_21 (VAR_20, VAR_13, 9);
 VAR_20[9] = '\0';
      }

    VAR_19 = FUNC_6 (VAR_20);
    if (VAR_19 == 0)
      goto got_wrong_format;
    VAR_12->arch_info = VAR_19;
  }

  if (FUNC_22 (&(VAR_15->h)) != (int) VAR_8)
    goto fail;

  FUNC_13 (&(VAR_15->h));

  if (! FUNC_15 (&(VAR_15->h), &VAR_15->ad.number_of_bits_mau))
    goto fail;

  if (! FUNC_15 (&(VAR_15->h), &VAR_15->ad.number_of_maus_in_address))
    goto fail;


  if (FUNC_22 (&(VAR_15->h)) == (int) VAR_10
      || FUNC_22 (&(VAR_15->h)) == (int) VAR_11)
    FUNC_13 (&(VAR_15->h));

  for (VAR_14 = 0; VAR_14 < VAR_5; VAR_14++)
    {
      bfd_boolean VAR_21;

      if (FUNC_16 (&(VAR_15->h)) != (int) VAR_9)
 goto fail;

      if (FUNC_23 (&(VAR_15->h)) != VAR_14)
 goto fail;

      VAR_15->w.offset[VAR_14] = FUNC_14 (&(VAR_15->h), &VAR_21);
      if (! VAR_21)
 goto fail;
    }

  if (VAR_15->w.r.external_part != 0)
    VAR_12->flags = VAR_1;






  VAR_18 = VAR_15->w.r.me_record + 1;
  FUNC_1 (VAR_12)->h.first_byte = FUNC_3 (VAR_15->h.abfd, VAR_18);
  if (!FUNC_1 (VAR_12)->h.first_byte)
    goto fail;
  if (FUNC_7 (VAR_12, (file_ptr) 0, VAR_6) != 0)
    goto fail;


  FUNC_4 ((void *) (FUNC_1 (VAR_12)->h.first_byte),
     (bfd_size_type) VAR_15->w.r.me_record + 1, VAR_12);

  FUNC_12 (VAR_12);

  if (! FUNC_10 (VAR_12))
    goto fail;



  if (! FUNC_11 (VAR_12))
    goto fail;

  return VAR_12->xvec;
got_wrong_format:
  FUNC_8 (VAR_7);
fail:
  FUNC_5 (VAR_12, VAR_15);
  VAR_12->tdata.ieee_data = VAR_17;
  return (const bfd_target *) ((void*)0);
}

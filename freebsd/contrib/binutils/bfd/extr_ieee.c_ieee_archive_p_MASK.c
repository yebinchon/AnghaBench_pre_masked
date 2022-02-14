
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_10__ ;


struct TYPE_27__ {TYPE_4__* abfd; scalar_t__ file_offset; } ;
typedef TYPE_2__ ieee_ar_obstack_type ;
struct TYPE_30__ {unsigned char* first_byte; unsigned char* input_p; TYPE_4__* abfd; } ;
struct TYPE_28__ {int element_count; TYPE_5__ h; TYPE_10__* elements; scalar_t__ element_index; } ;
typedef TYPE_3__ ieee_ar_data_type ;
typedef scalar_t__ file_ptr ;
typedef int buffer ;
typedef int bfd_target ;
typedef int bfd_size_type ;
struct TYPE_26__ {TYPE_3__* ieee_ar_data; } ;
struct TYPE_29__ {TYPE_1__ tdata; int const* xvec; } ;
typedef TYPE_4__ bfd ;
struct TYPE_25__ {scalar_t__ file_offset; } ;


 TYPE_3__* FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* FUNC_2 (TYPE_4__*,int) ;
 int FUNC_3 (void*,int,TYPE_4__*) ;
 int VAR_2 ;
 TYPE_2__* FUNC_4 (int) ;
 TYPE_2__* FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (TYPE_4__*,TYPE_3__*) ;
 scalar_t__ FUNC_7 (TYPE_4__*,scalar_t__,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_2__*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (TYPE_10__*,TYPE_2__*,size_t) ;
 scalar_t__ FUNC_12 (TYPE_5__*) ;
 int FUNC_13 (TYPE_5__*) ;
 int FUNC_14 (TYPE_5__*) ;
 char* FUNC_15 (TYPE_5__*) ;
 scalar_t__ FUNC_16 (char*,char*) ;
 scalar_t__ FUNC_17 (TYPE_5__*) ;

__attribute__((used)) static const bfd_target *
FUNC_18 (bfd *VAR_4)
{
  char *VAR_5;
  unsigned int VAR_6;
  unsigned char VAR_7[512];
  file_ptr VAR_8 = 0;
  ieee_ar_data_type *VAR_9 = VAR_4->tdata.ieee_ar_data;
  ieee_ar_data_type *VAR_10;
  bfd_size_type VAR_11;
  ieee_ar_obstack_type *VAR_12 = ((void*)0);
  bfd_size_type VAR_13 = sizeof (ieee_ar_data_type);

  VAR_4->tdata.ieee_ar_data = FUNC_2 (VAR_4, VAR_13);
  if (!VAR_4->tdata.ieee_ar_data)
    goto error_ret_restore;
  VAR_10 = FUNC_0 (VAR_4);



  FUNC_3 ((void *) VAR_7, (bfd_size_type) sizeof (VAR_7), VAR_4);

  VAR_10->h.first_byte = VAR_7;
  VAR_10->h.input_p = VAR_7;

  VAR_10->h.abfd = VAR_4;

  if (FUNC_17 (&(VAR_10->h)) != VAR_0)
    goto got_wrong_format_error;

  FUNC_13 (&(VAR_10->h));
  VAR_5 = FUNC_15 (&(VAR_10->h));
  if (FUNC_16 (VAR_5, "LIBRARY") != 0)
    goto got_wrong_format_error;


  FUNC_15 (&(VAR_10->h));

  VAR_10->element_count = 0;
  VAR_10->element_index = 0;

  FUNC_13 (&(VAR_10->h));
  FUNC_12 (&(VAR_10->h));
  FUNC_12 (&(VAR_10->h));

  VAR_11 = 10;
  VAR_12 = FUNC_4 (VAR_11 * sizeof *VAR_12);
  if (VAR_12 == ((void*)0))
    goto error_return;


  while (1)
    {
      int VAR_14;
      ieee_ar_obstack_type *VAR_15;

      VAR_14 = FUNC_14 (&(VAR_10->h));
      if (VAR_14 != (int) VAR_3)
 break;

      if (VAR_10->element_count >= VAR_11)
 {
   ieee_ar_obstack_type *VAR_16;

   VAR_11 *= 2;
   VAR_16 = FUNC_5 (VAR_12, VAR_11 * sizeof (* VAR_12));
   if (VAR_16 == ((void*)0))
     goto error_return;
   VAR_12 = VAR_16;
 }

      VAR_15 = &VAR_12[VAR_10->element_count];
      VAR_10->element_count++;

      FUNC_12 (&(VAR_10->h));
      VAR_15->file_offset = FUNC_12 (&(VAR_10->h));
      VAR_15->abfd = (bfd *) ((void*)0);


      if ((size_t) FUNC_10 (FUNC_1 (VAR_4)) > sizeof (VAR_7) / 2)
 {

   VAR_8 += FUNC_10 (FUNC_1 (VAR_4));
   if (FUNC_7 (VAR_4, VAR_8, VAR_1) != 0)
     goto error_return;


   FUNC_3 ((void *) VAR_7, (bfd_size_type) sizeof (VAR_7), VAR_4);
   VAR_10->h.first_byte = VAR_7;
   VAR_10->h.input_p = VAR_7;
 }
    }

  VAR_13 = VAR_10->element_count;
  VAR_13 *= sizeof *VAR_10->elements;
  VAR_10->elements = FUNC_2 (VAR_4, VAR_13);
  if (VAR_10->elements == ((void*)0))
    goto error_return;

  FUNC_11 (VAR_10->elements, VAR_12, (size_t) VAR_13);
  FUNC_9 (VAR_12);
  VAR_12 = ((void*)0);


  for (VAR_6 = 2; VAR_6 < VAR_10->element_count; VAR_6++)
    {
      if (FUNC_7 (VAR_4, VAR_10->elements[VAR_6].file_offset, VAR_1) != 0)
 goto error_return;


      FUNC_3 ((void *) VAR_7, (bfd_size_type) sizeof (VAR_7), VAR_4);
      VAR_10->h.first_byte = VAR_7;
      VAR_10->h.input_p = VAR_7;

      FUNC_13 (&(VAR_10->h));
      FUNC_13 (&(VAR_10->h));
      FUNC_12 (&(VAR_10->h));

      if (FUNC_12 (&(VAR_10->h)) != 0)

 VAR_10->elements[VAR_6].file_offset = 0;
      else
 VAR_10->elements[VAR_6].file_offset = FUNC_12 (&(VAR_10->h));
    }



  return VAR_4->xvec;

 got_wrong_format_error:
  FUNC_8 (VAR_2);
 error_return:
  if (VAR_12 != ((void*)0))
    FUNC_9 (VAR_12);
  FUNC_6 (VAR_4, VAR_10);
 error_ret_restore:
  VAR_4->tdata.ieee_ar_data = VAR_9;

  return ((void*)0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct stat {scalar_t__ st_mtime; } ;
struct TYPE_14__ {TYPE_2__* abfd; } ;
struct orl {unsigned int namidx; scalar_t__* name; TYPE_1__ u; } ;
struct ar_hdr {char* ar_mode; char* ar_fmag; int ar_size; int * ar_gid; int * ar_uid; int ar_date; void** ar_name; } ;
typedef int file_ptr ;
typedef unsigned int bfd_size_type ;
typedef int bfd_byte ;
typedef int bfd_boolean ;
struct TYPE_15__ {struct TYPE_15__* archive_next; struct TYPE_15__* archive_head; int filename; } ;
typedef TYPE_2__ bfd ;
struct TYPE_16__ {int armap_start; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_0 (int) ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (TYPE_2__*,unsigned int,int *) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (char*,unsigned int,TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int *) ;
 int * FUNC_8 (TYPE_2__*,unsigned int) ;
 unsigned int FUNC_9 (scalar_t__,unsigned int*,unsigned int,unsigned int) ;
 TYPE_3__* FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (void**,int ,int) ;
 int FUNC_12 (void*,int ,int) ;
 int FUNC_13 (int ,char*,int) ;
 int FUNC_14 (int ,struct stat*) ;
 int FUNC_15 (void**,int ) ;
 unsigned int FUNC_16 (scalar_t__) ;

bfd_boolean
FUNC_17 (bfd *VAR_12,
   unsigned int VAR_13,
   struct orl *VAR_14,
   unsigned int VAR_15,
   int VAR_16)
{
  unsigned int VAR_17, VAR_18;
  bfd_size_type VAR_19;
  int VAR_20;
  unsigned int VAR_21;
  unsigned int VAR_22;
  file_ptr VAR_23;
  struct ar_hdr VAR_24;
  struct stat VAR_25;
  unsigned int VAR_26;
  bfd_byte VAR_27[4];
  bfd_byte *VAR_28;
  bfd *VAR_29;
  bfd *VAR_30;



  for (VAR_18 = 0; ((unsigned int) 1 << VAR_18) <= 2 * VAR_15; VAR_18++)
    ;
  VAR_17 = 1 << VAR_18;

  VAR_19 = VAR_17 * 8;
  VAR_20 = VAR_16 % 2;
  VAR_21 = VAR_16 + VAR_20;


  VAR_22 = VAR_19 + VAR_21 + 8;

  VAR_23 = VAR_10 + sizeof (struct ar_hdr) + VAR_22 + VAR_13;

  FUNC_12 ((void *) &VAR_24, 0, sizeof VAR_24);


  FUNC_15 (VAR_24.ar_name, FUNC_10 (VAR_12)->armap_start);
  VAR_24.ar_name[VAR_4] = VAR_6;
  VAR_24.ar_name[VAR_3] =
    (FUNC_6 (VAR_12)
     ? VAR_0
     : VAR_5);
  VAR_24.ar_name[VAR_8] = VAR_6;
  VAR_24.ar_name[VAR_7] =
    FUNC_4 (VAR_12) ? VAR_0 : VAR_5;
  FUNC_11 (VAR_24.ar_name + VAR_2, VAR_1, sizeof VAR_1 - 1);






  FUNC_14 (VAR_12->filename, &VAR_25);
  FUNC_13 (VAR_24.ar_date, "%ld", (long) (VAR_25.st_mtime + 60));



  VAR_24.ar_uid[0] = '0';
  VAR_24.ar_gid[0] = '0';

  VAR_24.ar_mode[0] = '6';
  VAR_24.ar_mode[1] = '4';
  VAR_24.ar_mode[2] = '4';

  FUNC_13 (VAR_24.ar_size, "%-10d", (int) VAR_22);

  VAR_24.ar_fmag[0] = '`';
  VAR_24.ar_fmag[1] = '\012';


  for (VAR_26 = 0; VAR_26 < sizeof (struct ar_hdr); VAR_26++)
   if (((char *) (&VAR_24))[VAR_26] == '\0')
     (((char *) (&VAR_24))[VAR_26]) = ' ';

  if (FUNC_5 ((void *) &VAR_24, (bfd_size_type) sizeof (struct ar_hdr), VAR_12)
      != sizeof (struct ar_hdr))
    return VAR_9;

  FUNC_2 (VAR_12, VAR_17, VAR_27);
  if (FUNC_5 ((void *) VAR_27, (bfd_size_type) 4, VAR_12) != 4)
    return VAR_9;

  VAR_28 = FUNC_8 (VAR_12, VAR_19);
  if (!VAR_28)
    return VAR_9;

  VAR_29 = VAR_12->archive_head;
  VAR_30 = VAR_29;
  for (VAR_26 = 0; VAR_26 < VAR_15; VAR_26++)
    {
      unsigned int VAR_31, VAR_32 = 0;



      if (VAR_14[VAR_26].u.abfd != VAR_30)
 {
   do
     {
       VAR_23 += FUNC_3 (VAR_29) + sizeof (struct ar_hdr);
       VAR_23 += VAR_23 % 2;
       VAR_29 = VAR_29->archive_next;
     }
   while (VAR_29 != VAR_14[VAR_26].u.abfd);
 }

      VAR_30 = VAR_29;

      VAR_31 = FUNC_9 (*VAR_14[VAR_26].name, &VAR_32, VAR_17, VAR_18);
      if (FUNC_1 (VAR_12, (VAR_28 + (VAR_31 * 8) + 4)) != 0)
 {
   unsigned int VAR_33;


   for (VAR_33 = (VAR_31 + VAR_32) & (VAR_17 - 1);
        VAR_33 != VAR_31;
        VAR_33 = (VAR_33 + VAR_32) & (VAR_17 - 1))
     if (FUNC_1 (VAR_12, (VAR_28 + (VAR_33 * 8) + 4)) == 0)
       break;

   FUNC_0 (VAR_33 != VAR_31);

   VAR_31 = VAR_33;
 }

      FUNC_2 (VAR_12, VAR_14[VAR_26].namidx, (VAR_28 + VAR_31 * 8));
      FUNC_2 (VAR_12, VAR_23, (VAR_28 + VAR_31 * 8 + 4));
    }

  if (FUNC_5 ((void *) VAR_28, VAR_19, VAR_12) != VAR_19)
    return VAR_9;

  FUNC_7 (VAR_12, VAR_28);


  FUNC_2 (VAR_12, VAR_21, VAR_27);
  if (FUNC_5 ((void *) VAR_27, (bfd_size_type) 4, VAR_12) != 4)
    return VAR_9;
  for (VAR_26 = 0; VAR_26 < VAR_15; VAR_26++)
    {
      bfd_size_type VAR_34;

      VAR_34 = FUNC_16 (*VAR_14[VAR_26].name) + 1;
      if (FUNC_5 ((void *) (*VAR_14[VAR_26].name), VAR_34, VAR_12) != VAR_34)
 return VAR_9;
    }



  if (VAR_20)
    {
      if (FUNC_5 ("", (bfd_size_type) 1, VAR_12) != 1)
 return VAR_9;
    }

  return VAR_11;
}

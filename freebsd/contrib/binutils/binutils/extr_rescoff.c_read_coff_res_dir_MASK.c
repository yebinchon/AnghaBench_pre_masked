
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int windres_bfd ;
typedef void* unichar ;
struct extern_res_entry {int rva; int name; } ;
struct extern_res_directory {int const* id_count; int const* name_count; int const* minor; int const* major; int time; int characteristics; } ;
struct coff_file_info {int const* data; int const* data_end; } ;
typedef int rc_uint_type ;
struct TYPE_10__ {int length; void** name; } ;
struct TYPE_11__ {unsigned long id; TYPE_1__ n; } ;
struct TYPE_13__ {int named; TYPE_2__ u; } ;
typedef TYPE_4__ rc_res_id ;
struct TYPE_12__ {void* res; TYPE_6__* dir; } ;
struct TYPE_14__ {int subdir; struct TYPE_14__* next; TYPE_3__ u; TYPE_4__ id; } ;
typedef TYPE_5__ rc_res_entry ;
struct TYPE_15__ {TYPE_5__* entries; void* minor; void* major; void* time; void* characteristics; } ;
typedef TYPE_6__ rc_res_directory ;
typedef int const bfd_byte ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct coff_file_info const*,int ) ;
 void* FUNC_2 (int *,int const*,struct coff_file_info const*,TYPE_4__ const*) ;
 scalar_t__ FUNC_3 (int) ;
 void* FUNC_4 (int *,int const*,int) ;
 void* FUNC_5 (int *,int ,int) ;

__attribute__((used)) static rc_res_directory *
FUNC_6 (windres_bfd *VAR_0, const bfd_byte *VAR_1,
     const struct coff_file_info *VAR_2,
     const rc_res_id *VAR_3, int VAR_4)
{
  const struct extern_res_directory *VAR_5;
  rc_res_directory *VAR_6;
  int VAR_7, VAR_8, VAR_9;
  rc_res_entry **VAR_10;
  const struct extern_res_entry *VAR_11;

  if ((size_t) (VAR_2->data_end - VAR_1) < sizeof (struct extern_res_directory))
    FUNC_1 (VAR_2, FUNC_0("directory"));

  VAR_5 = (const struct extern_res_directory *) VAR_1;

  VAR_6 = (rc_res_directory *) FUNC_3 (sizeof (rc_res_directory));
  VAR_6->characteristics = FUNC_5 (VAR_0, VAR_5->characteristics, 4);
  VAR_6->time = FUNC_5 (VAR_0, VAR_5->time, 4);
  VAR_6->major = FUNC_4 (VAR_0, VAR_5->major, 2);
  VAR_6->minor = FUNC_4 (VAR_0, VAR_5->minor, 2);
  VAR_6->entries = ((void*)0);

  VAR_7 = FUNC_4 (VAR_0, VAR_5->name_count, 2);
  VAR_8 = FUNC_4 (VAR_0, VAR_5->id_count, 2);

  VAR_10 = &VAR_6->entries;



  VAR_11 = (const struct extern_res_entry *) (VAR_5 + 1);

  for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++, VAR_11++)
    {
      rc_uint_type VAR_12, VAR_13;
      rc_res_entry *VAR_14;
      const bfd_byte *VAR_15;
      int VAR_16, VAR_17;

      if ((const bfd_byte *) VAR_11 >= VAR_2->data_end)
 FUNC_1 (VAR_2, FUNC_0("named directory entry"));

      VAR_12 = FUNC_5 (VAR_0, VAR_11->name, 4);
      VAR_13 = FUNC_5 (VAR_0, VAR_11->rva, 4);


      VAR_12 &=~ 0x80000000;

      if (VAR_12 > (rc_uint_type) (VAR_2->data_end - VAR_2->data))
 FUNC_1 (VAR_2, FUNC_0("directory entry name"));

      VAR_15 = VAR_2->data + VAR_12;

      VAR_14 = (rc_res_entry *) FUNC_3 (sizeof *VAR_14);
      VAR_14->next = ((void*)0);
      VAR_14->id.named = 1;
      VAR_16 = FUNC_4 (VAR_0, VAR_15, 2);
      VAR_14->id.u.n.length = VAR_16;
      VAR_14->id.u.n.name = (unichar *) FUNC_3 (VAR_16 * sizeof (unichar));
      for (VAR_17 = 0; VAR_17 < VAR_16; VAR_17++)
 VAR_14->id.u.n.name[VAR_17] = FUNC_4 (VAR_0, VAR_15 + VAR_17 * 2 + 2, 2);

      if (VAR_4 == 0)
 VAR_3 = &VAR_14->id;

      if ((VAR_13 & 0x80000000) != 0)
 {
   VAR_13 &=~ 0x80000000;
   if (VAR_13 >= (rc_uint_type) (VAR_2->data_end - VAR_2->data))
     FUNC_1 (VAR_2, FUNC_0("named subdirectory"));
   VAR_14->subdir = 1;
   VAR_14->u.dir = FUNC_6 (VAR_0, VAR_2->data + VAR_13, VAR_2, VAR_3,
      VAR_4 + 1);
 }
      else
 {
   if (VAR_13 >= (rc_uint_type) (VAR_2->data_end - VAR_2->data))
     FUNC_1 (VAR_2, FUNC_0("named resource"));
   VAR_14->subdir = 0;
   VAR_14->u.res = FUNC_2 (VAR_0, VAR_2->data + VAR_13, VAR_2, VAR_3);
 }

      *VAR_10 = VAR_14;
      VAR_10 = &VAR_14->next;
    }

  for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++, VAR_11++)
    {
      unsigned long VAR_18, VAR_19;
      rc_res_entry *VAR_20;

      if ((const bfd_byte *) VAR_11 >= VAR_2->data_end)
 FUNC_1 (VAR_2, FUNC_0("ID directory entry"));

      VAR_18 = FUNC_5 (VAR_0, VAR_11->name, 4);
      VAR_19 = FUNC_5 (VAR_0, VAR_11->rva, 4);

      VAR_20 = (rc_res_entry *) FUNC_3 (sizeof *VAR_20);
      VAR_20->next = ((void*)0);
      VAR_20->id.named = 0;
      VAR_20->id.u.id = VAR_18;

      if (VAR_4 == 0)
 VAR_3 = &VAR_20->id;

      if ((VAR_19 & 0x80000000) != 0)
 {
   VAR_19 &=~ 0x80000000;
   if (VAR_19 >= (rc_uint_type) (VAR_2->data_end - VAR_2->data))
     FUNC_1 (VAR_2, FUNC_0("ID subdirectory"));
   VAR_20->subdir = 1;
   VAR_20->u.dir = FUNC_6 (VAR_0, VAR_2->data + VAR_19, VAR_2, VAR_3,
      VAR_4 + 1);
 }
      else
 {
   if (VAR_19 >= (rc_uint_type) (VAR_2->data_end - VAR_2->data))
     FUNC_1 (VAR_2, FUNC_0("ID resource"));
   VAR_20->subdir = 0;
   VAR_20->u.res = FUNC_2 (VAR_0, VAR_2->data + VAR_19, VAR_2, VAR_3);
 }

      *VAR_10 = VAR_20;
      VAR_10 = &VAR_20->next;
    }

  return VAR_6;
}

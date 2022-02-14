
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int unichar ;
struct extern_res_entry {int rva; int name; } ;
struct extern_res_directory {int * id_count; int * name_count; int * minor; int * major; int time; int characteristics; } ;
struct TYPE_13__ {int length; } ;
struct TYPE_17__ {int length; } ;
struct coff_write_info {int dirsize; int dirstrsize; TYPE_4__ dataents; int wrbfd; TYPE_9__ dirs; TYPE_9__ dirstrs; } ;
typedef int rc_uint_type ;
struct TYPE_14__ {int res; TYPE_7__* dir; } ;
struct TYPE_10__ {int length; int* name; } ;
struct TYPE_11__ {int id; TYPE_1__ n; } ;
struct TYPE_12__ {TYPE_2__ u; scalar_t__ named; } ;
struct TYPE_15__ {TYPE_5__ u; scalar_t__ subdir; TYPE_3__ id; struct TYPE_15__* next; } ;
typedef TYPE_6__ rc_res_entry ;
struct TYPE_16__ {int characteristics; int time; int major; int minor; TYPE_6__* entries; } ;
typedef TYPE_7__ rc_res_directory ;
typedef int bfd_byte ;


 int * FUNC_0 (TYPE_9__*,int) ;
 int FUNC_1 (int ,struct coff_write_info*) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_4 (const rc_res_directory *VAR_0, struct coff_write_info *VAR_1)
{
  struct extern_res_directory *VAR_2;
  int VAR_3, VAR_4;
  const rc_res_entry *VAR_5;
  struct extern_res_entry *VAR_6;



  VAR_2 = ((struct extern_res_directory *)
  FUNC_0 (&VAR_1->dirs, sizeof (*VAR_2)));

  FUNC_3 (VAR_1->wrbfd, VAR_2->characteristics, VAR_0->characteristics);
  FUNC_3 (VAR_1->wrbfd, VAR_2->time, VAR_0->time);
  FUNC_2 (VAR_1->wrbfd, VAR_2->major, VAR_0->major);
  FUNC_2 (VAR_1->wrbfd, VAR_2->minor, VAR_0->minor);

  VAR_3 = 0;
  VAR_4 = 0;
  for (VAR_5 = VAR_0->entries; VAR_5 != ((void*)0); VAR_5 = VAR_5->next)
    {
      if (VAR_5->id.named)
 ++VAR_4;
      else
 ++VAR_3;
    }

  FUNC_2 (VAR_1->wrbfd, VAR_2->name_count, VAR_4);
  FUNC_2 (VAR_1->wrbfd, VAR_2->id_count, VAR_3);





  VAR_6 = ((struct extern_res_entry *)
  FUNC_0 (&VAR_1->dirs, (VAR_3 + VAR_4) * sizeof (*VAR_6)));
  for (VAR_5 = VAR_0->entries; VAR_5 != ((void*)0); VAR_5 = VAR_5->next, VAR_6++)
    {
      if (! VAR_5->id.named)
 FUNC_3 (VAR_1->wrbfd, VAR_6->name, VAR_5->id.u.id);
      else
 {
   bfd_byte *VAR_7;
   rc_uint_type VAR_8;




   FUNC_3 (VAR_1->wrbfd, VAR_6->name,
       0x80000000 | (VAR_1->dirsize + VAR_1->dirstrs.length));

   VAR_7 = FUNC_0 (&VAR_1->dirstrs, VAR_5->id.u.n.length * 2 + 2);
   FUNC_2 (VAR_1->wrbfd, VAR_7, VAR_5->id.u.n.length);
   for (VAR_8 = 0; VAR_8 < VAR_5->id.u.n.length; VAR_8++)
     FUNC_2 (VAR_1->wrbfd, VAR_7 + (VAR_8 + 1) * sizeof (unichar), VAR_5->id.u.n.name[VAR_8]);
 }

      if (VAR_5->subdir)
 {
   FUNC_3 (VAR_1->wrbfd, VAR_6->rva, 0x80000000 | VAR_1->dirs.length);
   FUNC_4 (VAR_5->u.dir, VAR_1);
 }
      else
 {
   FUNC_3 (VAR_1->wrbfd, VAR_6->rva,
       VAR_1->dirsize + VAR_1->dirstrsize + VAR_1->dataents.length);

   FUNC_1 (VAR_5->u.res, VAR_1);
 }
    }
}

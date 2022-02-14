
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct vmap {scalar_t__ objfile; int dend; int dstart; int bfd; int tend; int tstart; } ;
struct target_ops {struct section_table* to_sections_end; } ;
struct section_table {int endaddr; int addr; int bfd; void* the_bfd_section; } ;
struct cleanup {int dummy; } ;
struct bfd_section {int dummy; } ;
struct TYPE_9__ {int ldinfo_fd; } ;
struct TYPE_8__ {int ldinfo_fd; } ;
struct TYPE_10__ {TYPE_2__ l32; TYPE_1__ l64; } ;
typedef TYPE_3__ LdInfo ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (TYPE_3__*,int) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int) ;
 struct vmap* FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 void* FUNC_6 (int ,char*) ;
 scalar_t__ FUNC_7 (int ,struct bfd_section*,char*,int,int) ;
 int FUNC_8 () ;
 int VAR_0 ;
 int FUNC_9 (struct cleanup*) ;
 int FUNC_10 (int ,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct cleanup* FUNC_11 (int ,char**) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (struct target_ops*,int) ;
 struct vmap* VAR_3 ;
 int FUNC_14 () ;
 int FUNC_15 (struct vmap*,TYPE_3__*,int) ;
 int FUNC_16 (struct vmap*) ;
 char* FUNC_17 (int) ;
 char* FUNC_18 (char*,int) ;

void
FUNC_19 (struct target_ops *VAR_4)
{
  struct bfd_section *VAR_5;
  int VAR_6 = 0;
  LdInfo *VAR_7;
  struct vmap *VAR_8;
  int VAR_9 = FUNC_0 ();


  int VAR_10 = (int)FUNC_1 ((LdInfo *)0, VAR_9);


  int VAR_11 = VAR_10;
  char *VAR_12 = FUNC_17 (VAR_11);
  struct cleanup *VAR_13 = FUNC_11 (VAR_1, &VAR_12);

  VAR_5 = FUNC_6 (VAR_0, ".ldinfo");
  if (VAR_5 == ((void*)0))
    {
    bfd_err:
      FUNC_10 (VAR_2, "Couldn't get ldinfo from core file: %s\n",
   FUNC_4 (FUNC_5 ()));
      FUNC_9 (VAR_13);
      return;
    }
  do
    {
      int VAR_14;
      int VAR_15 = 0;


      if (FUNC_7 (VAR_0, VAR_5, VAR_12,
        VAR_6, VAR_10) == 0)
 goto bfd_err;


      VAR_14 = VAR_10;
      do
 {
   if (VAR_14 == VAR_11)
     {
       VAR_11 *= 2;
       VAR_12 = FUNC_18 (VAR_12, VAR_11);
     }
   if (FUNC_7 (VAR_0, VAR_5, &VAR_12[VAR_14],
     VAR_6 + VAR_14, 1) == 0)
     goto bfd_err;
   if (VAR_12[VAR_14++] == '\0')
     ++VAR_15;
 }
      while (VAR_15 < 2);

      VAR_7 = (LdInfo *) VAR_12;


      if (VAR_9)
 VAR_7->l64.ldinfo_fd = -1;
      else
 VAR_7->l32.ldinfo_fd = -1;


      if (VAR_6 == 0 && VAR_3 != ((void*)0))
 VAR_8 = VAR_3;
      else
 VAR_8 = FUNC_3 (VAR_7);


      VAR_6 += FUNC_2 (VAR_7, VAR_9);
      if (VAR_8 == ((void*)0))
 continue;

      FUNC_15 (VAR_8, VAR_7, VAR_9);



      if (VAR_8 != VAR_3)
 {
   struct section_table *VAR_16;

   FUNC_13 (VAR_4, 2);
   VAR_16 = VAR_4->to_sections_end - 2;

   VAR_16->bfd = VAR_8->bfd;
   VAR_16->the_bfd_section = FUNC_6 (VAR_16->bfd, ".text");
   VAR_16->addr = VAR_8->tstart;
   VAR_16->endaddr = VAR_8->tend;
   VAR_16++;

   VAR_16->bfd = VAR_8->bfd;
   VAR_16->the_bfd_section = FUNC_6 (VAR_16->bfd, ".data");
   VAR_16->addr = VAR_8->dstart;
   VAR_16->endaddr = VAR_8->dend;
 }

      FUNC_16 (VAR_8);

      if (&FUNC_12 && VAR_8 != VAR_3 && VAR_8->objfile)
 FUNC_12 (VAR_8->objfile);
    }
  while (FUNC_2 (VAR_7, VAR_9) != 0);
  FUNC_14 ();
  FUNC_8 ();
  FUNC_9 (VAR_13);
}

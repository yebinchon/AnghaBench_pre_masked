
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct remote_state {int remote_packet_size; } ;
struct cleanup {int dummy; } ;
typedef scalar_t__ bfd_vma ;
typedef scalar_t__ bfd_size_type ;
struct TYPE_9__ {TYPE_2__* sections; } ;
typedef TYPE_1__ bfd ;
struct TYPE_10__ {int flags; scalar_t__ lma; struct TYPE_10__* next; } ;
typedef TYPE_2__ asection ;
struct TYPE_11__ {char* to_shortname; } ;


 int VAR_0 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*,char*,int ,scalar_t__) ;
 char* FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 unsigned long FUNC_4 (unsigned char*,scalar_t__,int) ;
 TYPE_3__ VAR_1 ;
 int FUNC_5 (struct cleanup*) ;
 int FUNC_6 (char*,...) ;
 unsigned long FUNC_7 (char) ;
 struct remote_state* FUNC_8 () ;
 int FUNC_9 (char*,int ,int ) ;
 struct cleanup* FUNC_10 (int ,char*) ;
 char* FUNC_11 (scalar_t__) ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*,char*,long,long) ;
 scalar_t__ FUNC_15 (char*,char const*) ;
 int FUNC_16 (char*) ;
 int VAR_2 ;
 char* FUNC_17 (scalar_t__) ;

__attribute__((used)) static void
FUNC_18 (char *VAR_3, int VAR_4)
{
  struct remote_state *VAR_5 = FUNC_8 ();
  asection *VAR_6;
  unsigned long VAR_7, VAR_8;
  extern bfd *VAR_9;
  struct cleanup *VAR_10;
  char *VAR_11;
  char *VAR_12;
  const char *VAR_13;
  char *VAR_14 = FUNC_0 (VAR_5->remote_packet_size);
  bfd_size_type VAR_15;
  bfd_vma VAR_16;
  int VAR_17 = 0;
  int VAR_18 = 0;

  if (!VAR_9)
    FUNC_6 ("command cannot be used without an exec file");
  if (!VAR_1.to_shortname ||
      FUNC_15 (VAR_1.to_shortname, "remote") != 0)
    FUNC_6 ("command can only be used with remote target");

  for (VAR_6 = VAR_9->sections; VAR_6; VAR_6 = VAR_6->next)
    {
      if (!(VAR_6->flags & VAR_0))
 continue;

      VAR_15 = FUNC_3 (VAR_6);
      if (VAR_15 == 0)
 continue;

      VAR_13 = FUNC_2 (VAR_9, VAR_6);
      if (VAR_3 && FUNC_15 (VAR_3, VAR_13) != 0)
 continue;

      VAR_17 = 1;
      VAR_16 = VAR_6->lma;

      FUNC_14 (VAR_14, "qCRC:%lx,%lx", (long) VAR_16, (long) VAR_15);
      FUNC_13 (VAR_14);


      VAR_12 = FUNC_17 (VAR_15);
      VAR_10 = FUNC_10 (VAR_2, VAR_12);
      FUNC_1 (VAR_9, VAR_6, VAR_12, 0, VAR_15);
      VAR_7 = FUNC_4 ((unsigned char *) VAR_12, VAR_15, 0xffffffff);

      FUNC_9 (VAR_14, (VAR_5->remote_packet_size), 0);
      if (VAR_14[0] == 'E')
 FUNC_6 ("target memory fault, section %s, range 0x%s -- 0x%s",
        VAR_13, FUNC_11 (VAR_16), FUNC_11 (VAR_16 + VAR_15));
      if (VAR_14[0] != 'C')
 FUNC_6 ("remote target does not support this operation");

      for (VAR_8 = 0, VAR_11 = &VAR_14[1]; *VAR_11; VAR_11++)
 VAR_8 = VAR_8 * 16 + FUNC_7 (*VAR_11);

      FUNC_12 ("Section %s, range 0x%s -- 0x%s: ",
         VAR_13, FUNC_11 (VAR_16), FUNC_11 (VAR_16 + VAR_15));
      if (VAR_7 == VAR_8)
 FUNC_12 ("matched.\n");
      else
 {
   FUNC_12 ("MIS-MATCHED!\n");
   VAR_18++;
 }

      FUNC_5 (VAR_10);
    }
  if (VAR_18 > 0)
    FUNC_16 ("One or more sections of the remote executable does not match\nthe loaded file\n");

  if (VAR_3 && !VAR_17)
    FUNC_12 ("No loaded section named '%s'.\n", VAR_3);
}

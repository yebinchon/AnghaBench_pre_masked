
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct stat {int st_mtime; int st_uid; int st_gid; int st_mode; int st_size; } ;
struct bfd_in_memory {int size; } ;
struct areltdata {int parsed_size; char* arch_header; } ;
struct ar_hdr {int ar_fmag; int ar_size; int ar_mode; int ar_gid; int ar_uid; int ar_date; } ;
typedef int bfd_size_type ;
struct TYPE_5__ {int flags; struct bfd_in_memory* iostream; } ;
typedef TYPE_1__ bfd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,char*,int) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 struct areltdata* FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ,long) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (struct ar_hdr*,char,int) ;
 scalar_t__ FUNC_8 (char const*,struct stat*) ;
 int FUNC_9 (int*) ;

__attribute__((used)) static struct areltdata *
FUNC_10 (bfd *VAR_3, const char *VAR_4, bfd *VAR_5)
{
  struct stat VAR_6;
  struct areltdata *VAR_7;
  struct ar_hdr *VAR_8;
  bfd_size_type VAR_9;

  if (VAR_5 && (VAR_5->flags & VAR_1) != 0)
    {

      struct bfd_in_memory *VAR_10 = VAR_5->iostream;
      FUNC_9 (&VAR_6.st_mtime);
      VAR_6.st_uid = FUNC_4 ();
      VAR_6.st_gid = FUNC_3 ();
      VAR_6.st_mode = 0644;
      VAR_6.st_size = VAR_10->size;
    }
  else if (FUNC_8 (VAR_4, &VAR_6) != 0)
    {
      FUNC_1 (VAR_2);
      return ((void*)0);
    }

  VAR_9 = sizeof (struct ar_hdr) + sizeof (struct areltdata);
  VAR_7 = FUNC_2 (VAR_3, VAR_9);
  if (VAR_7 == ((void*)0))
    return ((void*)0);
  VAR_8 = (struct ar_hdr *) (((char *) VAR_7) + sizeof (struct areltdata));


  FUNC_7 (VAR_8, ' ', sizeof (struct ar_hdr));

  FUNC_0 (VAR_8->ar_date, sizeof (VAR_8->ar_date), "%-12ld",
                    VAR_6.st_mtime);







    FUNC_0 (VAR_8->ar_uid, sizeof (VAR_8->ar_uid), "%ld",
                      VAR_6.st_uid);







    FUNC_0 (VAR_8->ar_gid, sizeof (VAR_8->ar_gid), "%ld",
                      VAR_6.st_gid);
  FUNC_0 (VAR_8->ar_mode, sizeof (VAR_8->ar_mode), "%-8lo",
                    VAR_6.st_mode);
  FUNC_0 (VAR_8->ar_size, sizeof (VAR_8->ar_size), "%-10ld",
                    VAR_6.st_size);
  FUNC_6 (VAR_8->ar_fmag, VAR_0, 2);
  VAR_7->parsed_size = VAR_6.st_size;
  VAR_7->arch_header = (char *) VAR_8;

  return VAR_7;
}

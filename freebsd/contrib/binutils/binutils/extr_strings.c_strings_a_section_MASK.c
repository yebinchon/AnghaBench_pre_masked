
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct stat {scalar_t__ st_size; } ;
struct TYPE_6__ {scalar_t__ filesize; int filename; } ;
typedef TYPE_1__ filename_and_size_t ;
typedef int file_ptr ;
typedef scalar_t__ bfd_size_type ;
typedef int bfd ;
struct TYPE_7__ {int flags; int filepos; } ;
typedef TYPE_2__ asection ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,TYPE_2__*,void*,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int *,struct stat*) ;
 int FUNC_3 (void*) ;
 int VAR_2 ;
 int FUNC_4 (int ,int *,int ,int ,scalar_t__,void*) ;
 void* FUNC_5 (scalar_t__) ;

__attribute__((used)) static void
FUNC_6 (bfd *VAR_3, asection *VAR_4, void *VAR_5)
{
  filename_and_size_t * VAR_6;
  bfd_size_type *VAR_7;
  bfd_size_type VAR_8;
  void *VAR_9;

  if ((VAR_4->flags & VAR_0) != VAR_0)
    return;

  VAR_8 = FUNC_1 (VAR_4);

  if (VAR_8 <= 0)
    return;


  VAR_6 = (filename_and_size_t *) VAR_5;
  VAR_7 = & VAR_6->filesize;

  if (*VAR_7 == 0)
    {
      struct stat VAR_10;

      if (FUNC_2 (VAR_3, &VAR_10))
 return;


      *VAR_7 = VAR_10.st_size;
    }




  if (VAR_8 >= *VAR_7)
    return;

  VAR_9 = FUNC_5 (VAR_8);

  if (FUNC_0 (VAR_3, VAR_4, VAR_9, (file_ptr) 0, VAR_8))
    {
      VAR_2 = VAR_1;

      FUNC_4 (VAR_6->filename, ((void*)0), VAR_4->filepos,
       0, VAR_8, VAR_9);
    }

  FUNC_3 (VAR_9);
}

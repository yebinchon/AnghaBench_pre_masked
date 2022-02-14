
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int header ;
typedef scalar_t__ bfd_vma ;
typedef unsigned int bfd_size_type ;
typedef int bfd ;
struct TYPE_7__ {int flags; } ;
typedef TYPE_1__ asection ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*,unsigned char*,int ,unsigned int) ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 unsigned int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int FUNC_5 (scalar_t__,int,int ) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (unsigned char*,unsigned int) ;
 int FUNC_8 (unsigned char*,long) ;
 int FUNC_9 (unsigned char*) ;
 scalar_t__ FUNC_10 (unsigned int) ;

__attribute__((used)) static void
FUNC_11 (bfd *VAR_2, asection *VAR_3, unsigned int *VAR_4)
{
  if (VAR_3->flags & VAR_0)
    {
      bfd_size_type VAR_5 = FUNC_3 (VAR_2, VAR_3);
      bfd_vma VAR_6 = FUNC_1 (VAR_2, VAR_3);
      unsigned char *VAR_7;
      unsigned char VAR_8[8];


      if (VAR_5 == 0)
 return;
      if (VAR_4)
 *VAR_4 += VAR_5;


      FUNC_6 ("Loading section %s, size 0x%lx lma ",
         FUNC_2 (VAR_2, VAR_3), (long) VAR_5);
      FUNC_5 (VAR_6, 1, VAR_1);
      FUNC_6 ("\n");
      FUNC_4 (VAR_1);


      FUNC_8 (&VAR_8[0], (long) VAR_6);
      FUNC_8 (&VAR_8[4], (long) VAR_5);
      FUNC_7 (VAR_8, sizeof (VAR_8));



      VAR_7 = (unsigned char *) FUNC_10 (VAR_5);
      FUNC_0 (VAR_2, VAR_3, VAR_7, 0, VAR_5);
      FUNC_7 (VAR_7, VAR_5);
      FUNC_9 (VAR_7);
    }
}

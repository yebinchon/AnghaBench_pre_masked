
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_ops {int dummy; } ;
struct objfile {int dummy; } ;
typedef int bfd_byte ;
typedef int asection ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int *) ;
 int * FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int *,unsigned char*,int ,int) ;
 int FUNC_4 (int ,int *) ;
 int VAR_1 ;
 int FUNC_5 () ;
 struct objfile* FUNC_6 (char*,int,int *,int ,int ) ;

void
FUNC_7 (char *VAR_2, int VAR_3, struct target_ops *VAR_4, int VAR_5)
{
  asection *VAR_6;

  if (!VAR_5)
    return;

  VAR_6 = FUNC_2 (VAR_1, ".lib");

  if (VAR_6)
    {
      int VAR_7;
      unsigned char *VAR_8;
      struct libent
 {
   bfd_byte len[4];
   bfd_byte nameoffset[4];
 };

      VAR_7 = FUNC_4 (VAR_1, VAR_6);

      VAR_8 = (unsigned char *) FUNC_0 (VAR_7);

      FUNC_3 (VAR_1, VAR_6, VAR_8, 0, VAR_7);

      while (VAR_7 > 0)
 {
   struct libent *VAR_9;
   struct objfile *VAR_10;
   int VAR_11, VAR_12;
   char *VAR_13;

   VAR_9 = (struct libent *) VAR_8;

   VAR_11 = FUNC_1 (VAR_1, VAR_9->len);

   VAR_12 = FUNC_1 (VAR_1, VAR_9->nameoffset);

   if (VAR_11 <= 0)
     break;

   VAR_13 = (char *) VAR_9 + VAR_12 * 4;

   VAR_10 = FUNC_6 (VAR_13, VAR_3,
         ((void*)0),
         0,
         VAR_0);

   VAR_7 -= VAR_11 * 4;
   VAR_8 += VAR_11 * 4;
 }



      FUNC_5 ();
    }
}

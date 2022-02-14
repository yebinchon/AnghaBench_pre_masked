
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct header_file {int length; struct type** vector; } ;


 struct header_file* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int *,char*,int,int,int ) ;
 int VAR_2 ;
 struct type* FUNC_3 (int ,int ,int ,int *,int *) ;
 int FUNC_4 (struct type**,int ,int) ;
 int VAR_3 ;
 struct type* FUNC_5 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int* VAR_6 ;
 struct type** VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (char*,int) ;

__attribute__((used)) static struct type **
FUNC_9 (int VAR_9[2])
{
  int VAR_10 = VAR_9[0];
  int VAR_11 = VAR_9[1];
  unsigned VAR_12;
  int VAR_13;
  struct header_file *VAR_14;
  int VAR_15;

  if (VAR_10 == -1)
    return 0;

  if (VAR_10 < 0 || VAR_10 >= VAR_3)
    {
      FUNC_2 (&VAR_4,
   "Invalid symbol data: type number (%d,%d) out of range at symtab pos %d.",
   VAR_10, VAR_11, VAR_5);
      goto error_return;
    }

  if (VAR_10 == 0)
    {
      if (VAR_11 < 0)
 {





   static struct type *VAR_16;

   VAR_16 = FUNC_5 (VAR_11);
   return &VAR_16;
 }



      if (VAR_11 >= VAR_8)
 {
   VAR_12 = VAR_8;
   if (VAR_12 == 0)
     {
       VAR_8 = VAR_0;
       VAR_7 = (struct type **)
  FUNC_7 (VAR_8 * sizeof (struct type *));
     }
   while (VAR_11 >= VAR_8)
     {
       VAR_8 *= 2;
     }
   VAR_7 = (struct type **)
     FUNC_8 ((char *) VAR_7,
        (VAR_8 * sizeof (struct type *)));
   FUNC_4 (&VAR_7[VAR_12], 0,
    (VAR_8 - VAR_12) * sizeof (struct type *));
 }
      return (&VAR_7[VAR_11]);
    }
  else
    {
      VAR_13 = VAR_6[VAR_10];

      if (VAR_13 >= FUNC_1 (VAR_2))
 {
   struct type *VAR_17;
   struct type **VAR_18;

   FUNC_6 ("GDB internal error: bad real_filenum");

 error_return:
   VAR_17 = FUNC_3 (VAR_1, 0, 0, ((void*)0), ((void*)0));
   VAR_18 = (struct type **) FUNC_7 (sizeof (struct type *));
   *VAR_18 = VAR_17;
   return VAR_18;
 }

      VAR_14 = FUNC_0 (VAR_2) + VAR_13;

      VAR_15 = VAR_14->length;
      if (VAR_11 >= VAR_15)
 {
   while (VAR_11 >= VAR_14->length)
     {
       VAR_14->length *= 2;
     }
   VAR_14->vector = (struct type **)
     FUNC_8 ((char *) VAR_14->vector, VAR_14->length * sizeof (struct type *));
   FUNC_4 (&VAR_14->vector[VAR_15], 0,
    (VAR_14->length - VAR_15) * sizeof (struct type *));
 }
      return (&VAR_14->vector[VAR_11]);
    }
}

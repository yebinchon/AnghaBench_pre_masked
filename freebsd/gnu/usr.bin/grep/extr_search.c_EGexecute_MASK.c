
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int wchar_t ;
struct kwsmatch {scalar_t__ index; } ;
typedef int ptrdiff_t ;
typedef int mbstate_t ;
typedef int mbs ;
struct TYPE_7__ {int* end; } ;
struct TYPE_6__ {int not_eol; } ;
struct TYPE_8__ {TYPE_2__ regs; TYPE_1__ regexbuf; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned char) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 size_t FUNC_3 (int *,char const*,int,int*) ;
 char VAR_2 ;
 char* FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t FUNC_6 (scalar_t__,char const*,int,struct kwsmatch*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 size_t FUNC_7 (char const*,size_t,int *) ;
 size_t FUNC_8 (int*,char const*,int,int *) ;
 int FUNC_9 (int*,char const*,int) ;
 char* FUNC_10 (char const*,char,int) ;
 int FUNC_11 (int *,char,int) ;
 TYPE_5__* VAR_8 ;
 size_t VAR_9 ;
 int FUNC_12 (TYPE_1__*,char const*,int,int,TYPE_2__*) ;
 int FUNC_13 (TYPE_1__*,char const*,int,int,int,TYPE_2__*) ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static size_t
FUNC_14 (char const *VAR_11, size_t VAR_12, size_t *VAR_13, int VAR_14)
{
  register char const *VAR_15, *VAR_16, *VAR_17;
  char VAR_18 = VAR_2;
  int VAR_19;
  ptrdiff_t VAR_20, VAR_21;
  struct kwsmatch VAR_22;
  size_t VAR_23, VAR_24;
  static int VAR_25;
  static int VAR_26 = 0;







  if (!VAR_26)
    {
      char *VAR_27 = FUNC_4 ("GREP_USE_DFA");
      if (!VAR_27)
 {




   VAR_25 = 1;

 }
      else
 {
   VAR_25 = FUNC_2 (VAR_27);
 }

      VAR_26 = 1;
    }

  VAR_15 = VAR_11 + VAR_12;

  for (VAR_16 = VAR_17 = VAR_11; VAR_17 < VAR_15; VAR_16 = VAR_17)
    {
      if (!VAR_14)
 {
   if (VAR_3)
     {




       size_t VAR_28;







       VAR_28 = FUNC_6 (VAR_3, VAR_16, VAR_15 - VAR_16, &VAR_22);
       if (VAR_28 == (size_t) -1)
         goto failure;
       VAR_16 += VAR_28;


       VAR_17 = FUNC_10(VAR_16, VAR_18, VAR_15 - VAR_16);
       VAR_17++;




       while (VAR_16 > VAR_11 && VAR_16[-1] != VAR_18)
  --VAR_16;
       if (



    (VAR_22.index < VAR_4))
  goto success_in_beg_and_end;
       if (VAR_25 &&
    FUNC_3 (&VAR_1, VAR_16, VAR_17 - VAR_16, &VAR_19) == (size_t) -1)
  continue;
     }
   else
     {




       size_t VAR_29 = 0;
       if (VAR_25)
  VAR_29 = FUNC_3 (&VAR_1, VAR_16, VAR_15 - VAR_16, &VAR_19);
       if (VAR_29 == (size_t) -1)
  break;
       VAR_16 += VAR_29;
       VAR_17 = FUNC_10 (VAR_16, VAR_18, VAR_15 - VAR_16);
       VAR_17++;




       while (VAR_16 > VAR_11 && VAR_16[-1] != VAR_18)
  --VAR_16;
     }

   if (VAR_25 && !VAR_19)
     goto success_in_beg_and_end;
 }
      else
 VAR_17 = VAR_16 + VAR_12;



      for (VAR_23 = 0; VAR_23 < VAR_9; VAR_23++)
 {
   VAR_8[VAR_23].regexbuf.not_eol = 0;
   if (0 <= (VAR_20 = FUNC_13 (&(VAR_8[VAR_23].regexbuf), VAR_16,
           VAR_17 - VAR_16 - 1, 0,
           VAR_17 - VAR_16 - 1, &(VAR_8[VAR_23].regs))))
     {
       VAR_21 = VAR_8[VAR_23].regs.end[0] - VAR_20;
       if (VAR_14 && !VAR_7)
         goto success_in_start_and_len;
       if ((!VAR_6 && !VAR_7)
    || (VAR_6 && VAR_21 == VAR_17 - VAR_16 - 1))
  goto success_in_beg_and_end;







       if (VAR_7)
  while (VAR_20 >= 0)
    {
      int VAR_30 = 0;
      if (VAR_20 == 0)
        VAR_30 = 1;
      else
        {
   FUNC_1 (VAR_20 > 0);
   if (!FUNC_0 ((unsigned char) VAR_16[VAR_20 - 1]))
     VAR_30 = 1;
        }

      if (VAR_30)
        {
   int VAR_31 = 0;
   if (VAR_20 + VAR_21 == VAR_17 - VAR_16 - 1)
     VAR_31 = 1;
   else
     {
       if (!FUNC_0 ((unsigned char) VAR_16[VAR_20 + VAR_21]))
         VAR_31 = 1;
     }

   if (VAR_31)
     {
       if (!VAR_14)

         goto success_in_beg_and_end;
       else

         goto success_in_start_and_len;
     }
        }
      if (VAR_21 > 0)
        {

   --VAR_21;
   VAR_8[VAR_23].regexbuf.not_eol = 1;
   VAR_21 = FUNC_12 (&(VAR_8[VAR_23].regexbuf), VAR_16,
     VAR_20 + VAR_21, VAR_20,
     &(VAR_8[VAR_23].regs));
        }
      if (VAR_21 <= 0)
        {

   if (VAR_20 == VAR_17 - VAR_16 - 1)
     break;
   ++VAR_20;
   VAR_8[VAR_23].regexbuf.not_eol = 0;
   VAR_20 = FUNC_13 (&(VAR_8[VAR_23].regexbuf), VAR_16,
        VAR_17 - VAR_16 - 1,
        VAR_20, VAR_17 - VAR_16 - 1 - VAR_20,
        &(VAR_8[VAR_23].regs));
   VAR_21 = VAR_8[VAR_23].regs.end[0] - VAR_20;
        }
    }
     }
 }
    }

 failure:
  return (size_t) -1;

 success_in_beg_and_end:
  VAR_21 = VAR_17 - VAR_16;
  VAR_20 = VAR_16 - VAR_11;


 success_in_start_and_len:
  *VAR_13 = VAR_21;
  return VAR_20;
}

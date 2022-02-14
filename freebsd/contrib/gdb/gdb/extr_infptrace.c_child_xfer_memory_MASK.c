
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_ops {int dummy; } ;
struct ptrace_io_desc {char* piod_addr; int piod_len; void* piod_offs; int piod_op; } ;
struct mem_attrib {int dummy; } ;
struct cleanup {int dummy; } ;
typedef int caddr_t ;
typedef int PTRACE_XFER_TYPE ;
typedef int PTRACE_ARG3_TYPE ;
typedef int CORE_ADDR ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct cleanup*) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 struct cleanup* FUNC_4 (int ,int*) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (int ,int ,int ,int) ;
 int VAR_11 ;
 scalar_t__ FUNC_7 (int) ;

int
FUNC_8 (CORE_ADDR VAR_12, char *VAR_13, int VAR_14, int VAR_15,
     struct mem_attrib *VAR_16, struct target_ops *VAR_17)
{
  int VAR_18;

  CORE_ADDR VAR_19 = VAR_12 & -(CORE_ADDR) sizeof (PTRACE_XFER_TYPE);

  int VAR_20 = ((((VAR_12 + VAR_14) - VAR_19) + sizeof (PTRACE_XFER_TYPE) - 1)
        / sizeof (PTRACE_XFER_TYPE));
  int VAR_21 = VAR_20 * sizeof (PTRACE_XFER_TYPE);
  PTRACE_XFER_TYPE *VAR_22;
  struct cleanup *VAR_23 = ((void*)0);
  if (VAR_14 < VAR_1)
    {
      VAR_22 = (PTRACE_XFER_TYPE *) FUNC_2 (VAR_21);
    }
  else
    {
      VAR_22 = (PTRACE_XFER_TYPE *) FUNC_7 (VAR_21);
      VAR_23 = FUNC_4 (VAR_11, VAR_22);
    }

  if (VAR_15)
    {


      if (VAR_19 != VAR_12 || VAR_14 < (int) sizeof (PTRACE_XFER_TYPE))
 {

   VAR_22[0] = FUNC_6 (VAR_5, FUNC_1 (VAR_10),
         (PTRACE_ARG3_TYPE) VAR_19, 0);
 }

      if (VAR_20 > 1)
 {
   VAR_22[VAR_20 - 1] =
     FUNC_6 (VAR_5, FUNC_1 (VAR_10),
      ((PTRACE_ARG3_TYPE)
       (VAR_19 + (VAR_20 - 1) * sizeof (PTRACE_XFER_TYPE))), 0);
 }


      FUNC_5 ((char *) VAR_22 + (VAR_12 & (sizeof (PTRACE_XFER_TYPE) - 1)),
       VAR_13, VAR_14);


      for (VAR_18 = 0; VAR_18 < VAR_20; VAR_18++, VAR_19 += sizeof (PTRACE_XFER_TYPE))
 {
   VAR_9 = 0;
   FUNC_6 (VAR_6, FUNC_1 (VAR_10),
    (PTRACE_ARG3_TYPE) VAR_19, VAR_22[VAR_18]);
   if (VAR_9)
     {


       VAR_9 = 0;
       FUNC_6 (VAR_7, FUNC_1 (VAR_10),
        (PTRACE_ARG3_TYPE) VAR_19, VAR_22[VAR_18]);
     }
   if (VAR_9)
     return 0;
 }



    }
  else
    {

      for (VAR_18 = 0; VAR_18 < VAR_20; VAR_18++, VAR_19 += sizeof (PTRACE_XFER_TYPE))
 {
   VAR_9 = 0;
   VAR_22[VAR_18] = FUNC_6 (VAR_5, FUNC_1 (VAR_10),
         (PTRACE_ARG3_TYPE) VAR_19, 0);
   if (VAR_9)
     return 0;
   VAR_8;
 }


      FUNC_5 (VAR_13,
       (char *) VAR_22 + (VAR_12 & (sizeof (PTRACE_XFER_TYPE) - 1)),
       VAR_14);
    }

  if (VAR_23 != ((void*)0))
    FUNC_3 (VAR_23);
  return VAR_14;
}

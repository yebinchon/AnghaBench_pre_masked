
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ps_prochandle {int dummy; } ;
struct cleanup {int dummy; } ;
typedef int ps_err_e ;
typedef int gdb_ps_addr_t ;
struct TYPE_5__ {int (* to_xfer_memory ) (int,char*,int,int,int ,int *) ;} ;
struct TYPE_4__ {int (* to_xfer_memory ) (int,char*,int,int,int ,TYPE_1__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct cleanup*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_3__ VAR_6 ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 () ;
 TYPE_1__ VAR_7 ;
 struct cleanup* FUNC_5 () ;
 int FUNC_6 (int,char*,int,int,int ,TYPE_1__*) ;
 int FUNC_7 (int,char*,int,int,int ,int *) ;
 scalar_t__ VAR_8 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,long) ;

__attribute__((used)) static ps_err_e
FUNC_10 (int VAR_9, const struct ps_prochandle *VAR_10, gdb_ps_addr_t VAR_11,
    char *VAR_12, int VAR_13)
{
  struct cleanup *VAR_14;

  VAR_14 = FUNC_5 ();

  if (FUNC_2 (VAR_5) ||
      !FUNC_8 (VAR_5))
    VAR_5 = FUNC_4 ();
  while (VAR_13 > 0)
    {
      int VAR_15;


      if (VAR_8)
 VAR_15 = VAR_7.to_xfer_memory (VAR_11, VAR_12, VAR_13,
     VAR_9, 0, &VAR_7);
      else
 VAR_15 = VAR_6.to_xfer_memory (VAR_11, VAR_12, VAR_13,
        VAR_9, 0, &VAR_2);

      if (VAR_15 < 0)
 {
   if (VAR_9 == 0)
     FUNC_3 ("rw_common (): read", VAR_3);
   else
     FUNC_3 ("rw_common (): write", VAR_3);

   FUNC_1 (VAR_14);

   return VAR_0;
 }
      else if (VAR_15 == 0)
 {
   if (VAR_9 == 0)
     FUNC_9 ("rw_common (): unable to read at addr 0x%lx",
       (long) VAR_11);
   else
     FUNC_9 ("rw_common (): unable to write at addr 0x%lx",
       (long) VAR_11);

   FUNC_1 (VAR_14);

   return VAR_0;
 }

      VAR_13 -= VAR_15;
      VAR_12 += VAR_15;
    }

  FUNC_1 (VAR_14);

  return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct target_ops {int dummy; } ;
struct mem_attrib {int dummy; } ;
struct TYPE_2__ {int (* to_xfer_memory ) (scalar_t__,char*,int,int,struct mem_attrib*,struct target_ops*) ;} ;
typedef scalar_t__ CORE_ADDR ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (char,int ) ;
 int FUNC_2 (char*,int ) ;
 int VAR_1 ;
 int FUNC_3 (scalar_t__,char*,int,int,struct mem_attrib*,struct target_ops*) ;

__attribute__((used)) static int
FUNC_4 (CORE_ADDR VAR_2, char *VAR_3, int VAR_4, int VAR_5,
        struct mem_attrib *VAR_6,
        struct target_ops *VAR_7)
{
  int VAR_8;

  VAR_8 = VAR_0.to_xfer_memory (VAR_2, VAR_3, VAR_4, VAR_5,
     VAR_6, VAR_7);

  FUNC_0 (VAR_1,
        "target_xfer_memory (0x%x, xxx, %d, %s, xxx) = %d",
        (unsigned int) VAR_2,
        VAR_4, VAR_5 ? "write" : "read", VAR_8);



  if (VAR_8 > 0)
    {
      int VAR_9;

      FUNC_2 (", bytes =", VAR_1);
      for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
 {
   if ((((long) &(VAR_3[VAR_9])) & 0xf) == 0)
     FUNC_0 (VAR_1, "\n");
   FUNC_0 (VAR_1, " %02x", VAR_3[VAR_9] & 0xff);
 }
    }

  FUNC_1 ('\n', VAR_1);

  return VAR_8;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct target_ops {int dummy; } ;
struct mem_attrib {int dummy; } ;
struct TYPE_4__ {int (* to_xfer_memory ) (int ,char*,int,int,struct mem_attrib*,struct target_ops*) ;} ;
struct TYPE_3__ {int (* to_xfer_memory ) (int ,char*,int,int,struct mem_attrib*,struct target_ops*) ;} ;
typedef int CORE_ADDR ;


 TYPE_2__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ,char*,int,int,struct mem_attrib*,struct target_ops*) ;
 int FUNC_1 (int ,char*,int,int,struct mem_attrib*,struct target_ops*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int
FUNC_2 (CORE_ADDR VAR_3, char *VAR_4, int VAR_5, int VAR_6,
                        struct mem_attrib *VAR_7, struct target_ops *VAR_8)
{
  int VAR_9;

  if (VAR_2)
    VAR_9 = VAR_0.to_xfer_memory (VAR_3, VAR_4, VAR_5, VAR_6, VAR_7,
 VAR_8);
  else
    VAR_9 = VAR_1.to_xfer_memory (VAR_3, VAR_4, VAR_5, VAR_6, VAR_7,
 VAR_8);

  return (VAR_9);
}

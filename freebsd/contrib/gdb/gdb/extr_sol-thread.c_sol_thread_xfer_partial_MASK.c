
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct target_ops {int dummy; } ;
struct cleanup {int dummy; } ;
typedef enum target_object { ____Placeholder_target_object } target_object ;
typedef int ULONGEST ;
struct TYPE_4__ {int (* to_xfer_partial ) (struct target_ops*,int,char const*,void*,void const*,int ,int) ;} ;
struct TYPE_3__ {int (* to_xfer_partial ) (struct target_ops*,int,char const*,void*,void const*,int ,int) ;} ;
typedef int LONGEST ;


 int FUNC_0 (struct cleanup*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_2__ VAR_1 ;
 int FUNC_2 () ;
 TYPE_1__ VAR_2 ;
 struct cleanup* FUNC_3 () ;
 int FUNC_4 (struct target_ops*,int,char const*,void*,void const*,int ,int) ;
 int FUNC_5 (struct target_ops*,int,char const*,void*,void const*,int ,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (int ) ;

__attribute__((used)) static LONGEST
FUNC_7 (struct target_ops *VAR_4, enum target_object VAR_5,
     const char *VAR_6, void *VAR_7,
     const void *VAR_8, ULONGEST VAR_9, LONGEST VAR_10)
{
  int VAR_11;
  struct cleanup *VAR_12;

  VAR_12 = FUNC_3 ();

  if (FUNC_1 (VAR_0) ||
      !FUNC_6 (VAR_0))
    VAR_0 = FUNC_2 ();


  if (VAR_3)
    VAR_11 = VAR_2.to_xfer_partial (VAR_4, VAR_5, VAR_6,
      VAR_7, VAR_8, VAR_9, VAR_10);
  else
    VAR_11 = VAR_1.to_xfer_partial (VAR_4, VAR_5, VAR_6,
         VAR_7, VAR_8, VAR_9, VAR_10);

  FUNC_0 (VAR_12);

  return VAR_11;
}

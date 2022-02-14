
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct disklabel {int dummy; } ;
struct TYPE_2__ {int d_fd; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,struct disklabel*,int ) ;
 TYPE_1__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*) ;
 struct disklabel* FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_4 (int ,scalar_t__,scalar_t__) ;
 int VAR_6 ;

struct disklabel *
FUNC_5(void)
{
 static struct disklabel VAR_7;
 struct disklabel *VAR_8;

 if (VAR_5) {
  if (FUNC_4(VAR_3.d_fd, VAR_2, VAR_0) != VAR_0)
   FUNC_1(4, "cannot read bootarea");
  if (FUNC_0(
      VAR_2 + (0 +
    1 * VAR_6),
      &VAR_7, VAR_1))
   FUNC_2(1, "no valid label found");

  VAR_8 = &VAR_7;
  return &VAR_7;
 }

 if (VAR_4) {
  VAR_8 = FUNC_3(VAR_4);
  if (VAR_8 != ((void*)0))
   return (VAR_8);
 }
 return (((void*)0));
}

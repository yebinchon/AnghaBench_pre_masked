
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videomode {scalar_t__ hdisplay; scalar_t__ vdisplay; int flags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct videomode const*) ;

__attribute__((used)) static int
FUNC_1(const struct videomode *VAR_4)
{

 if (VAR_4->hdisplay > VAR_2 || VAR_4->vdisplay > VAR_1)
  return (0);


 if (FUNC_0(VAR_4) > VAR_0)
  return (0);


 if ((VAR_4->flags & VAR_3) != 0)
  return (0);

 return (1);
}

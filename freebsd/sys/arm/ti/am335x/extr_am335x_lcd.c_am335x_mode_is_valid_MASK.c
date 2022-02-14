
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct videomode {scalar_t__ dot_clock; int hdisplay; int vdisplay; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct videomode const*) ;
 int FUNC_1 (struct videomode const*) ;
 int FUNC_2 (struct videomode const*) ;
 int FUNC_3 (struct videomode const*) ;
 int FUNC_4 (struct videomode const*) ;
 int FUNC_5 (struct videomode const*) ;
 int FUNC_6 (struct videomode const*) ;

__attribute__((used)) static int
FUNC_7(const struct videomode *VAR_2)
{
 uint32_t VAR_3, VAR_4, VAR_5;
 uint32_t VAR_6, VAR_7, VAR_8;

 if (VAR_2->dot_clock > VAR_1)
  return (0);

 if (VAR_2->hdisplay & 0xf)
  return (0);

 if (VAR_2->vdisplay > 2048)
  return (0);


 VAR_3 = FUNC_0(VAR_2) - 1;
 VAR_4 = FUNC_1(VAR_2) - 1;
 VAR_5 = FUNC_2(VAR_2) - 1;
 VAR_6 = FUNC_3(VAR_2);
 VAR_7 = FUNC_4(VAR_2);
 VAR_8 = FUNC_5(VAR_2) - 1;

 if (VAR_3 > 0x3ff)
  return (0);
 if (VAR_4 > 0x3ff)
  return (0);
 if (VAR_5 > 0x3ff)
  return (0);

 if (VAR_6 > 0xff)
  return (0);
 if (VAR_7 > 0xff)
  return (0);
 if (VAR_8 > 0x3f)
  return (0);
 if (VAR_2->vdisplay*VAR_2->hdisplay*FUNC_6(VAR_2)
     > VAR_0)
  return (0);

 return (1);
}

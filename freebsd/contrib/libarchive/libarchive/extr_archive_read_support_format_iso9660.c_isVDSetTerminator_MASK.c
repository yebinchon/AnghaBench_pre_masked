
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iso9660 {int dummy; } ;


 int FUNC_0 (struct iso9660*,unsigned char const*,int,int) ;

__attribute__((used)) static int
FUNC_1(struct iso9660 *VAR_0, const unsigned char *VAR_1)
{
 (void)VAR_0;


 if (VAR_1[0] != 255)
  return (0);


 if (VAR_1[6] != 1)
  return (0);


 if (!FUNC_0(VAR_0, VAR_1, 7, 2048-7))
  return (0);

 return (1);
}

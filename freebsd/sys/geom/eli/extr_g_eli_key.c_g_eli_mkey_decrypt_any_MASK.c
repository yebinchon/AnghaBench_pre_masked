
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_eli_metadata {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct g_eli_metadata const*,unsigned char const*,unsigned char*,int) ;

int
FUNC_1(const struct g_eli_metadata *VAR_1,
    const unsigned char *VAR_2, unsigned char *VAR_3, unsigned *VAR_4)
{
 int VAR_5, VAR_6;

 if (VAR_4 != ((void*)0))
  *VAR_4 = -1;

 VAR_5 = -1;
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_6);
  if (VAR_5 == 0) {
   if (VAR_4 != ((void*)0))
    *VAR_4 = VAR_6;
   break;
  } else if (VAR_5 > 0) {
   break;
  }
 }

 return (VAR_5);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_uzip_zlib {int zs; } ;
struct g_uzip_dapi {scalar_t__ pvt; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (char*,char const*) ;

__attribute__((used)) static int
FUNC_2(struct g_uzip_dapi *VAR_1, const char *VAR_2)
{
 int VAR_3;
 struct g_uzip_zlib *VAR_4;

 VAR_4 = (struct g_uzip_zlib *)VAR_1->pvt;

 VAR_3 = 0;
 if (FUNC_0(&VAR_4->zs) != VAR_0) {
  FUNC_1("%s: UZIP(zlib) decoder reset failed\n", VAR_2);
  VAR_3 = 1;
 }
 return (VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_uzip_zlib {int zs; } ;
struct g_uzip_dapi {scalar_t__ pvt; } ;


 int VAR_0 ;
 int FUNC_0 (struct g_uzip_zlib*,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct g_uzip_dapi *VAR_1)
{
 struct g_uzip_zlib *VAR_2;

 VAR_2 = (struct g_uzip_zlib *)VAR_1->pvt;
 FUNC_1(&VAR_2->zs);
 FUNC_0(VAR_2, VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct g_uzip_dapi {void* pvt; int * rewind; int * free; int * decompress; int max_blen; } ;
struct g_uzip_zlib {struct g_uzip_dapi pub; int blksz; int zs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct g_uzip_zlib*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int *) ;
 struct g_uzip_zlib* FUNC_3 (int,int ,int) ;

struct g_uzip_dapi *
FUNC_4(uint32_t VAR_7)
{
 struct g_uzip_zlib *VAR_8;

 VAR_8 = FUNC_3(sizeof(struct g_uzip_zlib), VAR_0, VAR_1 | VAR_2);
 if (FUNC_2(&VAR_8->zs) != VAR_3) {
  goto e1;
 }
 VAR_8->blksz = VAR_7;
 VAR_8->pub.max_blen = FUNC_0(VAR_7);
 VAR_8->pub.decompress = &VAR_4;
 VAR_8->pub.free = &VAR_5;
 VAR_8->pub.rewind = &VAR_6;
 VAR_8->pub.pvt = (void *)VAR_8;
 return (&VAR_8->pub);
e1:
 FUNC_1(VAR_8, VAR_0);
 return (((void*)0));
}

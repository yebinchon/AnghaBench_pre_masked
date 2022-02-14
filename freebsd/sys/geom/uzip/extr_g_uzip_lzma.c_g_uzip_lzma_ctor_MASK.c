
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct g_uzip_dapi {struct g_uzip_lzma* pvt; int * rewind; int * free; int * decompress; int max_blen; } ;
struct g_uzip_lzma {struct g_uzip_dapi pub; int blksz; int * s; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct g_uzip_lzma*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct g_uzip_lzma* FUNC_2 (int,int ,int ) ;
 int * FUNC_3 (int ,int ) ;

struct g_uzip_dapi *
FUNC_4(uint32_t VAR_6)
{
 struct g_uzip_lzma *VAR_7;

 VAR_7 = FUNC_2(sizeof(struct g_uzip_lzma), VAR_0, VAR_1);
 VAR_7->s = FUNC_3(VAR_2, 0);
 if (VAR_7->s == ((void*)0)) {
  goto e1;
 }
 VAR_7->blksz = VAR_6;
 VAR_7->pub.max_blen = FUNC_0(VAR_6);
 VAR_7->pub.decompress = &VAR_3;
 VAR_7->pub.free = &VAR_4;
 VAR_7->pub.rewind = &VAR_5;
 VAR_7->pub.pvt = VAR_7;
 return (&VAR_7->pub);
e1:
        FUNC_1(VAR_7, VAR_0);
        return (((void*)0));
}

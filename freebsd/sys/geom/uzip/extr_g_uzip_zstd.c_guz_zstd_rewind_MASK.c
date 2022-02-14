
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_uzip_zstd {int guz_dctx; } ;
struct g_uzip_dapi {int dummy; } ;


 int VAR_0 ;
 size_t FUNC_0 (int ,int ) ;
 char* FUNC_1 (size_t) ;
 scalar_t__ FUNC_2 (size_t) ;
 int VAR_1 ;
 int FUNC_3 (char*,char const*,char*) ;
 struct g_uzip_zstd* FUNC_4 (struct g_uzip_dapi*) ;

__attribute__((used)) static int
FUNC_5(struct g_uzip_dapi *VAR_2, const char *VAR_3)
{
 struct g_uzip_zstd *VAR_4;
 size_t VAR_5;

 VAR_4 = FUNC_4(VAR_2);
 VAR_5 = FUNC_0(VAR_4->guz_dctx, VAR_1);
 if (FUNC_2(VAR_5)) {
  FUNC_3("%s: UZIP(zstd) rewind failed: %s\n", VAR_3,
      FUNC_1(VAR_5));
  return (VAR_0);
 }
 return (0);
}

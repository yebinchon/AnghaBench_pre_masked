
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t avail_in; int avail_out; void* next_out; void* next_in; } ;
struct g_uzip_zlib {TYPE_1__ zs; int blksz; } ;
struct g_uzip_dapi {scalar_t__ pvt; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (char*,char const*) ;

__attribute__((used)) static int
FUNC_2(struct g_uzip_dapi *VAR_2, const char *VAR_3, void *VAR_4,
    size_t VAR_5, void *VAR_6)
{
 int VAR_7;
 struct g_uzip_zlib *VAR_8;

 VAR_8 = (struct g_uzip_zlib *)VAR_2->pvt;

 VAR_8->zs.next_in = VAR_4;
 VAR_8->zs.avail_in = VAR_5;
 VAR_8->zs.next_out = VAR_6;
 VAR_8->zs.avail_out = VAR_8->blksz;

 VAR_7 = (FUNC_0(&VAR_8->zs, VAR_0) != VAR_1) ? 1 : 0;
 if (VAR_7 != 0) {
  FUNC_1("%s: UZIP(zlib) inflate() failed\n", VAR_3);
 }
 return (VAR_7);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nvlist_header {size_t nvlh_size; size_t nvlh_descriptors; int nvlh_flags; } ;
struct TYPE_3__ {int nvl_flags; } ;
typedef TYPE_1__ nvlist_t ;
typedef int nvlhdr ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct nvlist_header*,unsigned char const*,int) ;
 int FUNC_2 (struct nvlist_header*) ;

const unsigned char *
FUNC_3(nvlist_t *VAR_5, const unsigned char *VAR_6, size_t VAR_7,
    bool *VAR_8, size_t *VAR_9)
{
 struct nvlist_header VAR_10;
 int VAR_11;

 if (*VAR_9 < sizeof(VAR_10))
  goto fail;

 FUNC_1(&VAR_10, VAR_6, sizeof(VAR_10));

 if (!FUNC_2(&VAR_10))
  goto fail;

 if (VAR_10.nvlh_size != *VAR_9 - sizeof(VAR_10))
  goto fail;




 if (VAR_10.nvlh_descriptors > VAR_7)
  goto fail;

 if ((VAR_10.nvlh_flags & ~VAR_1) != 0)
  goto fail;

 VAR_11 = (VAR_5->nvl_flags & VAR_3);
 VAR_5->nvl_flags = (VAR_10.nvlh_flags & VAR_4) | VAR_11;

 VAR_6 += sizeof(VAR_10);
 if (VAR_8 != ((void*)0))
  *VAR_8 = (((int)VAR_10.nvlh_flags & VAR_2) != 0);
 *VAR_9 -= sizeof(VAR_10);

 return (VAR_6);
fail:
 FUNC_0(VAR_0);
 return (((void*)0));
}

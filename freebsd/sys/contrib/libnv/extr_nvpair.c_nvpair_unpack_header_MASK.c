
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nvpair_header {scalar_t__ nvph_type; size_t nvph_namesize; size_t nvph_datasize; int nvph_nitems; } ;
typedef int nvphdr ;
struct TYPE_3__ {scalar_t__ nvp_type; size_t nvp_datasize; int nvp_nitems; scalar_t__ nvp_data; struct nvpair_header* nvp_name; } ;
typedef TYPE_1__ nvpair_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t FUNC_1 (size_t) ;
 size_t FUNC_2 (size_t) ;
 size_t FUNC_3 (size_t) ;
 size_t FUNC_4 (size_t) ;
 int FUNC_5 (struct nvpair_header*,unsigned char const*,int) ;
 size_t FUNC_6 (char const*,int) ;

const unsigned char *
FUNC_7(bool VAR_6, nvpair_t *VAR_7, const unsigned char *VAR_8,
    size_t *VAR_9)
{
 struct nvpair_header VAR_10;

 if (*VAR_9 < sizeof(VAR_10))
  goto fail;

 FUNC_5(&VAR_10, VAR_8, sizeof(VAR_10));
 VAR_8 += sizeof(VAR_10);
 *VAR_9 -= sizeof(VAR_10);





 if (VAR_10.nvph_type > VAR_3 &&
     VAR_10.nvph_type != VAR_5 &&
     VAR_10.nvph_type != VAR_4) {
  goto fail;
 }


 if (!VAR_6) {
  VAR_10.nvph_namesize = FUNC_3(VAR_10.nvph_namesize);
  VAR_10.nvph_datasize = FUNC_4(VAR_10.nvph_datasize);
 }







 if (VAR_10.nvph_namesize > VAR_1)
  goto fail;
 if (*VAR_9 < VAR_10.nvph_namesize)
  goto fail;
 if (VAR_10.nvph_namesize < 1)
  goto fail;
 if (FUNC_6((const char *)VAR_8, VAR_10.nvph_namesize) !=
     (size_t)(VAR_10.nvph_namesize - 1)) {
  goto fail;
 }

 FUNC_5(VAR_7->nvp_name, VAR_8, VAR_10.nvph_namesize);
 VAR_8 += VAR_10.nvph_namesize;
 *VAR_9 -= VAR_10.nvph_namesize;

 if (*VAR_9 < VAR_10.nvph_datasize)
  goto fail;

 VAR_7->nvp_type = VAR_10.nvph_type;
 VAR_7->nvp_data = 0;
 VAR_7->nvp_datasize = VAR_10.nvph_datasize;
 VAR_7->nvp_nitems = VAR_10.nvph_nitems;

 return (VAR_8);
fail:
 FUNC_0(VAR_0);
 return (((void*)0));
}

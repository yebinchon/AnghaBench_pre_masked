
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct nvpair_header {size_t nvph_namesize; int nvph_nitems; int nvph_datasize; int nvph_type; } ;
typedef int nvphdr ;
struct TYPE_4__ {struct nvpair_header* nvp_name; int nvp_nitems; int nvp_datasize; int nvp_type; } ;
typedef TYPE_1__ nvpair_t ;


 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (int) ;
 size_t VAR_0 ;
 int FUNC_2 (unsigned char*,struct nvpair_header*,size_t) ;
 int FUNC_3 (struct nvpair_header*) ;

unsigned char *
FUNC_4(const nvpair_t *VAR_1, unsigned char *VAR_2, size_t *VAR_3)
{
 struct nvpair_header VAR_4;
 size_t VAR_5;

 FUNC_0(VAR_1);

 VAR_4.nvph_type = VAR_1->nvp_type;
 VAR_5 = FUNC_3(VAR_1->nvp_name) + 1;
 FUNC_1(VAR_5 > 0 && VAR_5 <= VAR_0);
 VAR_4.nvph_namesize = VAR_5;
 VAR_4.nvph_datasize = VAR_1->nvp_datasize;
 VAR_4.nvph_nitems = VAR_1->nvp_nitems;
 FUNC_1(*VAR_3 >= sizeof(VAR_4));
 FUNC_2(VAR_2, &VAR_4, sizeof(VAR_4));
 VAR_2 += sizeof(VAR_4);
 *VAR_3 -= sizeof(VAR_4);

 FUNC_1(*VAR_3 >= VAR_5);
 FUNC_2(VAR_2, VAR_1->nvp_name, VAR_5);
 VAR_2 += VAR_5;
 *VAR_3 -= VAR_5;

 return (VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct preloaded_file {int dummy; } ;
struct bios_smap {int base; int length; void* type; } ;


 int FUNC_0 (int ,int*,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_1 (struct preloaded_file*,int ,int,struct bios_smap*) ;
 int VAR_3 ;

void
FUNC_2(struct preloaded_file *VAR_4)
{
 uint64_t VAR_5, VAR_6;
 int VAR_7, VAR_8;
 struct bios_smap VAR_9[3], *VAR_10;

 FUNC_0(VAR_3, &VAR_5, &VAR_6);

 VAR_10 = &VAR_9[0];

 VAR_10->base = 0;
 VAR_10->length = 640 * 1024;
 VAR_10->type = VAR_2;
 VAR_10++;

 VAR_10->base = 0x100000;
 VAR_10->length = VAR_5 - 0x100000;
 VAR_10->type = VAR_2;
 VAR_10++;

 VAR_7 = 2;

        if (VAR_6 != 0) {
                VAR_10->base = 4 * VAR_0;
                VAR_10->length = VAR_6;
                VAR_10->type = VAR_2;
  VAR_7++;
        }

        VAR_8 = VAR_7 * sizeof(struct bios_smap);
        FUNC_1(VAR_4, VAR_1, VAR_8, &VAR_9[0]);
}

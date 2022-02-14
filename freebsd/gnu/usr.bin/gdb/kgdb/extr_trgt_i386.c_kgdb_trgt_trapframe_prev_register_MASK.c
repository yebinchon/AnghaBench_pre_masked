
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kgdb_frame_cache {int frame_type; scalar_t__ sp; } ;
struct frame_info {int dummy; } ;
typedef enum lval_type { ____Placeholder_lval_type } lval_type ;
typedef scalar_t__ CORE_ADDR ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_4 ;
 struct kgdb_frame_cache* FUNC_1 (struct frame_info*,void**) ;
 int* VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (void*,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (scalar_t__,void*,int) ;

__attribute__((used)) static void
FUNC_5(struct frame_info *VAR_9,
    void **VAR_10, int VAR_11, int *VAR_12, enum lval_type *VAR_13,
    CORE_ADDR *VAR_14, int *VAR_15, void *VAR_16)
{
 char VAR_17[VAR_2];
 struct kgdb_frame_cache *VAR_18;
 int VAR_19, VAR_20;

 VAR_20 = FUNC_3(VAR_3, VAR_11);

 if (VAR_16 == ((void*)0))
  VAR_16 = VAR_17;
 FUNC_2(VAR_16, 0, VAR_20);
 *VAR_12 = 0;
 *VAR_14 = 0;
 *VAR_13 = VAR_7;
 *VAR_15 = -1;

 VAR_19 = (VAR_11 >= VAR_0 && VAR_11 <= VAR_1)
     ? VAR_5[VAR_11] + VAR_8 : -1;
 if (VAR_19 == -1)
  return;

 VAR_18 = FUNC_1(VAR_9, VAR_10);
 switch (VAR_18->frame_type) {
 case 129:
  break;
 case 131:
  VAR_19 += 4;
  break;
 case 128:
  break;
 case 130:
  VAR_19 -= VAR_8;
  break;
 default:
  FUNC_0(VAR_4, "Correct FT_XXX frame offsets "
     "for %d\n", VAR_18->frame_type);
  break;
 }
 *VAR_14 = VAR_18->sp + VAR_19;
 *VAR_13 = VAR_6;
 FUNC_4(*VAR_14, VAR_16, VAR_20);
}

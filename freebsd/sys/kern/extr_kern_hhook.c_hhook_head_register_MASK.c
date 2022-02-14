
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct hhook_head {uintptr_t hhh_vid; int hhh_refcount; int hhh_flags; int hhh_hooks; scalar_t__ hhh_nhooks; void* hhh_id; void* hhh_type; } ;
typedef void* int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_2 ;
 int FUNC_2 (struct hhook_head*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *,struct hhook_head*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int *) ;
 int VAR_9 ;
 int * VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct hhook_head* FUNC_6 (void*,void*) ;
 int VAR_13 ;
 int FUNC_7 (struct hhook_head*) ;
 int FUNC_8 (struct hhook_head*,int) ;
 struct hhook_head* FUNC_9 (int,int ,int) ;
 int VAR_14 ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *) ;

int
FUNC_12(int32_t VAR_15, int32_t VAR_16, struct hhook_head **VAR_17,
    uint32_t VAR_18)
{
 struct hhook_head *VAR_19;

 VAR_19 = FUNC_6(VAR_15, VAR_16);

 if (VAR_19 != ((void*)0)) {

  FUNC_7(VAR_19);
  return (VAR_0);
 }

 VAR_19 = FUNC_9(sizeof(struct hhook_head), VAR_5,
     VAR_8 | ((VAR_18 & VAR_4) ? VAR_7 : VAR_6));

 if (VAR_19 == ((void*)0))
  return (VAR_1);

 VAR_19->hhh_type = VAR_15;
 VAR_19->hhh_id = VAR_16;
 VAR_19->hhh_nhooks = 0;
 FUNC_5(&VAR_19->hhh_hooks);
 FUNC_2(VAR_19);
 FUNC_10(&VAR_19->hhh_refcount, 1);

 FUNC_0();
 if (VAR_18 & VAR_3) {
  VAR_19->hhh_flags |= VAR_2;





 }
 FUNC_4(&VAR_13, VAR_19, VAR_11);
 VAR_14++;
 FUNC_1();

 FUNC_8(VAR_19, VAR_18);

 if (VAR_17 != ((void*)0))
  *VAR_17 = VAR_19;
 else
  FUNC_11(&VAR_19->hhh_refcount);

 return (0);
}

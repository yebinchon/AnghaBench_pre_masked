
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vm_page_t ;
struct pglist {int dummy; } ;
typedef enum ttm_caching_state { ____Placeholder_ttm_caching_state } ttm_caching_state ;
struct TYPE_2__ {int q; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct pglist*,scalar_t__,int ) ;
 int FUNC_2 (scalar_t__*,int ) ;
 scalar_t__* FUNC_3 (unsigned int,int ,int) ;
 unsigned int FUNC_4 (unsigned int,unsigned int) ;
 TYPE_1__ VAR_5 ;
 int FUNC_5 (char*,unsigned int) ;
 int FUNC_6 (struct pglist*,int,int,scalar_t__*,unsigned int) ;
 int FUNC_7 (scalar_t__*,int,unsigned int) ;
 scalar_t__ FUNC_8 (int,int) ;

__attribute__((used)) static int FUNC_9(struct pglist *VAR_6, int VAR_7,
  int VAR_8, enum ttm_caching_state VAR_9, unsigned VAR_10)
{
 vm_page_t *VAR_11;
 vm_page_t VAR_12;
 int VAR_13 = 0;
 unsigned VAR_14, VAR_15;
 unsigned VAR_16 = FUNC_4(VAR_10,
   (unsigned)(VAR_4/sizeof(vm_page_t)));


 VAR_11 = FUNC_3(VAR_16 * sizeof(vm_page_t), VAR_1,
     VAR_2 | VAR_3);

 for (VAR_14 = 0, VAR_15 = 0; VAR_14 < VAR_10; ++VAR_14) {
  VAR_12 = FUNC_8(VAR_7, VAR_9);
  if (!VAR_12) {
   FUNC_5("[TTM] Unable to get page %u\n", VAR_14);



   if (VAR_15) {
    VAR_13 = FUNC_7(VAR_11,
         VAR_9, VAR_15);
    if (VAR_13)
     FUNC_6(VAR_6,
      VAR_8, VAR_9,
      VAR_11, VAR_15);
   }
   VAR_13 = -VAR_0;
   goto out;
  }







  {
   VAR_11[VAR_15++] = VAR_12;
   if (VAR_15 == VAR_16) {

    VAR_13 = FUNC_7(VAR_11,
      VAR_9, VAR_15);
    if (VAR_13) {
     FUNC_6(VAR_6,
      VAR_8, VAR_9,
      VAR_11, VAR_15);
     goto out;
    }
    VAR_15 = 0;
   }
  }

  FUNC_1(VAR_6, VAR_12, VAR_5.q);
 }

 if (VAR_15) {
  VAR_13 = FUNC_7(VAR_11, VAR_9, VAR_15);
  if (VAR_13)
   FUNC_6(VAR_6,
     VAR_8, VAR_9,
     VAR_11, VAR_15);
 }
out:
 FUNC_2(VAR_11, VAR_1);

 return VAR_13;
}

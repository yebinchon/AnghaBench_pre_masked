
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat64 {scalar_t__ st_size; int st_mode; } ;
struct TYPE_2__ {int * rn_config; int rn_hdl; int rn_name; int rn_avl; int rn_dfd; scalar_t__ rn_nozpool; } ;
typedef TYPE_1__ rdsk_node_t ;
typedef int nvlist_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_5 (int,struct stat64*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,int ) ;
 scalar_t__ FUNC_9 (int,int **) ;

__attribute__((used)) static void
FUNC_10(void *VAR_5)
{
 rdsk_node_t *VAR_6 = VAR_5;
 struct stat64 VAR_7;
 nvlist_t *VAR_8;
 int VAR_9;

 if (VAR_6->rn_nozpool)
  return;
 if ((VAR_9 = FUNC_8(VAR_6->rn_dfd, VAR_6->rn_name, VAR_2)) < 0) {

  if (VAR_4 == VAR_0)
   FUNC_7(VAR_6->rn_avl, VAR_6->rn_name);
  return;
 }




 if (FUNC_5(VAR_9, &VAR_7) != 0 ||
     (!FUNC_2(VAR_7.st_mode) &&
     !FUNC_1(VAR_7.st_mode) &&
     !FUNC_0(VAR_7.st_mode))) {
  (void) FUNC_4(VAR_9);
  return;
 }
 if (VAR_7.st_size < VAR_3) {
  (void) FUNC_4(VAR_9);
  return;
 }


 if ((FUNC_9(VAR_9, &VAR_8)) != 0 && VAR_4 == VAR_1) {
  (void) FUNC_4(VAR_9);
  (void) FUNC_6(VAR_6->rn_hdl);
  return;
 }
 (void) FUNC_4(VAR_9);

 VAR_6->rn_config = VAR_8;
}

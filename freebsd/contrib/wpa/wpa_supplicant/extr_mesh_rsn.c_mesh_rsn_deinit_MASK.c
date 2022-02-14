
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mesh_rsn {scalar_t__ auth; scalar_t__ igtk_len; int igtk; scalar_t__ mgtk_len; int mgtk; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct mesh_rsn *VAR_0)
{
 FUNC_0(VAR_0->mgtk, 0, sizeof(VAR_0->mgtk));
 VAR_0->mgtk_len = 0;
 FUNC_0(VAR_0->igtk, 0, sizeof(VAR_0->igtk));
 VAR_0->igtk_len = 0;
 if (VAR_0->auth)
  FUNC_1(VAR_0->auth);
}

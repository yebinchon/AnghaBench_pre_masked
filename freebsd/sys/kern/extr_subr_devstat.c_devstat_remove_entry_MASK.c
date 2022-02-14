
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devstatlist {int dummy; } ;
struct devstat {int unit_number; int sequence1; } ;


 int VAR_0 ;
 int FUNC_0 (struct devstatlist*,struct devstat*,int ,int ) ;
 int FUNC_1 (int *,int) ;
 int VAR_1 ;
 struct devstatlist VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct devstat*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void
FUNC_6(struct devstat *VAR_7)
{
 struct devstatlist *VAR_8;

 FUNC_3(&VAR_5, VAR_0);
 if (VAR_7 == ((void*)0))
  return;

 FUNC_4(&VAR_5);

 VAR_8 = &VAR_2;


 FUNC_1(&VAR_7->sequence1, 1);
 if (VAR_7->unit_number != -1) {
  VAR_6--;
  FUNC_0(VAR_8, VAR_7, VAR_3, VAR_1);
 }
 FUNC_2(VAR_7);
 VAR_4++;
 FUNC_5(&VAR_5);
}

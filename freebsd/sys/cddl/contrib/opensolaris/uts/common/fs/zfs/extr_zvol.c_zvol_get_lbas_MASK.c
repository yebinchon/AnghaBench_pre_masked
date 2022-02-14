
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int zv_volsize; int zv_volblocksize; int * zv_objset; } ;
typedef TYPE_1__ zvol_state_t ;
struct maparg {int ma_blks; TYPE_1__* ma_zv; } ;
typedef int objset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int,int ,struct maparg*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_5(zvol_state_t *VAR_4)
{
 objset_t *VAR_5 = VAR_4->zv_objset;
 struct maparg VAR_6;
 int VAR_7;

 VAR_6.ma_zv = VAR_4;
 VAR_6.ma_blks = 0;
 FUNC_4(VAR_4);


 FUNC_3(FUNC_1(VAR_5), 0);
 VAR_7 = FUNC_2(FUNC_0(VAR_5), 0,
     VAR_1 | VAR_2, VAR_3, &VAR_6);
 if (VAR_7 || VAR_6.ma_blks != (VAR_4->zv_volsize / VAR_4->zv_volblocksize)) {
  FUNC_4(VAR_4);
  return (VAR_7 ? VAR_7 : VAR_0);
 }

 return (0);
}

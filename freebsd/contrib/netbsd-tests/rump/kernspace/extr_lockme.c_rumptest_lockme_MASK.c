
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct somemem {int mutexetum; } ;
typedef int krwlock_t ;
typedef int kmutex_t ;
typedef enum locktest { ____Placeholder_locktest } locktest ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct somemem* FUNC_0 (int,int ) ;
 int FUNC_1 (struct somemem*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;

void
FUNC_7(enum locktest VAR_5)
{
 struct somemem *VAR_6;
 kmutex_t VAR_7;
 krwlock_t VAR_8;

 FUNC_6(&VAR_8);
 FUNC_4(&VAR_7, VAR_2, VAR_0);

 switch (VAR_5) {
 case 131:
  FUNC_3(&VAR_7);
  FUNC_3(&VAR_7);
  break;
 case 130:
  FUNC_5(&VAR_8, VAR_4);
  FUNC_5(&VAR_8, VAR_4);
  break;
 case 129:
  FUNC_5(&VAR_8, VAR_3);
  FUNC_5(&VAR_8, VAR_4);
  break;
 case 128:
  FUNC_5(&VAR_8, VAR_4);
  FUNC_5(&VAR_8, VAR_3);
  break;
 case 133:
  FUNC_4(&VAR_7, VAR_2, VAR_0);
  break;
 case 134:
  FUNC_2(&VAR_7);
  FUNC_2(&VAR_7);
  break;
 case 135:
  FUNC_3(&VAR_7);
  FUNC_2(&VAR_7);
  break;
 case 132:
  VAR_6 = FUNC_0(sizeof(*VAR_6), VAR_1);
  FUNC_4(&VAR_6->mutexetum, VAR_2, VAR_0);
  FUNC_1(VAR_6, sizeof(*VAR_6));
  break;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfxge_evq {scalar_t__ init_state; } ;
typedef int boolean_t ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct sfxge_evq*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static boolean_t
FUNC_2(void *VAR_2)
{
 struct sfxge_evq *VAR_3;

 VAR_3 = (struct sfxge_evq *)VAR_2;
 FUNC_1(VAR_3);


 FUNC_0(VAR_3->init_state == VAR_1 ||
  VAR_3->init_state == VAR_0,
     ("evq not starting"));

 VAR_3->init_state = VAR_0;

 return (0);
}

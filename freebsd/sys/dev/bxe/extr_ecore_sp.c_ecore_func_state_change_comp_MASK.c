
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_func_sp_obj {unsigned long pending; int next_state; int state; } ;
struct bxe_softc {int dummy; } ;
typedef enum ecore_func_cmd { ____Placeholder_ecore_func_cmd } ecore_func_cmd ;


 int FUNC_0 (int,unsigned long*) ;
 int FUNC_1 (char*,int,int ,int ,unsigned long,int ) ;
 int FUNC_2 (struct bxe_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct bxe_softc*,char*,int,int ,int ) ;
 int FUNC_4 () ;
 int VAR_2 ;
 int FUNC_5 (int,unsigned long*) ;
 int FUNC_6 () ;

__attribute__((used)) static inline int FUNC_7(struct bxe_softc *VAR_3,
            struct ecore_func_sp_obj *VAR_4,
            enum ecore_func_cmd VAR_5)
{
 unsigned long VAR_6 = VAR_4->pending;

 if (!FUNC_5(VAR_5, &VAR_6)) {
  FUNC_1("Bad MC reply %d for func %d in state %d pending 0x%lx, next_state %d\n",
     VAR_5, FUNC_2(VAR_3), VAR_4->state,
     VAR_6, VAR_4->next_state);
  return VAR_1;
 }

 FUNC_3(VAR_3,
    "Completing command %d for func %d, setting state to %d\n",
    VAR_5, FUNC_2(VAR_3), VAR_4->next_state);

 VAR_4->state = VAR_4->next_state;
 VAR_4->next_state = VAR_0;




 FUNC_6();

 FUNC_0(VAR_5, &VAR_4->pending);
 FUNC_4();

 return VAR_2;
}

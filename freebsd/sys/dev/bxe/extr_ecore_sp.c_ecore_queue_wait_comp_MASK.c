
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_queue_sp_obj {int pending; } ;
struct bxe_softc {int dummy; } ;
typedef enum ecore_queue_cmd { ____Placeholder_ecore_queue_cmd } ecore_queue_cmd ;


 int FUNC_0 (struct bxe_softc*,int,int *) ;

__attribute__((used)) static int FUNC_1(struct bxe_softc *VAR_0,
     struct ecore_queue_sp_obj *VAR_1,
     enum ecore_queue_cmd VAR_2)
{
 return FUNC_0(VAR_0, VAR_2, &VAR_1->pending);
}

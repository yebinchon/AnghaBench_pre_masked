
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_exeq_elem {int dummy; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,char*) ;
 struct ecore_exeq_elem* FUNC_1 (int,int ,struct bxe_softc*) ;
 int VAR_0 ;

__attribute__((used)) static inline struct ecore_exeq_elem *FUNC_2(
 struct bxe_softc *VAR_1)
{
 FUNC_0(VAR_1, "Allocating a new exe_queue element\n");
 return FUNC_1(sizeof(struct ecore_exeq_elem), VAR_0,
       VAR_1);
}

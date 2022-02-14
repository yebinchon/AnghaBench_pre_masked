
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int isc_result_t ;
struct TYPE_3__ {int valid; int * proc; int entry; } ;
typedef TYPE_1__ isc_interfaceiter_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,int,int *) ;

__attribute__((used)) static isc_result_t
FUNC_1(isc_interfaceiter_t *VAR_2) {
 if (VAR_2->proc != ((void*)0) &&
     FUNC_0(VAR_2->entry, sizeof(VAR_2->entry), VAR_2->proc) != ((void*)0))
  VAR_2->valid = VAR_1;
 else
  VAR_2->valid = VAR_0;
 return (VAR_2->valid);
}

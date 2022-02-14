
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_5__ {int dh_sigstate; } ;
struct TYPE_4__ {TYPE_2__ km_header; int * km_ownerthread; int km_abandoned; } ;
typedef TYPE_1__ kmutant ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_2__*,int ) ;

__attribute__((used)) static uint32_t
FUNC_3(kmutant *VAR_5, uint8_t VAR_6)
{
 uint32_t VAR_7;

 FUNC_0(&VAR_4);
 VAR_7 = VAR_5->km_header.dh_sigstate;
 if (VAR_5->km_ownerthread != VAR_3) {
  FUNC_1(&VAR_4);
  return (VAR_2);
 }

 VAR_5->km_header.dh_sigstate++;
 VAR_5->km_abandoned = VAR_0;

 if (VAR_5->km_header.dh_sigstate == 1) {
  VAR_5->km_ownerthread = ((void*)0);
  FUNC_2(&VAR_5->km_header, VAR_1);
 }

 FUNC_1(&VAR_4);

 return (VAR_7);
}

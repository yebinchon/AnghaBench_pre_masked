
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_10__ {int isp_nchan; } ;
typedef TYPE_2__ ispsoftc_t ;
struct TYPE_11__ {scalar_t__ role; TYPE_1__* portdb; } ;
typedef TYPE_3__ fcparam ;
struct TYPE_9__ {scalar_t__ state; scalar_t__ handle; } ;


 TYPE_3__* FUNC_0 (TYPE_2__*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (TYPE_2__*,int ,char*) ;

__attribute__((used)) static uint16_t
FUNC_3(ispsoftc_t *VAR_8, uint16_t *VAR_9)
{
 fcparam *VAR_10;
 int VAR_11, VAR_12, VAR_13;
 uint16_t VAR_14, VAR_15, VAR_16;

 VAR_14 = *VAR_9;
 if (FUNC_1(VAR_8)) {
  VAR_15 = 0;
  VAR_16 = VAR_6 - 1;
 } else {
  VAR_15 = VAR_7 + 1;
  VAR_16 = VAR_5 - 1;
 }
 VAR_13 = 0;

next:
 if (VAR_14 == VAR_4) {
  VAR_14 = VAR_15;
 } else {
  VAR_14++;
  if (VAR_14 > VAR_16) {
   if (++VAR_13 >= 2) {
    FUNC_2(VAR_8, VAR_1, "Out of port handles!");
    return (VAR_4);
   }
   VAR_14 = VAR_15;
  }
 }
 for (VAR_12 = 0; VAR_12 < VAR_8->isp_nchan; VAR_12++) {
  VAR_10 = FUNC_0(VAR_8, VAR_12);
  if (VAR_10->role == VAR_2)
   continue;
  for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
   if (VAR_10->portdb[VAR_11].state != VAR_0 &&
       VAR_10->portdb[VAR_11].handle == VAR_14)
    goto next;
  }
 }
 *VAR_9 = VAR_14;
 return (VAR_14);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_5__ {scalar_t__ e_type; scalar_t__ s; } ;
struct TYPE_6__ {TYPE_1__ hdr32; } ;
struct TYPE_7__ {TYPE_2__ tt; } ;
typedef TYPE_3__ tokenstr_t ;
typedef int time_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (scalar_t__,int *,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__* VAR_12 ;
 size_t VAR_13 ;

__attribute__((used)) static int
FUNC_4(tokenstr_t VAR_14, uint32_t *VAR_15)
{
 uint16_t *VAR_16;
 int VAR_17;

 FUNC_1((*VAR_15), (VAR_2 | VAR_3 | VAR_4 | VAR_5 | VAR_6 | VAR_7));


 if (!FUNC_0(VAR_9, VAR_2)) {
  if (FUNC_0(VAR_9, VAR_3)) {
   if (FUNC_3((time_t)VAR_14.tt.hdr32.s, VAR_10) < 0) {

    return (0);
   }
  }

  if (FUNC_0(VAR_9, VAR_4)) {
   if (FUNC_3(VAR_11, (time_t)VAR_14.tt.hdr32.s) < 0) {

    return (0);
   }
  }
 }

 if (FUNC_0(VAR_9, VAR_5)) {




  if (FUNC_2(VAR_14.tt.hdr32.e_type, &VAR_8, VAR_0,
      VAR_1) != 1)
   return (0);
 }


 if (FUNC_0(VAR_9, VAR_6)) {
  VAR_17 = 0;
  for (VAR_16 = VAR_12; VAR_16 < &VAR_12[VAR_13]; VAR_16++)
   if (VAR_14.tt.hdr32.e_type == *VAR_16)
    VAR_17 = 1;
  if (VAR_17 == 0)
   return (0);
 }

 return (1);
}

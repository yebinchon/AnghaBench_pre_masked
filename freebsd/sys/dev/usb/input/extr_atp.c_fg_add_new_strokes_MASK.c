
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u_int ;
struct atp_softc {int dummy; } ;
struct TYPE_6__ {int matched; size_t cum; } ;
typedef TYPE_1__ fg_pspan ;
typedef size_t atp_axis ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t FUNC_0 (size_t) ;
 int FUNC_1 (struct atp_softc*,TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(struct atp_softc *VAR_3, fg_pspan *VAR_4,
    u_int VAR_5, fg_pspan *VAR_6, u_int VAR_7)
{
 fg_pspan VAR_8[2][VAR_0];
 u_int VAR_9[2];
 u_int VAR_10;
 u_int VAR_11;


 for (VAR_10 = 0, VAR_9[VAR_1] = 0; VAR_10 < VAR_5; VAR_10++) {
  if (VAR_4[VAR_10].matched == 0) {
   VAR_8[VAR_1][VAR_9[VAR_1]] = VAR_4[VAR_10];
   VAR_9[VAR_1]++;
  }
 }
 for (VAR_11 = 0, VAR_9[VAR_2] = 0; VAR_11 < VAR_7; VAR_11++) {
  if (VAR_6[VAR_11].matched == 0) {
   VAR_8[VAR_2][VAR_9[VAR_2]] = VAR_6[VAR_11];
   VAR_9[VAR_2]++;
  }
 }

 if (VAR_9[VAR_1] == VAR_9[VAR_2]) {

  for (VAR_10 = 0, VAR_11 = 0; (VAR_10 < VAR_9[VAR_1]) && (VAR_11 < VAR_9[VAR_2]); VAR_10++, VAR_11++)
   FUNC_1(VAR_3, &VAR_8[VAR_1][VAR_10], &VAR_8[VAR_2][VAR_11]);
 } else {
  u_int VAR_12 = 0;
  atp_axis VAR_13;
  u_int VAR_14;
  u_int VAR_15 = 0;

  VAR_13 = (VAR_9[VAR_1] > VAR_9[VAR_2]) ? VAR_2 : VAR_1;
  VAR_14 = FUNC_0(VAR_9[VAR_1] - VAR_9[VAR_2]);
  for (VAR_10 = 0; VAR_10 < VAR_9[VAR_13]; VAR_10++) {
   if (VAR_8[VAR_13][VAR_10].cum > VAR_12) {
    VAR_15 = VAR_10;
    VAR_12 = VAR_8[VAR_13][VAR_10].cum;
   }
  }


  VAR_10 = 0, VAR_11 = 0;
  for (; (VAR_10 < VAR_9[VAR_1]) && (VAR_11 < VAR_9[VAR_2]); VAR_10++, VAR_11++) {
   FUNC_1(VAR_3, &VAR_8[VAR_1][VAR_10], &VAR_8[VAR_2][VAR_11]);


   if (VAR_14 > 0) {
    if ((VAR_13 == VAR_1) &&
        (VAR_15 == VAR_10)) {
     VAR_10--;
     VAR_14--;
    } else if ((VAR_13 == VAR_2) &&
        (VAR_15 == VAR_11)) {
     VAR_11--;
     VAR_14--;
    }
   }
  }
 }
}

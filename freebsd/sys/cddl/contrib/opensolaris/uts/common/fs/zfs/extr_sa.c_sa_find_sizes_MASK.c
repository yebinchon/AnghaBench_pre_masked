
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_6__ {scalar_t__ sa_force_spill; } ;
typedef TYPE_1__ sa_os_t ;
typedef int sa_hdr_phys_t ;
struct TYPE_7__ {int sa_attr; scalar_t__ sa_length; } ;
typedef TYPE_2__ sa_bulk_attr_t ;
typedef scalar_t__ sa_buf_type_t ;
typedef int dmu_buf_t ;
typedef int boolean_t ;
typedef int blkptr_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int
FUNC_5(sa_os_t *VAR_5, sa_bulk_attr_t *VAR_6, int VAR_7,
    dmu_buf_t *VAR_8, sa_buf_type_t VAR_9, int VAR_10, int *VAR_11,
    int *VAR_12, boolean_t *VAR_13)
{
 int VAR_14 = 0;
 int VAR_15;
 int VAR_16;
 int VAR_17;

 if (VAR_9 == VAR_3 && VAR_5->sa_force_spill) {
  *VAR_12 = 0;
  *VAR_11 = 0;
  *VAR_13 = VAR_1;
  return (0);
 }

 *VAR_11 = -1;
 *VAR_12 = 0;
 *VAR_13 = VAR_0;

 VAR_17 = 0;
 VAR_16 = (FUNC_3(VAR_8) == VAR_2) ? 0 :
     sizeof (sa_hdr_phys_t);

 FUNC_0(FUNC_1(VAR_10, 8));

 for (VAR_15 = 0; VAR_15 != VAR_7; VAR_15++) {
  boolean_t VAR_18;

  *VAR_12 = FUNC_2(*VAR_12, 8);
  *VAR_12 += VAR_6[VAR_15].sa_length;
  if (*VAR_13)
   continue;

  VAR_18 = (FUNC_4(VAR_5, VAR_6[VAR_15].sa_attr) == 0);
  if (VAR_18) {
   VAR_14++;
  }

  if (VAR_18 && VAR_14 > 1) {




   if (VAR_9 == VAR_4 ||
       FUNC_2(VAR_16 + sizeof (uint16_t), 8) +
       *VAR_12 < VAR_10) {







    VAR_16 += sizeof (uint16_t);
    if (*VAR_11 != -1)
     VAR_17 += sizeof (uint16_t);
   } else {
    FUNC_0(VAR_9 == VAR_3);
    if (*VAR_11 == -1)
     *VAR_11 = VAR_15;
    *VAR_13 = VAR_1;
    continue;
   }
  }







  if (VAR_9 == VAR_3 && *VAR_11 == -1 &&
      (*VAR_12 + FUNC_2(VAR_16, 8)) >
      (VAR_10 - sizeof (blkptr_t))) {
   *VAR_11 = VAR_15;
  }

  if ((*VAR_12 + FUNC_2(VAR_16, 8)) > VAR_10 &&
      VAR_9 == VAR_3)
   *VAR_13 = VAR_1;
 }

 if (*VAR_13)
  VAR_16 -= VAR_17;

 VAR_16 = FUNC_2(VAR_16, 8);
 return (VAR_16);
}

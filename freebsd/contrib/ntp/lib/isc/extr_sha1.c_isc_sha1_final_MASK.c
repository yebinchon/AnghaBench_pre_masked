
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* count; int* state; } ;
typedef TYPE_1__ isc_sha1_t ;


 int FUNC_0 (int) ;
 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int FUNC_1 (TYPE_1__*,unsigned char*,int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

void
FUNC_3(isc_sha1_t *VAR_2, unsigned char *VAR_3) {
 unsigned int VAR_4;
 unsigned char VAR_5[8];

 FUNC_0(VAR_3 != 0);
 FUNC_0(VAR_2 != 0);

 for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {

  VAR_5[VAR_4] = (unsigned char)
   ((VAR_2->count[(VAR_4 >= 4 ? 0 : 1)]
     >> ((3 - (VAR_4 & 3)) * 8)) & 255);
 }

 FUNC_1(VAR_2, &VAR_1, 1);
 while ((VAR_2->count[0] & 504) != 448)
  FUNC_1(VAR_2, &VAR_0, 1);

 FUNC_1(VAR_2, VAR_5, 8);

 if (VAR_3) {
  for (VAR_4 = 0; VAR_4 < 20; VAR_4++)
   VAR_3[VAR_4] = (unsigned char)
    ((VAR_2->state[VAR_4 >> 2]
      >> ((3 - (VAR_4 & 3)) * 8)) & 255);
 }

 FUNC_2(VAR_2, 0, sizeof(isc_sha1_t));
}

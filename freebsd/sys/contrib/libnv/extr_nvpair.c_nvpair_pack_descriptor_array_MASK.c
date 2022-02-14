
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int value ;
struct TYPE_5__ {scalar_t__ nvp_type; size_t nvp_datasize; unsigned int nvp_nitems; } ;
typedef TYPE_1__ nvpair_t ;
typedef int int64_t ;


 int FUNC_0 (TYPE_1__ const*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned char*,int*,int) ;
 int* FUNC_3 (TYPE_1__ const*,int *) ;

unsigned char *
FUNC_4(const nvpair_t *VAR_1, unsigned char *VAR_2,
    int64_t *VAR_3, size_t *VAR_4)
{
 int64_t VAR_5;
 const int *VAR_6;
 unsigned int VAR_7;

 FUNC_0(VAR_1);
 FUNC_1(VAR_1->nvp_type == VAR_0);
 FUNC_1(*VAR_4 >= VAR_1->nvp_datasize);

 VAR_6 = FUNC_3(VAR_1, ((void*)0));
 FUNC_1(VAR_6 != ((void*)0));

 for (VAR_7 = 0; VAR_7 < VAR_1->nvp_nitems; VAR_7++) {
  FUNC_1(*VAR_4 >= sizeof(VAR_5));

  VAR_5 = VAR_6[VAR_7];
  if (VAR_5 != -1) {





   FUNC_1(VAR_3 != ((void*)0));

   VAR_5 = *VAR_3;
   (*VAR_3)++;
  }
  FUNC_2(VAR_2, &VAR_5, sizeof(VAR_5));
  VAR_2 += sizeof(VAR_5);
  *VAR_4 -= sizeof(VAR_5);
 }

 return (VAR_2);
}

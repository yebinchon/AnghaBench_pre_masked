
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ nvp_type; size_t nvp_datasize; unsigned int nvp_nitems; } ;
typedef TYPE_1__ nvpair_t ;


 int FUNC_0 (TYPE_1__ const*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned char*,void const*,size_t) ;
 char** FUNC_3 (TYPE_1__ const*,int *) ;
 int FUNC_4 (char const* const) ;

unsigned char *
FUNC_5(const nvpair_t *VAR_1, unsigned char *VAR_2, size_t *VAR_3)
{
 unsigned int VAR_4;
 size_t VAR_5, VAR_6;
 const char * const *VAR_7;

 FUNC_0(VAR_1);
 FUNC_1(VAR_1->nvp_type == VAR_0);
 FUNC_1(*VAR_3 >= VAR_1->nvp_datasize);

 VAR_5 = 0;
 VAR_7 = FUNC_3(VAR_1, ((void*)0));
 FUNC_1(VAR_7 != ((void*)0));

 for (VAR_4 = 0; VAR_4 < VAR_1->nvp_nitems; VAR_4++) {
  VAR_6 = FUNC_4(VAR_7[VAR_4]) + 1;
  FUNC_1(*VAR_3 >= VAR_6);

  FUNC_2(VAR_2, (const void *)VAR_7[VAR_4], VAR_6);
  VAR_5 += VAR_6;
  VAR_2 += VAR_6;
  *VAR_3 -= VAR_6;
 }

 FUNC_1(VAR_5 == VAR_1->nvp_datasize);

 return (VAR_2);
}

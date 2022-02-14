
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* fmt; } ;
typedef TYPE_2__ bhnd_nvram_val ;
typedef int bhnd_nvram_type ;
struct TYPE_7__ {size_t (* op_nelem ) (TYPE_2__*) ;int * op_next; } ;


 int FUNC_0 (char*,int ,size_t,int) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (TYPE_2__*,size_t*,int *) ;
 void* FUNC_3 (TYPE_2__*,void const*,size_t*) ;
 int FUNC_4 (void const*,size_t,int ,size_t*) ;
 size_t FUNC_5 (TYPE_2__*) ;

size_t
FUNC_6(bhnd_nvram_val *VAR_0)
{
 const void *VAR_1;
 bhnd_nvram_type VAR_2;
 size_t VAR_3, VAR_4;
 int VAR_5;


 if (VAR_0->fmt->op_nelem != ((void*)0))
  return (VAR_0->fmt->op_nelem(VAR_0));
 if (VAR_0->fmt->op_next != ((void*)0)) {
  const void *VAR_6;

  VAR_6 = ((void*)0);
  VAR_3 = 0;
  while ((VAR_6 = FUNC_3(VAR_0, VAR_6, &VAR_4)) != ((void*)0))
   VAR_3++;

  return (VAR_3);
 }


 VAR_1 = FUNC_2(VAR_0, &VAR_4, &VAR_2);
 if ((VAR_5 = FUNC_4(VAR_1, VAR_4, VAR_2, &VAR_3))) {

  FUNC_0("error calculating element count for type '%s' "
      "with length %zu: %d\n", FUNC_1(VAR_2), VAR_4,
      VAR_5);
 }

 return (VAR_3);
}

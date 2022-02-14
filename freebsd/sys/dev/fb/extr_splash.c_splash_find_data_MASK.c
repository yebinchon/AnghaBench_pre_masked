
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t data_size; void* data; int * data_type; } ;
typedef TYPE_1__ splash_decoder_t ;
typedef int * caddr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (int *) ;
 size_t FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (char*,void*,size_t) ;

__attribute__((used)) static int
FUNC_4(splash_decoder_t *VAR_2)
{
 caddr_t VAR_3;
 void *VAR_4;
 size_t VAR_5;

 if (VAR_2->data_type == ((void*)0))
  return (0);

 VAR_3 = FUNC_2(VAR_2->data_type);
 if (VAR_3 == ((void*)0))
  return (VAR_0);

 VAR_4 = FUNC_0(VAR_3);
 VAR_5 = FUNC_1(VAR_3);
 if (VAR_4 == ((void*)0) || VAR_5 == 0)
  return (VAR_0);

 if (VAR_1)
  FUNC_3("splash: image@%p, size:%zu\n", VAR_4, VAR_5);

 VAR_2->data = VAR_4;
 VAR_2->data_size = VAR_5;
 return (0);
}

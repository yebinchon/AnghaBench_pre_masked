
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {void const* ptr; } ;
struct TYPE_7__ {size_t data_len; int data_type; TYPE_1__ data; int data_storage; } ;
typedef TYPE_2__ bhnd_nvram_val ;
typedef int bhnd_nvram_type ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_1 (TYPE_2__*,size_t,int ,int) ;
 int FUNC_2 (void const*,size_t,int ) ;
 int FUNC_3 (void*,void const*,size_t) ;

__attribute__((used)) static int
FUNC_4(bhnd_nvram_val *VAR_5, const void *VAR_6, size_t VAR_7,
    bhnd_nvram_type VAR_8, uint32_t VAR_9)
{
 void *VAR_10;
 int VAR_11;

 FUNC_0(VAR_5);


 if ((VAR_11 = FUNC_2(VAR_6, VAR_7, VAR_8)))
  return (VAR_11);


 if ((VAR_9 & VAR_0) ||
     (VAR_9 & VAR_3))
 {
  if (VAR_9 & VAR_3)
   VAR_5->data_storage = VAR_1;
  else
   VAR_5->data_storage = VAR_2;

  VAR_5->data.ptr = VAR_6;
  VAR_5->data_type = VAR_8;
  VAR_5->data_len = VAR_7;
  return (0);
 }


 VAR_10 = FUNC_1(VAR_5, VAR_7, VAR_8, VAR_9);
 if (VAR_10 == ((void*)0))
  return (VAR_4);


 FUNC_3(VAR_10, VAR_6, VAR_7);

 return (0);
}

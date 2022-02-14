
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {char* nvp_name; int nvp_data; int nvp_magic; } ;
typedef TYPE_1__ nvpair_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,scalar_t__) ;
 unsigned char* FUNC_3 (int,TYPE_1__*,unsigned char const*,size_t*) ;
 scalar_t__ FUNC_4 (char*) ;

const unsigned char *
FUNC_5(bool VAR_2, const unsigned char *VAR_3, size_t *VAR_4,
    nvpair_t **VAR_5)
{
 nvpair_t *VAR_6, *VAR_7;

 VAR_6 = FUNC_0(1, sizeof(*VAR_6) + VAR_1);
 if (VAR_6 == ((void*)0))
  return (((void*)0));
 VAR_6->nvp_name = (char *)(VAR_6 + 1);

 VAR_3 = FUNC_3(VAR_2, VAR_6, VAR_3, VAR_4);
 if (VAR_3 == ((void*)0))
  goto fail;
 VAR_7 = FUNC_2(VAR_6, sizeof(*VAR_6) + FUNC_4(VAR_6->nvp_name) + 1);
 if (VAR_7 == ((void*)0))
  goto fail;
 VAR_6 = VAR_7;


 VAR_6->nvp_name = (char *)(VAR_6 + 1);
 VAR_6->nvp_data = 0x00;
 VAR_6->nvp_magic = VAR_0;
 *VAR_5 = VAR_6;
 return (VAR_3);
fail:
 FUNC_1(VAR_6);
 return (((void*)0));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uchar_t ;
struct TYPE_11__ {int td_iihash; } ;
typedef TYPE_1__ tdata_t ;
struct TYPE_12__ {int ii_type; } ;
typedef TYPE_2__ iidesc_t ;
struct TYPE_13__ {int st_info; } ;
typedef TYPE_3__ GElf_Sym ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;


 int FUNC_1 (int ,TYPE_2__*) ;
 TYPE_2__* FUNC_2 (TYPE_2__*,char const*,char const*) ;

__attribute__((used)) static iidesc_t *
FUNC_3(tdata_t *VAR_2, GElf_Sym *VAR_3, iidesc_t *VAR_4,
    const char *VAR_5, const char *VAR_6)
{
 iidesc_t *VAR_7 = FUNC_2(VAR_4, VAR_5, VAR_6);
 uchar_t VAR_8 = FUNC_0(VAR_3->st_info);

 switch (VAR_8) {
 case 128:
  VAR_7->ii_type = VAR_1;
  break;
 case 129:
  VAR_7->ii_type = VAR_0;
  break;
 }

 FUNC_1(VAR_2->td_iihash, VAR_7);

 return (VAR_7);
}

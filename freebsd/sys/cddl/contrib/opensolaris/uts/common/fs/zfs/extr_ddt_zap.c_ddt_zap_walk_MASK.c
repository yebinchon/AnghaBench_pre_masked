
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zap_cursor_t ;
struct TYPE_5__ {int za_integer_length; scalar_t__ za_name; int za_num_integers; } ;
typedef TYPE_1__ zap_attribute_t ;
typedef int uint64_t ;
typedef int uchar_t ;
typedef int objset_t ;
typedef int ddt_key_t ;
struct TYPE_6__ {int dde_key; int dde_phys; } ;
typedef TYPE_2__ ddt_entry_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int *,int *,int ,int ) ;
 int FUNC_6 (int *,TYPE_1__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,int *,int ,int,int ,int *) ;

__attribute__((used)) static int
FUNC_9(objset_t *VAR_1, uint64_t VAR_2, ddt_entry_t *VAR_3, uint64_t *VAR_4)
{
 zap_cursor_t VAR_5;
 zap_attribute_t VAR_6;
 int VAR_7;

 if (*VAR_4 == 0) {







  FUNC_4(&VAR_5, VAR_1, VAR_2);
 } else {
  FUNC_5(&VAR_5, VAR_1, VAR_2, *VAR_4);
 }
 if ((VAR_7 = FUNC_6(&VAR_5, &VAR_6)) == 0) {
  uchar_t VAR_8[sizeof (VAR_3->dde_phys) + 1];
  uint64_t VAR_9 = VAR_6.za_num_integers;
  FUNC_0(VAR_6.za_integer_length == 1);
  VAR_7 = FUNC_8(VAR_1, VAR_2, (uint64_t *)VAR_6.za_name,
      VAR_0, 1, VAR_9, VAR_8);
  FUNC_0(VAR_7 == 0);
  if (VAR_7 == 0) {
   FUNC_1(VAR_8, VAR_3->dde_phys, VAR_9,
       sizeof (VAR_3->dde_phys));
   VAR_3->dde_key = *(ddt_key_t *)VAR_6.za_name;
  }
  FUNC_2(&VAR_5);
  *VAR_4 = FUNC_7(&VAR_5);
 }
 FUNC_3(&VAR_5);
 return (VAR_7);
}

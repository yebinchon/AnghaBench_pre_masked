
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct _memstream {int dummy; } ;
struct TYPE_5__ {int chr; } ;
struct TYPE_6__ {TYPE_1__ u; } ;
typedef TYPE_2__ _citrus_prop_object_t ;


 int VAR_0 ;
 int FUNC_0 (struct _memstream*,int*) ;
 int FUNC_1 (struct _memstream*,TYPE_2__*) ;
 int FUNC_2 (struct _memstream*) ;
 int FUNC_3 (struct _memstream*) ;
 int FUNC_4 (struct _memstream*,int) ;

__attribute__((used)) static int
FUNC_5(struct _memstream * __restrict VAR_1,
    _citrus_prop_object_t * __restrict VAR_2)
{
 int VAR_3, VAR_4;

 FUNC_3(VAR_1);
 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3 != '\'') {
  FUNC_4(VAR_1, VAR_3);
  return (FUNC_1(VAR_1, VAR_2));
 }
 VAR_4 = FUNC_0(VAR_1, &VAR_3);
 if (VAR_4 != 0)
  return (VAR_4);
 VAR_2->u.chr = VAR_3;
 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3 != '\'')
  return (VAR_0);
 return (0);
}

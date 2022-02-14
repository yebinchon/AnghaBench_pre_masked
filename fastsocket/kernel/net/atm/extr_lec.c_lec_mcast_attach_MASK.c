
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lec_priv {int dummy; } ;
struct atm_vcc {scalar_t__ proto_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;
 int FUNC_0 (struct lec_priv*,struct atm_vcc*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct atm_vcc *VAR_3, int VAR_4)
{
 if (VAR_4 < 0 || VAR_4 >= VAR_1 || !VAR_2[VAR_4])
  return -VAR_0;
 VAR_3->proto_data = VAR_2[VAR_4];
 return FUNC_0((struct lec_priv *)FUNC_1(VAR_2[VAR_4]),
    VAR_3);
}

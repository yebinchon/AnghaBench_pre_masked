
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct match {int m_ret; int m_name; } ;
struct TYPE_2__ {scalar_t__ ii_type; int ii_dtype; int ii_name; } ;
typedef TYPE_1__ iidesc_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(void *VAR_2, void *VAR_3)
{
 iidesc_t *VAR_4 = VAR_2;
 struct match *VAR_5 = VAR_3;
 if (!FUNC_0(VAR_4->ii_name, VAR_5->m_name))
  return (0);

 if (VAR_4->ii_type != VAR_1 && VAR_4->ii_type != VAR_0)
  return (0);

 VAR_5->m_ret = VAR_4->ii_dtype;
 return (-1);
}

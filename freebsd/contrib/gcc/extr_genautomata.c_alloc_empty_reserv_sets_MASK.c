
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int set_el_t ;
typedef scalar_t__ reserv_sets_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static reserv_sets_t
FUNC_4 (void)
{
  reserv_sets_t VAR_2;

  FUNC_2 (&VAR_1, VAR_0 * sizeof (set_el_t));
  VAR_2 = (reserv_sets_t) FUNC_1 (&VAR_1);
  (void) FUNC_3 (&VAR_1);
  FUNC_0 (VAR_2, 0, VAR_0 * sizeof (set_el_t));
  return VAR_2;
}

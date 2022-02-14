
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mp_int ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *,int *,int *) ;

__attribute__((used)) static int FUNC_4 (mp_int * VAR_1, mp_int * VAR_2, mp_int * VAR_3, mp_int * VAR_4)
{
  int VAR_5;
  mp_int VAR_6;

  if ((VAR_5 = FUNC_1 (&VAR_6)) != VAR_0) {
    return VAR_5;
  }

  if ((VAR_5 = FUNC_3 (VAR_1, VAR_2, &VAR_6)) != VAR_0) {
    FUNC_0 (&VAR_6);
    return VAR_5;
  }
  VAR_5 = FUNC_2 (&VAR_6, VAR_3, VAR_4);
  FUNC_0 (&VAR_6);
  return VAR_5;
}

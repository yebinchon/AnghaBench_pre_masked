
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int libzfs_handle_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 double VAR_2 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_3 ;
 double FUNC_1 (int,int) ;
 int FUNC_2 (int *,char*) ;
 double FUNC_3 (char const*,char**) ;
 int FUNC_4 (char const*,char**,int) ;
 int FUNC_5 (int *,int ,...) ;

int
FUNC_6(libzfs_handle_t *VAR_4, const char *VAR_5, uint64_t *VAR_6)
{
 char *VAR_7;
 int VAR_8;

 *VAR_6 = 0;


 if ((VAR_5[0] < '0' || VAR_5[0] > '9') && VAR_5[0] != '.') {
  if (VAR_4)
   FUNC_5(VAR_4, FUNC_0(VAR_1,
       "bad numeric value '%s'"), VAR_5);
  return (-1);
 }


 VAR_3 = 0;
 *VAR_6 = FUNC_4(VAR_5, &VAR_7, 10);





 if (VAR_3 == VAR_0) {
  if (VAR_4)
   FUNC_5(VAR_4, FUNC_0(VAR_1,
       "numeric value is too large"));
  return (-1);
 }





 if (*VAR_7 == '.') {
  double VAR_9 = FUNC_3(VAR_5, &VAR_7);

  if ((VAR_8 = FUNC_2(VAR_4, VAR_7)) == -1)
   return (-1);

  VAR_9 *= FUNC_1(2, VAR_8);

  if (VAR_9 > VAR_2) {
   if (VAR_4)
    FUNC_5(VAR_4, FUNC_0(VAR_1,
        "numeric value is too large"));
   return (-1);
  }

  *VAR_6 = (uint64_t)VAR_9;
 } else {
  if ((VAR_8 = FUNC_2(VAR_4, VAR_7)) == -1)
   return (-1);


  if (VAR_8 >= 64 || (*VAR_6 << VAR_8) >> VAR_8 != *VAR_6) {
   if (VAR_4)
    FUNC_5(VAR_4, FUNC_0(VAR_1,
        "numeric value is too large"));
   return (-1);
  }

  *VAR_6 <<= VAR_8;
 }

 return (0);
}
